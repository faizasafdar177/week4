#include<iostream>
using namespace std;
void eligible(int age);
void non_eligible(int age);
main(){int age;
cout<<"Enter your age: ";
cin>>age;
if(age>18)
{eligible(age);}
if(age=18)
{eligible(age);}
if(age<18)
{non_eligible(age);}


}
void eligible(int age)
{cout<<"You are eligible to vote.";
}
void non_eligible(int age)
{cout<<"You are not eligible to vote.";}