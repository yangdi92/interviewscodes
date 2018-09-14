#-*- encoding:utf-8 -*-

def bubble_sort(para):
	length = len(para)
	for i in range(length-1,0,-1):
		for j in range(i):
			if para[j]>para[j+1]:
				temp = para[j]
				para[j] = para[j+1]
				para[j+1] = temp
def bubble_sort_short(para):
	#length = len(para)
	index = len(para) - 1
	flag = True
	while index>0 and flag:
		flag = False
		for i in range(index):
			if para[i]>para[i+1]:
				temp = para[i+1]
				para[i+1] = para[i]
				para[i] = temp
				flag = True
		index -= 1

def select_sort(para):
	for i in range(len(para)-1,0,-1):
		index = i
		maxvalue = para[i]
		for j in range(i-1,-1,-1):
			if para[j]>maxvalue:
				maxvalue = para[j]
				index = j
		temp = para[i]
		para[i] = maxvalue
		para[index] = temp

def insert_sort(para):
	for i in range(1,len(para)):
		j = i
		#found = False
		temp = para[j]
		while j > 0 and temp<para[j-1]:
			para[j] = para[j-1]
			j = j -1
		para[j] = temp


def shell_sort(alist):
	sublist_count = len(alist)//2
	while sublist_count>0:
		for start in range(sublist_count):
			insert_short_gap(alist,start,sublist_count)
		sublist_count = sublist_count // 2

def insert_short_gap(alist,start,gap):
	for i in range(start+gap,len(alist),gap):
		j = i 
		temp = alist[j]
		while j>0 and temp<alist[j-gap]:
			alist[j] = alist[j-gap]
			j = j - gap
		alist[j] = temp
def merge_sort(para):
	#print(para)
	if len(para)>1:
		mid = len(para) // 2
		left = para[:mid]
		right = para[mid:]
		merge_sort(left)
		#print(para)
		merge_sort(right)

		i = 0
		j = 0
		k = 0

		while  i<len(left) and j < len(right):
			if left[i]<right[j]:
				para[k] = left[i]
				i = i + 1
				k = k + 1
			else:
				para[k] = right[j]
				j = j + 1
				k = k + 1
		while i < len(left):
			para[k] = left[i]
			i = i + 1
			k = k + 1
		while j < len(right):
			para[k] = right[j]
			j = j + 1
			k = k +1

		print(para)


		#pass
if __name__ == '__main__':
	arr = [54,26,93,17,77,31,44,55,20]
	#bubble_sort_short(arr)
	#print(arr)
	#select_sort(arr)
	#insert_sort(arr)
	#shell_sort(arr)
	merge_sort(arr)
	print(arr)
	# if para[k]<para[k-1]:
		# 	temp = para[k-1]
		# 	para[k-1] = para[k]
		# 	para[k] = temp