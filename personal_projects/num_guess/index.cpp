#include <iostream>
#include <cstdlib>


using std::cout;
using std::cin;
using std::string;

int main(){
    // Get a different random number each time the program runs
    srand(time(0));

    // constant try
    const int TRY = 3;

    // Generate a random number between 0 and 100
    int randomNum = rand() % 101;
    int userGuess = 0;
    bool isRight = userGuess != TRY;

    int guess = 0;

    while(isRight)
    {
        cout << "Enter your guessed number: ";
        cin >> guess;

        if(randomNum != guess)
        {
            userGuess++;
            cout << "Sorry, You guessed wrong." << '\n';
            cout << "You've guessed " << userGuess << " times" << '\n';
            cout << "Try Again!" << '\n';
        }
        else
        {
            cout << "You've guessed " << userGuess << " times" << '\n';
            cout << "Hurray! You guessed right." << '\n';
            isRight = true;
        }
    }



    return 0;
}