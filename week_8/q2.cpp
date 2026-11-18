#include <iostream>
using namespace std;

bool ispalindrome(string str){
	int length=0;
	while (str[length]!='\0'){
		length++;
	}
	for(int i=0; i<length/2; i++){
		if(str[i]!= str[length-i-1]){
			return false;
		}
	}
	
	return true;
	
}
int main(){
	string str;
	cout<< "Enter the string : ";
	getline(cin, str);
	if (ispalindrome(str)){
		cout << "the string is palindrome ." <<endl;
	} else {
		cout << "The string is not palindrome. " << endl;
	}
	return 0;
}
