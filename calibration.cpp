#include "calibration.h"
#include "math.h"

Calibration::Calibration()
{

}

void Calibration::RegressionModel(float coefficient[2][9])
        {
            float LsumX1 = 0;
            float LsumX2 = 0;
            float LsumsqX1 = 0;
            float LsumsqX2 = 0;

            float RsumX1 = 0;
            float RsumX2 = 0;
            float RsumsqX1 = 0;
            float RsumsqX2 = 0;

            float sumY1 = 0;
            float sumY2 = 0;

            float LsumX1Y1 = 0;
            float LsumX1Y2 = 0;
            float LsumX2Y1 = 0;
            float LsumX2Y2 = 0;
            float LsumX1X2 = 0;

            float RsumX1Y1 = 0;
            float RsumX1Y2 = 0;
            float RsumX2Y1 = 0;
            float RsumX2Y2 = 0;
            float RsumX1X2 = 0;

            int length = (sizeof(samples)/sizeof(*samples)) / 6;
            //calc sum of samples
            for (int j = 0; j < length; ++j)
            {

                LsumX1 += samples[j][0];
                LsumX2 += samples[j][1];
                LsumsqX1 += pow(samples[j][0], 2);
                LsumsqX2 += pow(samples[j][1], 2);

                RsumX1 += samples[j][2];
                RsumX2 += samples[j][3];
                RsumsqX1 += pow(samples[j][2], 2);
                RsumsqX2 += pow(samples[j][3], 2);

                sumY1 += samples[j][4];
                sumY2 += samples[j][5];

                //for c1,c2,c3,c4
                LsumX1Y1 += samples[j][0] * samples[j][4];
                LsumX1Y2 += samples[j][0] * samples[j][5];
                RsumX1Y1 += samples[j][2] * samples[j][4];
                RsumX1Y2 += samples[j][2] * samples[j][5];

                //for d1,d2,d3,d4
                LsumX2Y1 += samples[j][1] * samples[j][4];
                LsumX2Y2 += samples[j][1] * samples[j][5];
                RsumX2Y1 += samples[j][3] * samples[j][4];
                RsumX2Y2 += samples[j][3] * samples[j][5];

                //for e
                LsumX1X2 += samples[j][0] * samples[j][1];
                RsumX1X2 += samples[j][2] * samples[j][3];
            }
            float LX1_mean = LsumX1 / length;
            float LX2_mean = LsumX2 / length;
            float RX1_mean = RsumX1 / length;
            float RX2_mean = RsumX2 / length;
            float Y1_mean = sumY1 / length;
            float Y2_mean = sumY2 / length;

            //Samples
            float N = length;

            float a1 = LsumsqX1 - pow(LsumX1, 2) / N;
            float a2 = RsumsqX1 - pow(RsumX1, 2) / N;
            float b1 = LsumsqX2 - pow(LsumX2, 2) / N;
            float b2 = RsumsqX2 - pow(RsumX2, 2) / N;

            float c1 = LsumX1Y1 - (LsumX1 * sumY1) / N;//left
            float c2 = LsumX1Y2 - (LsumX1 * sumY2) / N;
            float c3 = RsumX1Y1 - (RsumX1 * sumY1) / N;//right
            float c4 = RsumX1Y2 - (RsumX1 * sumY2) / N;

            float d1 = LsumX2Y1 - (LsumX2 * sumY1) / N;//left
            float d2 = LsumX2Y2 - (LsumX2 * sumY2) / N;
            float d3 = RsumX2Y1 - (RsumX2 * sumY1) / N;//right
            float d4 = RsumX2Y2 - (RsumX2 * sumY2) / N;

            float e1 = LsumX1X2 - (LsumX1 * LsumX2) / N;//left
            float e2 = RsumX1X2 - (RsumX1 * RsumX2) / N;//right

            float denominator1 = ((a1 * b1) - pow(e1, 2));//left
            float denominator2 = ((a2 * b2) - pow(e2, 2));//right

            float b2_0 = (a1 * d1 - e1 * c1) / denominator1;//left
            float b2_1 = (a1 * d2 - e1 * c2) / denominator1;
            float b2_2 = (a2 * d3 - e2 * c3) / denominator2;//right
            float b2_3 = (a2 * d4 - e2 * c4) / denominator2;

            float b1_0 = (b1 * c1 - e1 * d1) / denominator1;//left
            float b1_1 = (b1 * c2 - e1 * d2) / denominator1;
            float b1_2 = (b2 * c3 - e2 * d3) / denominator2;//right
            float b1_3 = (b2 * c4 - e2 * d4) / denominator2;

            float b0_0 = Y1_mean - b1_0 * LX1_mean - b2_0 * LX2_mean;//left
            float b0_1 = Y2_mean - b1_1 * LX1_mean - b2_1 * LX2_mean;
            float b0_2 = Y1_mean - b1_2 * RX1_mean - b2_2 * RX2_mean;//right
            float b0_3 = Y2_mean - b1_3 * RX1_mean - b2_3 * RX2_mean;


            coefficient[0][0] = b0_0;//left Eye
            coefficient[0][1] = b0_1;

            coefficient[1][0] = b1_0;
            coefficient[1][1] = b1_1;

            coefficient[2][0] = b2_0;
            coefficient[2][1] = b2_1;

            coefficient[3][0] = b0_2;//right eye
            coefficient[3][1] = b0_3;

            coefficient[4][0] = b1_2;
            coefficient[4][1] = b1_3;

            coefficient[5][0] = b2_2;
            coefficient[5][1] = b2_3;


            //qDebug("b0_0 <" + b0_0 + "> " + "b0_1<" + b0_1 + "> " +  "b1_0<" + b1_0 + "> " + "b1_1<" + b1_1 + "> " + "b2_0<" + b2_0 + "> " + "b2_1<" + b2_1 + ">");
            //qDebug("b0_2 <" + b0_2 + "> " + "b0_3<" + b0_3 + "> " + "b1_2<" + b1_2 + "> " + "b1_3<" + b1_3 + "> " + "b2_2<" + b2_2 + "> " + "b2_3<" + b2_3 + ">");

        }
