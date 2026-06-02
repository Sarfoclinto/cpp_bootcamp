#include <iostream>
#include <cstdlib>


/**
 * Rock beats scissors
 * Scissors beats paper
 * Paper beats rock
 */

 using std::cout;
 using std::cin;
 using std::endl;
 using std::string;
 
 // constants
 // moves
 const string PAPER = "paper";
 const string SCISSORS = "scissors";
 const string ROCK = "rock";
 enum class Move{
    Rock,
    Paper,
    Scissors,
    Invalid,
    Quit
};

 // invalid
 const string INVALID = "INVALID USER MOVE";
 
 // results
 const string WIN = "win";
 const string LOSE = "lose";
 const string TIE = "tie";

 
  // functions
  string computeResults(const Move& user, const Move& computer);
  Move computeComputerMove();
  Move parseMove(string input);
  string moveToString(Move& move);
  void clearScreen();

int main(){
    srand(time(0));

    string uMove, result;
    Move cMove;
    int wins = 0, loses = 0, ties = 0;
    int play_count = 0;
    
    cout  << "\n********************************** ROCK PAPER SCISSORS GAME **********************************\n" << endl;

    while(true){
        cout << "\nWINS: " << wins << " LOSES: " << loses << " TIES: " << ties << endl;
        cout << (play_count + 1) << ". Choose your move: " << endl;
        cout << "R - Rock" << endl;
        cout << "P - Paper" << endl;
        cout << "S - Scissors" << endl;
        cout << "Move: ";
        cin >> uMove;

        Move userMove = parseMove(uMove);

        if(userMove == Move::Quit){
            cout << "\nWINS: " << wins << " LOSES: " << loses << " TIES: " << ties << endl;
            cout << "Thank for Playing. See you another time" << endl;
            break;
            // return 0;
        }

        if(userMove == Move::Invalid)
        {
            cout << "Invalid move.\n";
            continue;
        }

        // get computer move
        cMove = computeComputerMove();

        // compute results
        result = computeResults(userMove, cMove);

        // compute scores
        if(result == WIN){
            wins++;
        }else if(result == LOSE){
            loses++;
        }else if(result == TIE){
            ties++;
        }

        cout << "\nYou chose: " << moveToString(userMove) << endl;
        cout << "Computer chose: "<< moveToString(cMove) << endl;
        cout << "Result: " << result << endl;

        play_count++;
        if(play_count % 3 == 0) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
            clearScreen();
        }

    }

    return 0;
}

string computeResults(const Move& user, const Move& computer){
    if(user == computer)
    return TIE;

    if(
        (user == Move::Rock     && computer == Move::Scissors) ||
        (user == Move::Paper    && computer == Move::Rock) ||
        (user == Move::Scissors && computer == Move::Paper)
    )
    {
        return WIN;
    }

return LOSE;
};
Move computeComputerMove(){
    // Generate a number from 1 to 100
    int random = rand() % 3;

    switch(random)
    {
        case 0:
            return Move::Rock;

        case 1:
            return Move::Paper;

        default:
            return Move::Scissors;
    }
};
Move parseMove(string input)
{
    if(input == "R" || input == "r" ||
       input == "rock" || input == "Rock")
    {
        return Move::Rock;
    }

    if(input == "P" || input == "p" ||
       input == "paper" || input == "Paper")
    {
        return Move::Paper;
    }

    if(input == "S" || input == "s" ||
       input == "scissors" || input == "Scissors")
    {
        return Move::Scissors;
    }

    if(input == "Q" || input == "q" ||
       input == "quit" || input == "Quit" || input == "QUIT")
    {
        return Move::Quit;
    }

    return Move::Invalid;
};
string moveToString(Move& move)
{
    switch(move)
    {
        case Move::Rock:
            return "Rock";

        case Move::Paper:
            return "Paper";

        case Move::Scissors:
            return "Scissors";

        case Move::Quit:
            return "Quit";

        default:
            return "Invalid";
    }
}
void clearScreen()
{
    cout << "\033[2J\033[H";
}


/**
 Others
1. Hangman
 Word: _ _ _ _ _
 Guess: a
 Word: a _ _ _ a 
 _to learn strings, loops, functions, character handing, arrays/vectors

2. Tic-Tac-Toe
 X | O | X
-----------
 O | X |
-----------
   | O |
_to learn 2D arrays, game state, win detection, breaking large problems into functions

3.To-Do list
Add task
Delete task
View tasks
Save tasks
vector<string> -> struct Task -> File I/O

4. Inventory System
Add Product
Remove Product
Search Product
View Inventory
_to learn: Structs, vectors, searching, crud operations
 */