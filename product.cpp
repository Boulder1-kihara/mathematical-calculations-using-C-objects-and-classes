#include<iostream>
#include<string>

//create a class and  its access specifiers
class multiply{
    //its access specifier
    public:
    float num1;
    float num2;

    void details(){
        std::cout<<"num1 is: "<<num1<<std::endl;
        std::cout<<"num2 is: "<<num2<<std::endl;
    }

    //a function to calculate the product
    float product(){
        return num1 * num2;
    }
};

//the begiining of the main function
int main()
{
    //create an object called multiplication
    multiply multiplication;

    //accept user input
    std::cout<<"input num1: "<<std::endl;
    std::cin>>multiplication.num1;

    std::cout<<"input num2: "<<std::endl;
    std::cin>>multiplication.num2;

    //call the functions
    multiplication.details();

    float new_product = multiplication.product();

    //output the product
    std::cout<<"the product is: "<<new_product<<std::endl;

    return 0;
}