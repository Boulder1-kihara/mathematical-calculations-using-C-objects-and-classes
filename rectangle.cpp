#include<iostream>
#include<string>

//create a class, its member functions and its access specifiers
class fomula{
    //its acess specifier public
    public:
    //introduce our variables
    float length;
    float width;

    //create an output the variables
    void fomulas_details(){
       std::cout<<"our length is: "<<length<<std::endl; 
       std::cout<<"our width is: "<<width<<std::endl;
    }

    //a function to calculate the area
    float calculated_area(){
        return length*width;
    }
};

//execution now begins
int main(){
    //lets create an object
    fomula rectangle;

    //lets obtain the length and the width
    //length
    std::cout<<"enter the length: "<<std::endl;
    std::cin>>rectangle.length;

    //width
    std::cout<<"enter the width: "<<std::endl;
    std::cin>>rectangle.width;

    //we now call the functions then output
    //function to calculate area
    float rectangles_area = rectangle.calculated_area();

    //function to calculate display the requirements
    rectangle.fomulas_details();

    //we now output the calculated area
    std::cout<<"the area of the rectangle is: "<<rectangles_area<<std::endl;

    return 0;
}