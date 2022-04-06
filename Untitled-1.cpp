// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
using namespace std;

// Base class
class Auto
{
    
    
public:
	int weight_kg;
	Auto()
	{
	    cout<< "Oioioi"<<endl;
	    weight_kg=1000;
	}
	

	
};

// Sub class inheriting from Base Class(Parent)
class Child : public Auto
{
public:
	int id_c;
};

// main function
int main()
{
	Child obj1;
		
	// An object of class child has all data members
	// and member functions of class parent
	obj1.id_c = 7;
	
	cout << "Child id is: " << obj1.id_c << '\n';
	cout << "Parent id is: " << obj1.weight_kg << '\n';
		
	return 0;
}
