#include <iostream>
#include <cmath>

// c = sqrt((a*a) + (b*b));
// c = sqrt(pow(a,2) + pow(b,2));

using std::cin;
using std::cout;
using std::endl;

int main(){

    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "c = " << c << endl;


    return 0;
}