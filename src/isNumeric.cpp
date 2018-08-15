#include <iostream>
#include<string>
#include<vector>
using namespace std;
bool scanInteger(const char** str);
bool scanUnsignedInteger(const char** str);

bool isNumeric(const char* str){
	if(str==nullptr)
		return false;

	bool numeric = scanInteger(&str);

	if(*str=='.'){
		++ str;
		numeric = scanUnsignedInteger(&str)|| numeric;

	}

	if(*str=='e'||*str=='E'){
		++ str;
		numeric = scanUnsignedInteger(&str) || numeric;
	}
	

return numeric && *str=='\0';

}



bool scanUnsignedInteger(const char** str){
	const char* before = *str;
	while(**str!='\0'&&**str >='0'&&**str<=9){
		++(*str);
	}

	return *str >before;
}

bool scanInteger(const char** str){
	if(**str=='+'||**str=='-')
		++(*str);
	return scanUnsignedInteger(str);

}
int main(int argc, char const *argv[])
{
	//char b = {'.','1','2','4'};
	string str = ".124";
	std::vector<char> v;
	
	

	return 0;
}


