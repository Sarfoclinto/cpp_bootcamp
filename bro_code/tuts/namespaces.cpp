#include <iostream>

/**
 * Namespace is a way to group related code together and avoid name conflicts.
 * The famous namespace is the standard library (using namespace std;)
 */

// instead of using the entire std namespace which can cause conflict like the below
// using namespace std;
// you can rather use the methods you want, like:
// using std::cout;
// using std::string;

using std::cout;
using std::string;

 namespace MathTools {
    int add(int a, int b){
        return a + b;
    }
 }

 namespace first {
    int x = 0;
 }

 namespace second {
    int x = 1;
 }

int main(){
    string name = "Shell";
    cout << "Hello " << name << '\n';
    cout << MathTools::add(2,3) << '\n';

    cout << first::x << '\n';
    cout << second::x << '\n';


    return 0;
}