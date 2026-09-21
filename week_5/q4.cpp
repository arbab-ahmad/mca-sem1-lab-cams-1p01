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
    
    int lar=arr[0];
    int s_lar=arr[0];
    for(int i =1; i<n; i++){
    	if(arr[i]>lar){
    		s_lar=lar;
    		lar=arr[i];
		}
		else if(arr[i]>s_lar && arr[i]!=lar){
			s_lar=arr[i];
		}
	}

    cout << "Largest element = " << lar << endl;
    cout << "Second largest element = " << s_lar << endl;

    return 0;
}

