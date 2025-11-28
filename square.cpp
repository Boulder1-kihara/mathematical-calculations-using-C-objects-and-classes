#include<iostream>
#include<string>

class fomula{
    public:
    float side1;
    float side2;

    void fomula_details(){
        std::cout<<"the length of side 1 is: "<< side1 <<std::endl;
        std::cout<<"the length of side 2 is: "<< side2 <<std::endl;
    }

    float calculated_area(){
        return side1*side2;
    }
};

int main()
{
    fomula area;

    std::cout<<"enter length1: "<<std::endl;
    std::cin>>area.side1;

    std::cout<<"enter length2: "<<std::endl;
    std::cin>>area.side2;

    area.fomula_details();

    float squares_area = area.calculated_area();

    std::cout<<"squares area: "<<squares_area<<std::endl;

    return 0;
}
