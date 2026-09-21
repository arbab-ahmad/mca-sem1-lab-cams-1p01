#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the number of arrays : ";
	cin >> n;
	
	int arr[n];
	
	cout << "enter arrays elements : ";
	for (int i =0; i <n; i++){
		cin >> arr[i];
	}
	cout << "Arrays elements are : " ;
	for(int i=0; i<n;i++){
		cout << arr[i] << " ";
		
	}
	
	return 0;
	
}
