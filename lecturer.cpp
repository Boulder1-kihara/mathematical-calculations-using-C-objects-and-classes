#include<iostream>
#include<string>

//create a class
class details{
    //specify its access specifier
    public:
    std::string name;
    int age;
    std::string course;
    std::string unit;
    int year;

    //create a function
    void lecturers_details(){
        std::cout<<"lecturers_name: "<<name<<std::endl;
        std::cout<<"lecturers_age: "<<age<<std::endl;
        std::cout<<"lecturers_course: "<<course<<std::endl;
        std::cout<<"lecturers_unit: "<<unit<<std::endl;
        std::cout<<"year teaching: "<<year<<std::endl;
    }
};

//executon now begins
int main()
{
    details lecturer;

    //add info about lecturer
    lecturer.name = "hohn";
    lecturer.age = 20;
    lecturer.course = "Information Technology";
    lecturer.unit = "OOP";
    lecturer.year = 2;

    //call our function
    lecturer.lecturers_details();

    return 0;
}