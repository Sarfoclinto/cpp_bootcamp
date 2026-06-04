#include <iostream>


void swap(std::string &x, std::string &y);
 
int main() {
     std::string x = "Kool-Aid"; 
     std::string y = "Water"; 
     
     swap(x,y);

     std::cout << "X: " << x << '\n';
     std::cout << "Y: " << y << '\n';
 
    return 0;
}

// to pass by reference, attach & to the parameter name
void swap(std::string &x, std::string &y){
    std::string temp;

     temp = x;
     x = y;
     y = temp;
}