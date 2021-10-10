# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 12:03:52 2021

@author: Timon Bergmann, Edwin Koch
"""

import numpy as np
import cv2

def edge_detect(image):
    # source: https://www.pyimagesearch.com/2021/05/12/opencv-edge-detection-cv2-canny/
    blur = cv2.GaussianBlur(image, (5,5), 0)
    out = cv2.Canny(blur, 50, 255)
    return out


# raw immage input
empty_board = cv2.imread('./../../images/Dartboard/Dartboard_0Darts_Bright.png') 
img_1darts = cv2.imread('./../../images/Dartboard/Dartboard_1Darts_Bright.png')

# make copy to later output detections on rgb image
output = empty_board.copy()

# make grayscale image
empty_board_gray = cv2.cvtColor(empty_board, cv2.COLOR_RGB2GRAY)
dart_gray = cv2.cvtColor(img_1darts, cv2.COLOR_RGB2GRAY)
# edge detection
# source: https://learnopencv.com/edge-detection-using-opencv/

base = edge_detect(empty_board)
board_with_dart = edge_detect(dart_gray)

cv2.imshow('base', base)
cv2.imshow('dart', board_with_dart)

diff = cv2.subtract(board_with_dart, base)
cv2.imshow('diff', diff)

# erosion
kernel = np.ones((3,3),np.uint8)
kernel[0][0] = 0x00
kernel[0][1] = 0xFF
kernel[0][2] = 0x00
kernel[1][0] = 0xFF
kernel[1][1] = 0xFF
kernel[1][2] = 0xFF
kernel[2][0] = 0x00
kernel[2][1] = 0xFF
kernel[2][2] = 0x00
diff_dilated = cv2.dilate(diff,kernel,iterations = 1)
cv2.imshow('dilated diff', diff_dilated)
diff_eroded = cv2.erode(diff_dilated,kernel,iterations=2)
cv2.imshow('eroded diff', diff_eroded)


#ret, thresh1 = cv2.threshold(empty_board_gray, 120, 255, cv2.THRESH_BINARY)
#cv2.imshow('empty board threshold', thresh1)
#empty_board_hp = cv2.Sobel(src = empty_board_gray, ddepth=cv2.CV_64F, dx=1, dy=1, ksize=5)
#cv2.imshow('empty board highpass with sobel', empty_board_hp)

# threshold base image

cv2.imshow('image normal', empty_board) 
cv2.imshow('grayscale', empty_board_gray) 

cv2.waitKey(0)        
