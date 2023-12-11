# -*- coding: utf-8 -*-
"""
Created on Sun Dec 10 16:05:53 2023

@author: timon
"""

import numpy as np
import cv2 as cv

Dartboard_0 = cv.imread('D:/Hobby/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_0Darts_Bright.png')
Dartboard_1 = cv.imread('./../../images/Dartboard/Dartboard_1Darts_Bright.png') 

cv.imshow('normal', Dartboard_0);cv.waitKey(1)
cv.imshow('Dart', Dartboard_1);cv.waitKey(1)


#make grayscale image
Dartboard_0_gray = cv.cvtColor(Dartboard_0, cv.COLOR_RGB2GRAY)
Dartboard_1_gray = cv.cvtColor(Dartboard_1, cv.COLOR_RGB2GRAY)

diff = cv.absdiff(Dartboard_0, Dartboard_1)
diff_gray = cv.cvtColor(diff, cv.COLOR_RGB2GRAY)

ret, thresh = cv.threshold(diff_gray, 150, 255, cv.THRESH_BINARY)

cv.imshow('isolating darts', diff);cv.waitKey(1) 
cv.imshow('Threshold', thresh);cv.waitKey(1)    

contours,hierarchy = cv.findContours(thresh, 1, 2)
cnt = contours[0]


x,y,w,h = cv.boundingRect(cnt)
do = cv.rectangle(Dartboard_1,(x,y),(x+w,y+h),(0,0,255),2)

cv.imshow('Contours', do);cv.waitKey() 
#getting contours of Dart. 
#Getting pixel which is on Dart-Tip -> 
cv.destroyAllWindows()







