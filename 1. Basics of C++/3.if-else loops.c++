// if else loops

// age validation 
#include <bits/stdc++.h>
using namespace std;

int main () {
  int age;
  cin>>age;
  if(age>=18){
    cout<<"You are an adult";
  }
  else{
    cout<<"You are not an adult";
  }
}

//School Grading System
#include <bits/stdc++.h>
using namespace std;

int main () {
  int grades;
  cin>>grades;
  if(grades>=80){
    cout<<"A";
  }
  else if(grades>=60 && grades<=79){
    cout<<"B";
  }
  else if(grades>=50 && grades<=59){
    cout<<"C";
  }
   else if(grades>=45 && grades<=49){
    cout<<"D";
  }
   else if(grades>=25 && grades<=44){
    cout<<"E";
  }
   else if(grades<25){
    cout<<"F";
  }
}

//Age Job Problems
#include <bits/stdc++.h>
using namespace std;

int main () {
  int age;
  cin>>age;
  if(age<18){
    cout<<"Not Eligible for Job";
  }
  else if(age>=18 && age<=54){
    cout<<"Eligible for Job";
  }
  else if(age>=55 && age<=57){
    cout<<"Eligible for Job,but retirement soon.";
  }
  else if(age>=57){
    cout<<"Retirement Time";
  }
}