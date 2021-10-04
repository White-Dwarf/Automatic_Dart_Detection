# -*- coding: utf-8 -*-
"""
Created on Fri Sep 17 14:13:27 2021

@author: timon
"""

import numpy as np
import cv2


img = cv2.imread('C:/Users/timon/Desktop/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_0Darts_Bright.png') 

#make copy to later output detections on rgb image
output = img.copy()

#make grayscale image
img_gray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)

kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img_gray,kernel,iterations = 1)

contours = img_gray - erosion
cv2.imshow('erosion subtraction', contours)




cv2.imshow('image normal', img) 
cv2.imshow('grayscale', img_gray) 

#line detection with grayscale image-------------
kernel_size =5
blur_gray = cv2.GaussianBlur(img_gray,(kernel_size, kernel_size),0)

#morphological operations
kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img,kernel,iterations = 1)


#canny
low_threshold = 80
high_threshold = 250
edges = cv2.Canny(blur_gray, low_threshold, high_threshold)
cv2.imshow('canny', edges)
 
#Hough circles(detect circles on image)
circles = cv2.HoughCircles(edges,cv2.HOUGH_GRADIENT, 1.2, 100)
cv2.imshow('Hough Circles', edges) 

# show the output image
cv2.imshow("output", np.hstack([img, output]))
#cv2.waitKey(0)        
