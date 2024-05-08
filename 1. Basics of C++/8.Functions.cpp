#include <bits/stdc++.h>
using namespace std;

void printNames(){  // Normal Void Function
	cout<<"Hello Monil!"<<"\n";
}
void printYourName(string name){ //parameterised Function
	cout<<"Hello "<<name<<"!"<<"\n";
}
int sum(int num1,int num2){
  int num3=num1+num2;
  return num3;
}
int main() {
	printNames(); // void function

	string name;  // parameterised function
	cin>>name;
	printYourName(name);

	string name2; //non paremeterised function
	cin>>name2;
	printYourName(name2);
	
	int num1,num2; // return function
	cin>>num1>>num2;
	int res = sum(num1,num2);
	cout<<res<<"\n"; 

    int num3,num4; // inbuilt max function
	cin>>num3>>num4;
	int maximum = max(num3,num4);
	cout<<maximum<<"\n"; 

    int num5,num6; //inbuilt min function
	cin>>num5>>num6;
	int minimum = min(num5,num6);
	cout<<minimum<<"\n"; 
	return 0;

}

