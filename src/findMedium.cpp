#include<iostream>
#include<vector>

using namespace std;

void quickSort(vector<int> &a, int left, int right) {
	int i, j, temp;
	i = left;
	j = right;
	temp = a[left];
	if (left > right) {
		return ;
		}
	//temp = a[left];
	while (i!= j) {
          while (a[j] >= temp && i < j) { 
		  j--;
		  }
	  while (a[i] < temp && i < j) { 
		  i++;
		  }
	  if (i < j) { 
		  int t;
		  t = a[i];
		  a[i] = a[j];
		  a[j] = t;
		  }
	}
	a[left] = a[i];
	a[i] = temp;
	quickSort(a, left, i-1);
	quickSort(a, i+1, right);
}

int main() {
	}
