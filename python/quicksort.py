#-*- coding=utf-8 -*-

def quickSort(arr, left, right):
	if left >= right:
			return
	#mid = left + (right - left) // 2
	pivot = arr[left]
	i = left
	j = right
	while i != j:
			while arr[j] > pivot and i < j:
					j -= 1
			while arr[i] <= pivot and i < j:
					i += 1

			if (i < j):
					arr[j], arr[i] = arr[i], arr[j]
	arr[left], arr[i] = arr[i], arr[left]
	print(arr)
	quickSort(arr, 0, i-1)
	quickSort(arr, i+1, right)

def quickSort1(arr):
	if len(arr) < 2:
			return arr
	pivot = arr[0]
	resleft = [k for k in arr[1:] if k <= pivot]
	resright = [k for k in arr[1:] if k > pivot]
	return quickSort1(resleft) + [pivot] + quickSort1(resright)

arr = [7,4,11,4,3,9,1]

arr = quickSort1(arr)

print(arr)
	
	




