#-*- coding:utf-8 -*-
import os
def merge(left,right):
	res = []
	while left or right:
		min_val = left.pop(0) if left[0] < right[0] else right.pop(0)
		res.append(min_val)

	res += left if left else right
	return res

def merge_sort(a):
	if len(a) <=1:
		res = a
	else:
		mid = len(a)//2
		left,right = merge_sort(a[:mid],merge_sort([mid:]))
		res = merge(left,right)
	return res

