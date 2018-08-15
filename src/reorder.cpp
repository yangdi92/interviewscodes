#include <iostream>
#include <vector>
using namespace std;

void reOrder(vector<int> &a,bool (*func)(int)){
	if(a.size()==0)
		return;
	int begin = 0;
	//std::vector<char> v;
	int end =a.size() - 1;
	//cout << end<<endl;

	while(begin<end) {
		//cout << "assd"<<endl;
		while(begin<end && !func(a[begin])) {
		    begin++;
		    //cout << begin<<endl;
		}
		while(begin<end && func(a[end])) {
			end--;
		    /* code */
		}

		if(begin<end){
			int temp = a[begin];
			a[begin] = a[end];
			a[end] = temp;
		}
	    /* code */
	}
}

bool isEnvent(int a){
	return a%2==1;
}

int main(int argc, char const *argv[])
{
	int a[5] = {1,2,3,4,5};
	std::vector<int> v(a,a+5);
	reOrder(v,isEnvent);

	for(int k=0;k<v.size();k++){
		cout << v[k]<<endl;
	}
	return 0;
}
