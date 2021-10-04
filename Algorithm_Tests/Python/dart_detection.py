# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 12:03:52 2021

@author: timon
"""


import numpy as np
import cv2


img = cv2.imread('C:/Users/timon/Desktop/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_1Dart_Bright.png') 

#make copy to later output detections on rgb image
output = img.copy()

#make grayscale image
img_gray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
cv2.imshow('Color Image',img)
cv2.imshow('Grayscale Image',img_gray)
###################################
edges = cv2.Canny(img_gray,50,150,apertureSize = 3)

minLineLength=100
lines = cv2.HoughLinesP(image=edges,rho=1,theta=np.pi/180, threshold=100,lines=np.array([]), 100 ,maxLineGap=80)

a,b,c = lines.shape
for i in range(a):
    cv2.line(img_gray, (lines[i][0][0], lines[i][0][1]), (lines[i][0][2], lines[i][0][3]), (0, 0, 255), 3, cv2.LINE_AA)
    cv2.imshow("a",img_gray)
###################################
#erosion
kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img_gray,kernel,iterations = 1)

contours = img_gray - erosion
cv2.imshow('erosion subtraction', contours)


#cv2.waitKey(0)        
