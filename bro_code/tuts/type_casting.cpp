#include <iostream>

/*

type conversion(casting) = conversion a value of one data type to another
    Implicit = automatic
    Explicit = Precede value with new data type in bracket (data_type) eg. (int),

 */

int main() {
    // implicit cast
    // int x = 3.14;
    // std::cout << x << '\n';

    // explicit cast
    // int y = (int)3.14;
    // std::cout << y << '\n';

    // explicit cast
    // double z = (int)3.14;
    // std::cout << z << '\n';

    // implicit cast
    // char x = 100;
    // std::cout << x << '\n';

    // explict cast
    // char y = (char)100;
    // std::cout << y << '\n';


    // example use case for online exams
    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100; // one of the elements of division must be a double
    std::cout << score << "%\n";



    return 0;
}