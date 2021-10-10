# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 12:03:52 2021

@author: Timon Bergmann, Edwin Koch
"""

import numpy as np
import cv2

# raw immage input
empty_board = cv2.imread('./../../images/Dartboard/Dartboard_0Darts_Bright.png') 
img_1darts = cv2.imread('./../../images/Dartboard/Dartboard_1Darts_Bright.png')

# make copy to later output detections on rgb image
output = empty_board.copy()

# make grayscale image
empty_board_gray = cv2.cvtColor(empty_board, cv2.COLOR_RGB2GRAY)

# edge detection
# source: https://learnopencv.com/edge-detection-using-opencv/
empty_board_blured = cv2.GaussianBlur(empty_board_gray, (5,5), 0)
cv2.imshow('empty board blured', empty_board_blured)
ret, thresh1 = cv2.threshold(empty_board_gray, 120, 255, cv2.THRESH_BINARY)
cv2.imshow('empty board threshold', thresh1)
empty_board_hp = cv2.Sobel(src = empty_board_gray, ddepth=cv2.CV_64F, dx=1, dy=1, ksize=5)
cv2.imshow('empty board highpass with sobel', empty_board_hp)

# threshold base image

cv2.imshow('image normal', empty_board) 
cv2.imshow('grayscale', empty_board_gray) 

cv2.waitKey(0)        
