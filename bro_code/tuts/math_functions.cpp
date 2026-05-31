#include <iostream>
#include <cmath>



int main(){
    double x = 3.14;
    double y = 4;
    double z;

    // max (find the max of two numbers)
    // z = std::max(x,y);
    // std::cout << z << '\n'; // 4

    // min (find the min of two numbers)
    // z = std::min(x,y);
    // std::cout << z << '\n'; // 3
    
    // the rest are found in the `cmath` header file

    // pow (find the power or exponent on a number)
    // z= pow(2, 3);
    // std::cout << z << '\n'; // 8

    // sqrt (find the square root of a nnumber)
    // z = sqrt(36);
    // std::cout << z << '\n'; // 6

    // abs (find the absolute number of the given number)
    // z = abs(-3);
    // std::cout << z << '\n'; // 3

    // round (round the given number)
    // z = round(3.14);
    // std::cout << z << '\n'; // 3

    // ceil (round the given number up - ceiling)
    // z = ceil(3.14);
    // std::cout << z << '\n'; // 4

    // floor (round the given number down - floor)
    z = floor(3.99);
    std::cout << z << '\n'; // 3


    return 0;
}