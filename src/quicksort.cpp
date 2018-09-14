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
	  while (a[i] <= temp && i < j) { 
		  i++;
		  }
	  if (i < j) { 
		  int t;
		  t = a[i];
		  a[i] = a[j];
		  a[j] = t;
		  }
	//int size = a.size();
	//for(int i = 0; i < size;i++){
	 //cout << a[i] << " ";
          //        }
	}
	//cout << "111"<< endl;
	a[left] = a[i];
	a[i] = temp;
	int size = a.size();
	for(int k = 0; k < size; k++) {
		cout << a[k] << " ";
		}
	cout << "\n";
	quickSort(a, left, i-1);
	quickSort(a, i+1, right);
}

int main() {
	int a [6] = {4,5,1,3,2,2};
	vector<int> b(a,a+6);
	quickSort(b,0,5);
	int size = b.size();
	for(int i = 0; i < size;i++){
		cout << b[i] << " ";
		}
	}
