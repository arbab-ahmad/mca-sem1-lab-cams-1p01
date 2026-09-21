#include <iostream>
using namespace std;

int main(){
	int a ,b ;
	
	cout << "Enter two numbers: ";
	cin >> a ;
	cin >> b ;
	
	while(b!=0) {
		int carry = a&b;
		a=a^b;
		b = carry << 1;
		
	}
	
	cout << "Sum= " << a;
}
