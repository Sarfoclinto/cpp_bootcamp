#include <iostream>
#include <string>


int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() -> returns the number of chars in a string
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 char" ;
    }else{
        std::cout << "Welcome " << name ;
    }

    
    // .empty() -> returns a boolean whether or not the string is empty
    if(name.empty()){
        std::cout << "You didn't enter your name";
    }else{
        std::cout << "Hello " << name ;
    }

    // .clear() -> clears the string var
    name.clear();

    // .append(string literal) -> append a string to another string
    name.append("@gmail.com");

    // .at(position:number) -> return a char in a given position in a string;
    std:: cout << name.at(3);

    // .insert(index:number, char:'') -> inserts a char at a position
    name.insert(1, "@");

    // .find(char) -> find a particular character
    std::cout << name.find(" ");

    // .erase(starting_index, end_index) -> to erase a part of a string
    name.erase(0, 3);
    return 0;
}