#include <iostream>
#include <cstdlib>
#include <string>


using std::cout;
using std::cin;
using std::string;

int main(){
    // Get a different random number each time the program runs
    srand(time(0));

    // constant try
    const int TRY = 5;

    // Generate a random number between 0 and 100 (inclusive):( %101 || %100 + 1)
    int randomNum = rand() % 101;
    int userGuess = 0;
    bool isRight = false;
    bool isOver = userGuess == TRY;

    int guess = 0;

    Start:
    while(!isOver && !isRight)
    {
        if(userGuess > 0){
            cout << '\n' ;
        }else{
            cout << "\n*************************************************************************\n" ;
        }

        cout << "Enter your guessed number from 0 through 100: ";
        cin >> guess;

        userGuess++;
        cout << "You've made " << userGuess << " " << ((userGuess == 1) ? "guess" : "guesses") << '\n';

        if(randomNum != guess)
        {
            
           cout << ((guess > randomNum) ? "Ouch! Too high!" : "Oops! Too low!") << '\n';
            isOver = userGuess == TRY;

            if(isOver){
                cout << "You have exhausted all your chances to guessing \n";
                cout << "The correct number is: " << randomNum << '\n';
                cout << "GAME OVER!!! \n";
            }else{
                cout << "Try Again!" << '\n';
            }

        }
        else
        {
            cout << "Hurray! You guessed right." << '\n';
            isRight = true;
        }
    }

    std::string option;
    while(option != "R" || option != "r" || option != "Q" || option != "q" ){
        cout << "\nDo you want to restart or quit? \n";
        cout << "R - Restart? \n";
        cout << "Q - Quit? \n";
        cin >> option;

        if(option == "Q" || option == "q"){
            cout << '\n';
            return 0;
        }else if(option == "R" || option == "r"){
            randomNum = rand() % 101;
            userGuess = 0;
            isRight = false;
            isOver = false;
            goto Start;
        }
    }

    return 0;
}