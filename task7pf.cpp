#include<iostream>
using namespace std;
void addition(int a,int b);
void subtraction(int a,int b);
void multiply(int a,int b);
void divi(int a,int b);
main()
{int a,b;
 char op;
 cout<<"Enter 1st number: ";
 cin>>a;
 cout<<"Enter 2nd number: ";
 cin>>b;
 cout<<"Enter an operator (+,-,*,/): ";
 cin>>op;
 if(op=='-')
 {subtraction(a,b);
}
if(op=='+')
{addition(a,b);}
if(op=='*')
{multiply(a,b);}

if(op=='/')
{divi(a,b);}  
}
void addition(int a,int b)
{cout<<"Addition: "<<a+b;}
void subtraction(int a,int b)
{cout<<"Subtraction: "<<a-b;}
void multiply(int a,int b)
{cout<<"Multiplication: "<<a*b;}
void divi(int a,int b)
{cout<<"Division: "<<a/b;}
 
