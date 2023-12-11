# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 12:03:52 2021

@author: Timon Bergmann
"""

import numpy as np
import cv2


img_0darts = cv2.imread('D:/Hobby/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_0Darts_Bright.png') 
img_3darts = cv2.imread('./../../images/Dartboard/Dartboard_1Darts_Bright.png') 
#make copy to later output detections on rgb image
output = img_0darts.copy()

cv2.imshow('normal', img_0darts);cv2.waitKey(1) 

#make grayscale image
img_gray_0darts = cv2.cvtColor(img_0darts, cv2.COLOR_RGB2GRAY)
img_gray_3darts = cv2.cvtColor(img_0darts, cv2.COLOR_RGB2GRAY)

diff = cv2.absdiff(img_0darts, img_3darts)
diff_gray = cv2.cvtColor(diff, cv2.COLOR_RGB2GRAY)

ret, thresh = cv2.threshold(diff_gray, 150, 255, cv2.THRESH_BINARY)

cv2.imshow('isolating darts', diff);cv2.waitKey(1) 
cv2.imshow('thresholded image', thresh);cv2.waitKey(1) 
kernel_size =5
blur = cv2.GaussianBlur(diff_gray,(kernel_size, kernel_size),0)
canny = cv2.Canny(blur, 90, 255)

cv2.imshow('Canny', canny);cv2.waitKey(1)
image, contours,hierarchy = cv2.findContours(canny, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
cv2.drawContours(img_3darts, contours, -1, (0,255,0), 3)
cv2.imshow('condted', img_3darts);cv2.waitKey(1)

res = []
for c in contours:
    res.append(c)  

ca = np.vstack(res)


(x,y,w,h) = cv2.boundingRect(ca)
cv2.rectangle(canny, (x,y), (x+w,y+h), (0,0,255),2)
rect = cv2.minAreaRect(ca)
box = cv2.boxPoints(rect)
box = np.int0(box)
cv2.drawContours(output,[box],0,(0,0,255),2)

#try maybe fft with images 0 and 3 darts
#f = cv2.dft(np.float32(img_0darts), flags=cv2.DFT_COMPLEX_OUTPUT)
#f_shift = np.fft.fftshift(f)
#f_complex = f_shift[:,:,0] + 1j*f_shift[:,:,1]
#f_abs = np.abs(f_complex) + 1 # lie between 1 and 1e6
#f_bounded = 20 * np.log(f_abs)
#f_img = 255 * f_bounded / np.max(f_bounded)
#f_img = f_img.astype(np.uint8)

#morphological operations
kernel = np.ones((5,5),np.uint8)
erosion = cv2.erode(img_gray_0darts,kernel,iterations = 1)

#Take contours 
contours = img_gray_0darts - erosion
cv2.imshow('erosion subtraction', contours);cv2.waitKey(1)

cv2.imshow('image normal', img_0darts);cv2.waitKey(1) 
cv2.imshow('grayscale', img_gray_0darts);cv2.waitKey(1)
       
