#include <iostream>
using namespace std;

int main() {
	int n, sum=0, r, original;
	cout << "Enter a number : ";
	cin >> n;
	original=n;
	while(n>0){
		r=n%10;
		sum= sum + (r*r*r);
		n=n/10;
	}
	
	if(sum==original){
		cout << "An armstrong number "; 
		
	}
	else {
		cout << " not an arstrong number";
	}
	return 0;
}
