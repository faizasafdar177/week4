#include<iostream>
using namespace std;
void longest_time(int a,int b);
void longest_time1(int a,int b);
main()
{int a,b;
int hours;
cout<<"Enter the number of hours: ";
cin>>a;
cout<<"Enter the number of minutes: ";
cin>>b;
hours=(a*60);
if(hours>b)

{longest_time(a,b);}
if(hours<b)
{longest_time1(a,b);}
}
void longest_time(int a,int b)
{cout<<a;}
void longest_time1(int a,int b)
{cout<<b;}
