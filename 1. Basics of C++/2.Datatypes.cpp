//Datatypes 

//Integers:- There are three types of datatypes in integers : int(smallest range),long(bigger range then int),long long (highest range)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    long y;
    long long z;
	cin >> x >> y >> z;
    cout<<"Value of X: "<< x <<"\n";
    cout<<"Value of Y: "<< y <<"\n";
    cout<<"Value of Z: "<< z <<"\n";
	return 0;
}

//Decimals:- There are three types of datatypes in integers : float (smallest range),double (bigger range then int),long double (highest range)
#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    double y;
    long double z;
	cin >> x >> y >> z;
    cout<<"Value of X: "<< x <<"\n";
    cout<<"Value of Y: "<< y <<"\n";
    cout<<"Value of Z: "<< z <<"\n";
	return 0;
}

// Words - String and getline (string takes the first word only and getline picks up the entire sentence)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string x,y;
    getline(cin,x);
    cin>>y;
    cout<<x<<"\n"; // Out of Hello World will print the entire word this syntax has to be followed for entire word, will not take context from next line
     cout<<y; // Out of Hello World will only print Hello
	return 0;
}

