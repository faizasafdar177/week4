#include<iostream>
using namespace std;
void print_true(int a,int b);
void print_false(int a,int b);
main()
{ 
 int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
if(a==b)
{print_true(a,b);}
else{
print_false(a,b);
}
}


void print_true(int a,int b)
{cout<<"true";}
void print_false(int a,int b)
{cout<<"false";}
