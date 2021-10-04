# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 12:03:52 2021

@author: Timon Bergmann
"""

import numpy as np
import cv2


img_0darts = cv2.imread('C:/Users/timon/Desktop/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_0Darts_Bright.png') 
img_3darts = cv2.imread('C:/Users/timon/Desktop/Coding/Projects/Automatic_Dart_Detection/images/Dartboard/Dartboard_3Darts_Bright.png') 
#make copy to later output detections on rgb image
output = img_0darts.copy()

#make grayscale image
img_gray = cv2.cvtColor(img_0darts, cv2.COLOR_RGB2GRAY)

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
erosion = cv2.erode(img_gray,kernel,iterations = 1)

#Take contours 
contours = img_gray - erosion
cv2.imshow('erosion subtraction', contours)

cv2.imshow('image normal', img_0darts) 
cv2.imshow('grayscale', img_gray) 

#cv2.waitKey(0)        
