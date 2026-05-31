#include <iostream>

// arithmetic operators = return the result of a specific arithemetic operation (+ - * / %)

int main(){
    int students  = 20;

    // add +
    // students += 1; // also students++
    // std::cout << students << '\n';

    // subtract -
    // students -= 1; // also students--
    // std::cout << students << '\n';

    // multiple *
    // students *= 2;
    // std::cout << students << '\n';

    // divide / (if type is double, decimal points are retained if any, else if int, decimal points are truncated)
    // students /= 2;
    // std::cout << students << '\n';

    // modulo % (find the remainder after a division. if divisor > dividend then modulo is the dividend)
    // eg. 3 % 5 = 3
    // first 3 = dividend
    // 5 = divisor
    // second 3 = modulo
    students %= 3;
    std::cout << students << '\n';
    std::cout << 3 % 5 << '\n';


    // precedence rule of arithmetic
    // parenthesis
    // multiplication & division
    // addition & subtraction




    return 0;
}