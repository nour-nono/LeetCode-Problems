#!/usr/bin/python3
"""
this module contains a function that determines if a given data set
is a valid UTF-8 encoding
"""
from typing import List


def validUTF8(data: List[int]) -> bool:
    rem = 0
    flag = 1
    for num in data:
        num &= 255
        if num > 247:
            flag = 0
            break
        if rem == 0:
            if 127 < num < 192:  # num in range(128, 192)
                flag = 0
                break
            elif num > 191:
                for i in range(6, 2, -1):
                    if num >> i & 1 == 0:
                        rem = 6 - i
                        break
        else:
            if not 127 < num < 192:  # not num in range(128, 192)
                flag = 0
                break
            else:
                rem -= 1
    if rem != 0:
        flag = 0
    if flag:
        return True
    else:
        return False
