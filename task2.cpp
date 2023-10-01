#include<iostream>
using namespace std;
void reverse_true(string t);
void reverse_false(string t);
main()
{string input;
string t;


cout<<"Enter 'true' or 'false': ";
cin>>input;
if(input=="true")
{reverse_true(t);}
if(input=="false")
{

reverse_false(t);}
}
void reverse_true(string t)
{cout<<"false";}
void reverse_false(string t)
{cout<<"true";}

