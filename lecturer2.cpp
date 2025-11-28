#include<iostream>
#include<string>

//create a class and its access specifier
class lecturers_details{
    //its access specifier
    public:
    std::string name;
    int age;
    std::string unit;
    std::string course;
    int year;
    std::string school;

    //lets output the lecturers details
    //lets create a function
    void lecturers(){
        std::cout<<"lecturers name is: "<<name<<std::endl;
        std::cout<<"lecturers age is: "<<age<<std::endl;
        std::cout<<"lecturers unit is: "<<unit<<std::endl;
        std::cout<<"lecturers course is: "<<course<<std::endl;
        std::cout<<"lecturers year is: "<<year<<std::endl;
        std::cout<<"lecturers school is: "<<school<<std::endl;
    }
};

//main function
int main()
{
    //obtain lecturers details through user input 
    lecturers_details lecturer;
    std::cout<<"Enter lecturers name: "<<std::endl;
    std::cin>>lecturer.name;

    std::cout<<"Enter lecturers age: "<<std::endl;
    std::cin>>lecturer.age;

    std::cout<<"Enter lecturers unit: "<<std::endl;
    std::cin>>lecturer.unit;

    std::cout<<"Enter lecturers course: "<<std::endl;
    std::cin>>lecturer.course;

    std::cout<<"Enter lecturers year: "<<std::endl;
    std::cin>>lecturer.year;

    std::cout<<"Enter lecturers school: "<<std::endl;
    std::cin>>lecturer.school;

    //call the functions
    lecturer.lecturers();

    return 0;
}