#include <iostream>

// fill() => Fills a range of elements with a specified value
// eg. fill(begin, end, value)
// begin -> begining address of the data structure
// end -> ending address of the data structure
 
int main() {

    // std::string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza", "pizza","pizza","pizza","pizza"};
    const int SIZE = 100;
    std::string foods[SIZE];

    // fill all with pizza
    fill(foods, foods + SIZE, "pizza");

    // fill first half with pizza
    fill(foods, foods + (SIZE / 2), "pizza");

    // fill second half with hamburger
    fill(foods + (SIZE /2), foods + SIZE, "hamburger");

    for(std::string food : foods){
        std::cout << food << std::endl;
    }
 
    return 0;
}