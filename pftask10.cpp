#include<iostream>
using namespace std;
void even(int n1);
void odd(int n1);
main()
{int n1;
cout<<"Enter a number: ";
cin>>n1;
if(n1%2==0)
{even(n1);}
if(n1%2==1)
{odd(n1);}
}
void even(int n1)
{cout<<"Number "<<n1<<" is even";}
void odd(int n1)
{cout<<"Number "<<n1<<" is odd";}
