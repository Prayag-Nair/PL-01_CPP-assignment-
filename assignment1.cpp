#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
	int RollNo;
	string Name;
	float Mark;

void accept()
	{
	cout<<"enter your roll number: ";
	cin>>RollNo;
	cout<<"enter your name: ";
	cin>>Name;
	cout<<"enter your mark: ";
	cin>>Mark;
	}

void result()
       {
	if (Mark>=40)
	{
	cout<<"Result :PASS";
	}
	else
	{
	cout<<"Result :FAIL";
	}
       }

void display()
	{
	cout<<"----STUDENT DETAILS----"<<endl;
	cout<<"Student name:- "<<Name<<endl;
	cout<<"Student Roll No.:- "<<RollNo<<endl;
	cout<<"Student Result:- "<<Mark<<endl;
	result();
	}

};

int main()
{

	Student s;
	s.accept();
	s.display();

	return 0;
}
