#ifndef CALIBRATION_H
#define CALIBRATION_H


class Calibration
{
public:
    Calibration();
    void RegressionModel(float coefficient[2][9]);


private:
float samples[360][6];
float testSet[360][6];
};

#endif // CALIBRATION_H
