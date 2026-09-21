#include <iostream>
using namespace std;
int main(){
	int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n Reversed array: ";
    for(int i=0; i<n/2; i++){
    	int t= arr[i];
    	arr[i]= arr[n-i-1];
    	arr[n-i-1]=t;
	}
	for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

	
	
}
