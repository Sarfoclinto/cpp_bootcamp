#include <iostream>

// switch = alternative to using many else if statements
//           compare one value against matching case

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is February";
        break;    
    default:
        std::cout << "Please enter in only numbers (1-12)";
        break;
    }

    return 0;
}