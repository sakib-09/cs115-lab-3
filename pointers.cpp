// Name: Moahemmed Asad Abdullah
// Student Number: 200493004
// Date: 21/02/25

// Filename: pointers.cpp
// Purpose: To work with pointers and dynamically allocate
//           an array for the marks of a student as outlined
//           in the exercise description.

#include <iostream>
#include <string>
using namespace std;

struct Student
{
  string name;
  int id;
  int *mark;
  ~Student()
  {
    delete[] mark;
  }
};

void inputStudent(Student *stuPtr,int numMarks); // function prototype for inputting
void printStudent(const Student *stuPtr,int numMarks);// function prototype for printing
//*********************** Main Function for pointers************************//
int main()
{
  Student stu;                // instantiating a Student object
  Student *studentPtr = &stu; // defining a pointer for the Student object
  int numMarks;
  cout << "Enter the number of marks: ";
  cin >> numMarks;
  // NOTE: you could send studentPtr OR &stu, both refer to the same address!
  inputStudent(studentPtr,numMarks); // inputting from the keyboard into the instance
  printStudent(studentPtr,numMarks);  // printing the object

  return 0;
} // end of main

//************************* Start of functions ************************//
void inputStudent(Student *stuPtr,int numMarks){ // function prototype for inputting
  // function prototype for printing
cout<<"Please enter a nam"<<endl;
cin>>stuPtr->name;
cout<<"Please enter an id: "<<endl;
cin>>stuPtr->id;
stuPtr->mark = new int[numMarks];
for (int i = 0; i < numMarks; i++){
  cout << "Please enter a mark: ";
  cin >> stuPtr->mark[i];
}

}
void printStudent(const Student *stuPtr,int numMarks)
{
  cout<<"student info: "<<endl;
  cout<<"Name: "<<stuPtr->name<<endl;
  cout<<"id: "<<stuPtr->id<<endl;

  for(int i=0;i<numMarks;i++)
  {
    cout<<"mark"<<i<<": "<<stuPtr->mark[i]<<endl;
  }
}