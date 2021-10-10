# -*- coding: utf-8 -*-
"""
Created on Fri Sep 17 14:13:27 2021

@author: Timon Bergmann
"""

import numpy as np
import cv2

#IDEA - To free board from surrounded bits: Make mask with outmost circle of dartboard






img = cv2.imread('./../../images/Dartboard/Dartboard_0Darts_Bright.png') 

#make copy to later output detections on rgb image
output = img.copy()

#make grayscale image
img_gray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)

#morphological operations
kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img_gray,kernel,iterations = 1)

#Take contours 
contours = img_gray - erosion

cv2.imshow('erosion subtraction', contours)

cv2.imshow('image normal', img) 
cv2.imshow('grayscale', img_gray) 

#line detection with grayscale image-------------
kernel_size =5
blur_gray = cv2.GaussianBlur(contours,(kernel_size, kernel_size),0)

#canny
low_threshold = 20
high_threshold = 255
edges = cv2.Canny(blur_gray, low_threshold, high_threshold)
cv2.imshow('canny', edges)
 

######################################
#contours, hierarchy = cv2.findContours(img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_NONE)
#cv2.imshow('Canny Edges After Contouring', edges)
#print("Number of Contours found = " + str(len(contours)))

###################################
#Hough circles(detect circles on image)
#gray = cv2.medianBlur(gray, 5)

circles = cv2.HoughCircles(blur_gray,cv2.HOUGH_GRADIENT, 1.2, 100)
cv2.imshow('Hough Circles', edges) 

if circles is not None:
    circles = np.uint16(np.around(circles))
    for i in circles[0, :]:
        center = (i[0], i[1])
        # circle center
        cv2.circle(img, center, 1, (0, 100, 100), 3)
        # circle outline
        radius = i[2]
        cv2.circle(img, center, radius, (255, 0, 255), 3)
            
cv2.imshow("detected circles", img)
# show the output image
cv2.imshow("output", np.hstack([img, output]))
#cv2.waitKey(0)        
