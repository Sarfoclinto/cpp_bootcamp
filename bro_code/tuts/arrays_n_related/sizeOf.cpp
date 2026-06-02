#include <iostream>


int main() {
    // sizeOf() = determines the size in bytes of a: variable, data type, class, object, etc.

    double gpa = 2.5;
    std::string name = "Hec Sherlock";
    bool isStudent = true;
    char grade = 'A';
    char grades[] = {'A','B','C','D','F'};
    std::string students[] = {"Hi" , "Patrick", "Squidward"};

    std::cout << "Double "  << sizeof(gpa) << " bytes\n";
    std::cout << "String " << sizeof(name) << " bytes\n";
    std::cout << "Boolean " << sizeof(isStudent) << " bytes\n";
    std::cout << "Char " << sizeof(grade) << " bytes\n";
    std::cout << "Char[] " << sizeof(grades) << " bytes\n";

    // can be used to get the number of items in an array
    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; 
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; 

    return 0;
}