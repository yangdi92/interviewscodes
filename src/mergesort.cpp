#include<iostream>
#include<vector>

using namespace std;
void merge(vector<int> &a, int left, int right) {
	int mid = left + (right - left) / 2;
	vector<int> temp;
	int i = left;
	int j = mid + 1;
	while (i <= mid && j <= right) {
		if(a[i] < a[j]) {
			temp.push_back(a[i]);
			i++;
			} else {
				temp.push_back(a[j]);
				j++;
			}
		}
	while(i <= mid) {
		temp.push_back(a[i]);
		i++;
		}
	while (j <= right) { 
		temp.push_back(a[j]);
		j++;
		}
	int k = 0;
	int size = temp.size();
	for (k = 0; k <size; k++) { 
		a[left + k] = temp[k];
		cout << temp[k] << " ";
		}
	cout << "\n" << endl;
	}
void mergeSort(vector<int> &a, int left, int right) { 
	if (right <= left) {
		return;
	}
	int mid = left + (right - left)/2;
	//cout << mid << endl;
	mergeSort(a, left, mid);
	mergeSort(a, mid + 1, right);
	merge(a, left, right);
	}
int main () { 
	int a[5] = {4, 1, 3, 2, 5};
	vector<int> b(a, a+5);
	int left = 0;
	int right = b.size() - 1;
	mergeSort(b, left, right);
	for(int k=0; k < 5; k++) {
		cout << b[k] << endl;
	}
	cout << "\n" << endl;
	}
