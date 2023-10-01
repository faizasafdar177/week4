#include <iostream>
using namespace std;
struct Student {
    string name;
    float metricMarks;
    float enterMarks;
    float ecatMarks;
    float aggregate;
};



void printMenu()
 {
cout << "University Admission Management System" << endl;
    
  cout << " Calculate Aggregate" << endl;
  
  cout << " Compare Ecat Marks" << endl;
}


float calculateAggregate(float metric, float enter, float ecat)
 {
    return (metric * 0.3) + (enter * 0.3) + (ecat * 0.4);
}


void compareEcatMarks(Student student1, Student student2) 
{
    if (student1.ecatMarks > student2.ecatMarks) 
{
        cout << student1.name << " has higher Ecat marks." << endl;
    }
 else if (student2.ecatMarks > student1.ecatMarks)
 {
        cout << student2.name << " has higher Ecat marks." << endl;
    }
 else {
        cout << "Both students have the same Ecat marks." << endl;
    }

}


int main()
 {
   
 Student student1, student2;
    
   
 cout << "Enter name of Student 1: ";
  
  cin >> student1.name;
    
cout << "Enter Metric Marks of Student 1: ";
   
 cin >> student1.metricMarks;
 
   cout << "Enter Enter Marks of Student 1: ";
  
  cin >> student1.enterMarks;
   
 cout << "Enter Ecat Marks of Student 1: ";
  
  cin >> student1.ecatMarks;
    
   
 cout << "Enter name of Student 2: ";
 
   cin >> student2.name;
  
  cout << "Enter Metric Marks of Student 2: ";
  
  cin >> student2.metricMarks;
   
 cout << "Enter Enter Marks of Student 2: ";
 
   cin >> student2.enterMarks;
   
 cout << "Enter Ecat Marks of Student 2: ";
    
cin >> student2.ecatMarks;
    
   
 student1.aggregate = calculateAggregate(student1.metricMarks, student1.enterMarks, student1.ecatMarks);
   
 student2.aggregate = calculateAggregate(student2.metricMarks, student2.enterMarks, student2.ecatMarks);
    
cout << "Aggregate Marks for Student 1: " << student1.aggregate << endl;
    cout << "Aggregate Marks for Student 2: " << student2.aggregate << endl;
    
 
   compareEcatMarks(student1, student2);
    
    
}

