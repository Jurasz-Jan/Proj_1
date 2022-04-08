// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
//using namespace std;

// Base class
class Pekomon
{
private:
    int blackmarketvalue=0;   

public:
	std::string type;
	Pekomon()
	{
	    std::cout<< "A pekomon is born. The world needs to be prepared to be torn apart"<<std::endl;
	    
	    type="Pekomon";
	}
	~Pekomon()
	{
	    std::cout<< "A pekomon has fallen. A beautiful star faded away."<<std::endl;
	}

void Up(int money)
    {blackmarketvalue+=money;}	
	
};
int Cost(){return blackmarketvalue;}

// Sub class inheriting from Base Class(Parent)
class Carmander : public Pekomon
{
public:
	std::string classy;
	int age=3;
	int provethathcopyconstructorworks;
	
    Carmander(int element){
        switch(element){
            case 0:
                type="Dinosaur";
            break;
            case 1:
                type="Car";
                age=99;
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
     //Copy constructor       
   Carmander(const Carmander &Suzuki) 
                        {int age=Suzuki.age; 
                            std::string type=Suzuki.type;
                        }
                        
                        
                        
    //
    
     int getage()            {  return age; }
};

// main function
int main()
{
	Carmander Suzuki(1);
	
	Carmander Suzuki2=Suzuki;
		
	// An object of class child has all data members
	// and member functions of class parent
	
	Suzuki.Up();
	std::cout << "Child id is: " << Suzuki.classy << '\n';
	std::cout << "Black market value of Suzuki is" << Suzuki.blackmarketvalue()) << '\n';
	std::cout << "Black market value of Suzuki2 is" << Suzuki2.type <<  '\n';
	
	
	
	 Carmander *obj = new Carmander(1);

	delete obj;
		
	return 0;
}
