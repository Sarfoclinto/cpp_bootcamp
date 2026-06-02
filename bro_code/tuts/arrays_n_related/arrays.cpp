#include <iostream>

using namespace std;

// arrays:
// a data structure that can hold mutiple values
// values are accessed by an index number
// "kind of like a variable that holds multiple values"

int main(){
    std::string cars[] = {"Corvette", "Mustand", "Camry"};

    // std::cout << car; // without indexing rather displays the memory location of the array
    cout << cars[0] << endl;
    cars[0] = "Camaro";
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    // to initialize and assign values later, size must be there else an error
    string hellos[10];

    hellos[0] = "huloo";
    hellos[1] = "hell yo";


    return 0;
}