#include<iostream>
using namespace std;
void tpChecker(int people,int tp); 

main()

{
int people;
int tp;

cout<<"Number of people in the household: ";

cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
               int total_sheets=500;
              int sheets_per_person=57;
               int days_remaining=(tp*total_sheets)/(sheets_per_person*people);
               
if(days_remaining<14)
{cout<<"Your TP will only last "<<days_remaining<<" days, buy more!";}
if(days_remaining>14)
{cout<<"Your TP will last "<<days_remaining<<" days, no need to panic!";}
}
