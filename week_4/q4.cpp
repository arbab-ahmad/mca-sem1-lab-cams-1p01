#include <iostream>
using namespace std;

int main() {
	int a=0, b=1, sum , n;	
	int i=1;
	cout << "enter the series for fibonnacci : ";
	cin >> n;
	cout << "Fibonacci series are : " ;

	while(i<=n){
		cout << a << " ";
		sum=a+b;
		a=b;
		b=sum;
		i++;
	}
	return 0;
}
