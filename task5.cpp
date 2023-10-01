#include<iostream>
using namespace std;
void possible_true(int p1,int p2);
void possible_false(int p1,int p2);
main()
{int p1,p2,p3;
cout<<"Enter your position: ";
cin>>p1;
cout<<"Enter your friend's position: ";
cin>>p2;
p3=p2-p1;
if(p3<6)
{possible_true(p1,p2);}
if(p3>6)
{possible_false(p1,p2);}
}
void possible_true(int p1,int p2)
{cout<<"true";}
void possible_false(int p1,int p2)
{cout<<"false";}
