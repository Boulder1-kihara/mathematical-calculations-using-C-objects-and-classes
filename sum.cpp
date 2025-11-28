#include<iostream>
#include<string>
using namespace std;

class add{
    public:
    int num1;
    int num2;

    void add_details(){
        std::cout<<"num1 is: "<<num1<<std::endl;
        std::cout<<"num2 is: "<<num2<<std::endl;
    }

    float newsum(){
            return num1+num2;
        }
};

int main(){
    add sum;

    std::cout<<"input num1"<<std::endl;
    std::cin>>sum.num1;

    std::cout<<"input num2"<<std::endl;
    std::cin>>sum.num2;

    sum.add_details();
    
    float the_sum = sum.newsum();

    std::cout<<"the sum of the 2 numbers is: "<<the_sum<<std::endl;

    return 0;
}
