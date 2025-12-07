#include <iostream>
#include<string>
class Shape {
public:
    virtual void getColor() { 
        std::cout << "Default color is white.\n";
    } 

    virtual void move() { 
        std::cout << "Shape moved to new position.\n";
    }


    virtual double calculateArea() = 0; 
};