#include<iostream>
using namespace std;
class Rectangle
{
  private:
	float length,breadth;
  public:
	void getData()
	{
	 cout<<"Enter the Length: ";
	 cin>>length;
	 cout<<"Enter the Breadth: ";
	 cin>>breadth;
	}

	float perimeter();
	float area();

	void display()
	{
	 cout<<"Area of the recatngle = "<<area()<<endl;
	 cout<<"Perimeter of the rectangle= "<<perimeter()<<endl;
	}
};

float Rectangle::area()
{
return length*breadth;
}

float Rectangle::perimeter()
{
return 2*(length+breadth);
}

int main() {
Rectangle r;
r.getData();
r.display();
return 0;
}
