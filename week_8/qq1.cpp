#include<iostream>
#include<string>
using namespace std;

string insertstring(string mainstr, string substr, int pos){
	string result="";
	for(int i=0; i<pos; i++){
		result=result+mainstr[i];
	}
	result=result + substr;
	
	for(int i=pos; i<mainstr.length(); i++){
		result=result + mainstr[i];
	}
	
	return result;
}

string deletestring(string mainstr, int pos, int n){
	string result="";
	for(int i=0; i< pos; i++){
		result = result+ mainstr[i];
	}
	for(int i=pos+n; i<mainstr.length(); i++){
		result=result+ mainstr[i];
	}
	
	return result;
}

int main(){
	string mainstr, substr;
	int pos, n;
	
	cout<<"Enter main string : ";
	getline(cin, mainstr);
	
	cout << "Enter substring to insert: " ;
	getline(cin, substr);
	
	cout << "Enter position: ";
	cin>> pos;
	
	mainstr=insertstring(mainstr, substr, pos);
	cout << "String after insertion: " << mainstr <<endl;
	

    cout << "\nEnter position to delete from: ";
    cin >> pos;

    cout << "Enter number of characters to delete: ";
    cin >> n;

    mainstr = deletestring(mainstr, pos, n);

    cout << "String after deletion: " << mainstr << endl;

    return 0;
}

