#include <iostream>
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator) // can't take names with spaces
// getline(std::cin, var) // to take strings with spaces
// for getline, if number input before getline, the getline accepts the \n  that that becomes it
// to get rid of that you add `>> std::ws`(eliminates any new line chars or whitespaces before any user inputs)

int main()
{
    std::string name;
    std::string fullname;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;
    
    std::cout << "How old are you?: ";
    std::cin >> age;
    age += 1;

    
    // or `std::cin.ignore();` // clears leftover newline so you can omit `>> std::ws`
    std::cout << "What is your full name? ";
    std::getline(std::cin >> std::ws, fullname);




    std::cout << "Hello " << name << ", you are " << age << " years old.\n";

    return 0;
}