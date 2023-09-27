#include<iostream>
using namespace std;
void pass(int score);
void fail(int score);
main()
{int score;
cout<<"Enter your score: ";
cin>>score;
if(score==50)
{fail(score);}
if(score>50)
{pass(score);}
if(score<50)
{fail(score);}
}
void pass( int score)
{cout<<"Pass";}
void fail(int score)
{cout<<"Fail";}