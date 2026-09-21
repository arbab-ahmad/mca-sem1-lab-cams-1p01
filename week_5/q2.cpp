#include <iostream>
using namespace std;

int main(){
	int n, s=0;
	cout << "Enter the number of arrays : ";
	cin >> n;
	
	int arr[n];
	
	cout << "enter arrays elements : ";
	for (int i =0; i <n; i++){
		cin >> arr[i];
	}
	cout << "sum of the elements are : " ;
	for(int i=0; i<n;i++){
		s=s+arr[i];
			
	}
	cout << s;
	
	return 0;
	
}
