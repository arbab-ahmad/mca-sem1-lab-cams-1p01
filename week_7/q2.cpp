#include <iostream>
#include<conio.h>

using namespace std;

int main() {

   // Declare Variables
   char str[20], *pt;
   int i = 0;

   cout << "Pointer Example C++ Program : Calculate Length of String \n";

   cout << "Enter Any string [below 20 chars] : ";
   cin>>str;

   // Assign to Pointer Variable
   pt = str;
   while (*pt != '\0') {
      i++;
      pt++;
   }
   cout << "\nLength of String : " << i;

   getch();
   return 0;
}
