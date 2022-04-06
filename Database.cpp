// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
//using namespace std;

// Base class
class Pekomon
{
    
    
public:
	std::string type;
	Pekomon()
	{
	    std::cout<< "A pekomon is born. The world needs to be prepared to be torn apart"<<std::endl;
	    
	    type="Pekomon";
	}

	
	
};

// Sub class inheriting from Base Class(Parent)
class Carmander : public Pekomon
{
public:
	std::string classy;
	
    Carmander(){
        classy="Car";
        
    }
};

// main function
int main()
{
	Carmander obj1;
		
	// An object of class child has all data members
	// and member functions of class parent
	
	
	std::cout << "Child id is: " << obj1.classy << '\n';
	std::cout << "Parent id is: " << obj1.type << '\n';
		
	return 0;
}
