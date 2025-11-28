#include<iostream>
#include<string>
 
class circle{
    public:
    float radius;
    float pi;

    void details(){
        std::cout<<"the radius of the circle is: "<<radius<<std::endl;
        std::cout<<"the pi of the circle is: "<<pi<<std::endl;
    }

    float calculatedarea(){
        return pi*radius*radius;
    }
};

int main(){
    circle new_circle;

    std::cout<<"enter the radius"<<std::endl;
    std::cin>>new_circle.radius;

    new_circle.pi = 22.0/7;

    new_circle.details();

    float new_area = new_circle.calculatedarea();

    std::cout<<"the area of the circle is: "<<new_area<<std::endl;

    return 0;
}