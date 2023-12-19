// C++ is an object-oriented programming language. 
// Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

#include<iostream>
using namespace std;

// Creating a Class by keyword "class" 

class MyFirstClass {   // MyFirstClass (className)
  public:             // Access specifier
    int myNum;        
    string myString;  
};

// The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class 
// Without "public" keyword all members will be private mean they cannot be accessible from outsidee



int main()
{
    // Creating object from class
    MyFirstClass myObj; 

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    cout <<"Number declared in class"<< myObj.myNum << "\n";
    cout <<"String declared in class"<<myObj.myString;    
    return 0;
}