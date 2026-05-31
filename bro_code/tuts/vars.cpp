#include <iostream>

/*
    1. int (whole numbers)
    int age = 45;
    int days = 7;
    int year = 2026;
    (if assigned double, truncates decimal places and holds just the whole number)


    2. double (numbers with decimal places)
    double height = 45.3;
    double pi = 31.145555;
    (if assigned int, no problem, remains int)
    
    3. boolean (true or false)
    boolean isStudent = true;
    boolean marriend = false;

    4. char (single values or characters)
    char gender = 'm'
    char currency = '$'
    (if > 1 && '', warn at runtime and take the last character, else if > 1 && int, find its corresponding ASCII value)

    5. string (provided by the std(standard library) namespace)(:: scope resolution symbol).
    std::string name = "Shell";
    std::string greeting = "Hello world";

    6. `const` makes a var read-only
    const int PI = 3.14
*/

int main() {
    std::string name = "Shell";
    std::cout << "My name is " << name << '\n';

    int age = 21;
    std::cout << "I am " << age << " years old.\n";

    char gender = 'm';
    std::cout << "I am a " << gender << ".\n"; 
    
    bool isStudent = true;
    std::cout << "I am a student: " << isStudent << '\n';

    double pi = 3.14;
    std::cout << "The value of PI is " << pi << '\n';

    const double gravity = 9.81;
    // gravity = 10.0; //error
    std::cout << "The constant value of gravity is " << gravity << '\n';


    return 0;
}