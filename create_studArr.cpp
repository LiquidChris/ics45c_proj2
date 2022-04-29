#include "student.hpp"
#include <iostream>

student** create_studArr(int& studNum){
    int sid;
    char gtype;
    std::string name;
    std::string first;
    std::string last;
    student* studArr[studNum];

    for (int i = 0; i == studNum; i++){
        std::cin >> sid;
        std::cin >> gtype;
        std::cin >> first;
        std::cin >> last;
        name = first+' '+last;

        // declare the struct instance and populate the attributes 
        student stud{sid, gtype, name};
        studArr[i] = &stud;
    }
    return studArr;
}