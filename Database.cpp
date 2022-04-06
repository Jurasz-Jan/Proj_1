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
	
    Carmander(int element){
        switch(element){
            case 0:
                type="Dinosaur";
            break;
            case 1:
                type="Car";
            break;
            case 2:
                type="HobByte";
            break;
            case 3:
                type="Coconut";
            break;
            case 4:
                type="Penguin from Madagascar";
            break;
            case 5:
                type="Demon";
            break;
            case 6:
                type="Video Game character";
            break;
            case 7:
                type="Door";
            break;
            default:
                type="normal";
    // code block
        }
            }
};

// main function
int main()
{
	Carmander Suzuki(1);
		
	// An object of class child has all data members
	// and member functions of class parent
	
	
	std::cout << "Child id is: " << Suzuki.classy << '\n';
	std::cout << "Parent id is: " << Suzuki.type << '\n';
		
	return 0;
}
