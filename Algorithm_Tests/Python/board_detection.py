# -*- coding: utf-8 -*-
"""
Created on Fri Sep 17 14:13:27 2021

@author: Timon Bergmann
"""

import numpy as np
import cv2

#IDEA - To free board from surrounded bits: Make mask with outmost circle of dartboard
img = cv2.imread('./../../images/Dartboard/Dartboard_0Darts_Bright.png') 
hd_img = cv2.imread('./../../images/Dart_Board_Color.png') 

#cv2.imshow('image normal', img) 
#cv2.imshow('HD image normal', hd_img) 

#color separation on image
img_hsv = cv2.cvtColor(hd_img, cv2.COLOR_BGR2HSV)
mask = cv2.inRange(hd_img,(40,40,40),(70,255,255))
hd_img_red = cv2.bitwise_and(hd_img, hd_img, mask = mask)

cv2.imshow('color mask', mask) 
cv2.imshow('extracted red', hd_img_red) 


#make copy to later output detections on rgb image
output = img.copy()

#make grayscale image
img_gray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
hd_img_gray = cv2.cvtColor(hd_img, cv2.COLOR_RGB2GRAY)

cv2.imshow('grayscale', img_gray) 

#morphological operations
kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img_gray,kernel,iterations = 1)
hd_erosion = cv2.erode(hd_img_gray,kernel,iterations = 1)
#Take outline of board 
outline = img_gray - erosion
hd_outline = hd_img_gray - hd_erosion

cv2.imshow('Outline', outline)
cv2.imshow('HD Outline', hd_outline)

#line detection with grayscale image-------------
kernel_size =5
blur_gray = cv2.GaussianBlur(outline,(kernel_size, kernel_size),0)

#canny
low_threshold = 20
high_threshold = 255
edges = cv2.Canny(blur_gray, low_threshold, high_threshold)
cv2.imshow('canny', edges)
 
#Search Contours in thresholded image 
ret, thresh = cv2.threshold(outline, 90, 255, cv2.THRESH_BINARY)
cv2.imshow('Binary image', thresh)
hd_ret, hd_thresh = cv2.threshold(hd_outline, 90, 255, cv2.THRESH_BINARY)
cv2.imshow('HD Binary image', hd_thresh)

image, contours, hierachy =cv2.findContours(thresh,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
cv2.drawContours(output, contours, contourIdx=-1, color=(0, 255, 0), thickness=1, lineType=cv2.LINE_AA)
cv2.imshow('drawn contours', output)

hd_image, hd_contours, hd_hierachy =cv2.findContours(hd_thresh,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
cv2.drawContours(hd_img, hd_contours, contourIdx=-1, color=(0, 255, 0), thickness=1, lineType=cv2.LINE_AA)
cv2.imshow('HD drawn contours', hd_img)




####Sorting contours --> draw bounding boxes over contour
contoursSorted_hd = sorted(hd_contours, key=cv2.contourArea, reverse=True)

x,y,w,h = cv2.boundingRect(hd_contours[-1])
cv2.rectangle(hd_img,(x,y),(x+w,y+h),(0,255,0),2)


rect = cv2.minAreaRect(hd_contours[-1])
box = cv2.boxPoints(rect)
box = np.int0(box)
cv2.drawContours(hd_img,[box],0,(0,0,255),2)


cv2.imshow('Box', hd_img)






# show the output image
#cv2.imshow("output", np.hstack([img, output]))
#cv2.waitKey(0)        
