#include <iostream>

namespace Fns {
    double add(double first, double second){
        return first + second;
    };
    
    double subtract(double first, double second){
        return first - second;
    };
    
    double multiply(double first, double second){
        return first * second;
    };
    
    double divide(double first, double second){
        return first / second;
    };    
}

using std::cout;
using std::cin;
using namespace Fns;

int main(){
    double first, second, answer;
    char opera;

    cout << "Enter the first number: " ;
    cin >> first;

    cout << "Enter the second number: " ;
    cin >> second;

    cout << "Enter the operator (+ - * /): ";
    cin >> opera;

    if(opera == '+'){
        answer = add(first, second);
    }else if(opera == '-'){
        answer = subtract(first, second);
    }else if(opera == '/'){
        answer = divide(first, second);
    }else if(opera == '*'){
        answer = multiply(first, second);
    }else{
        cout << "Invalid operator. Please try again" << '\n';
        return 0;
    };

    cout << "The answer is: " << answer << '\n';

    return 0;
}