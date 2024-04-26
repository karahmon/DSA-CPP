// Arrays - Holds similar values in a single variable

//Takes an array and prints it
#include <iostream>
using namespace std;

int main() {
   int arr[5];
   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];   
   cout<<arr[3];
   return 0;
}

// 2D Array Syntax
#include <iostream>
using namespace std;

int main() {
   int arr[2][5];
   cin>>arr[0][1]>>arr[1][3]>>arr[2][4]>>arr[3][1];   
   cout<<arr[1][3];
   return 0;
}


// Strings

//To change a characther
#include <iostream>
using namespace std;

int main() {
   string s= 'Striver';
   int len = s.size();
   s[len-1]="z"
   cout<<s[len-1];
   return 0;
}
