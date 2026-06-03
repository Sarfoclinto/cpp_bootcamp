// v1.1.0 -> Improved version of the hangman game with better user experience and code structure.
#include <iostream>
#include <cstdlib>

//  Hangman
//  Word: _ _ _ _ _
//  Guess: a
//  Word: a _ _ _ a 
//  _to learn strings, loops, functions, character handing, arrays/vectors

// usings
using std::string;
using std::cout;
using std::cin;
using std::endl;


// functions
string computeWord();
void renderWord(const string& chars);
void renderGuessedLetters(const string letters);

int main(){
    srand(time(nullptr));

    string word, guessedLetters;
    char guess;
    int tries = 0, lives = 6;
    
    word = computeWord();
    int wordLength = word.length();
    
    cout << "\n****************************** HANGMAN ******************************\n" << endl;
    cout << "You've got to guess a " << wordLength << " lettered word with a single letter guess at a time." << endl;

    string genWord(wordLength, '_');

    for(int i = 0; i < wordLength; i++){
        if(word[i] == ' ')
            genWord[i] = ' ';
    }

    renderWord(genWord);

    while(word != genWord && lives != 0){
        cout << "Live (" << lives <<") " << endl;
        if(guessedLetters.length()){
            renderGuessedLetters(guessedLetters);
        }
        cout << ((guessedLetters.length() > 0) ? "\nQuess letter: " : "Quess letter: ");
        cin >> guess;

        if(guessedLetters.find(guess) != string::npos){
            cout << "Already guessed that letter.\n";
            cout << "\n";
            continue;
        }
        guessedLetters += guess;

        bool found = false;
        for(int i = 0; i < wordLength; i++){
            if(tolower(word[i]) == tolower(guess)){
                genWord[i] = word[i];
                found = true;
            }
        }
        
        if(found){
            renderWord(genWord);
        }
        else{
            lives--;
            renderWord(genWord);
            cout << "\nOops! not there.\n";
        }    
        tries++;   
    }

    
    if(word == genWord){
        cout << "\nCongratulations! You guessed the word: " << word << endl;
        cout << "Finally! After " << tries << " tries, you made it." << endl;
    }
    else{
        cout << "\nGame Over!" << endl;
        cout << "The word was: " << word << endl;
    }
    cout << "See Ya Another Time" << endl;


    return 0;
}


// functions
string computeWord(){
    string words[] = {"hello", "world", "Hec Sherlock", "apple", "car", "shop", "FBI", "face"};

    // compute a random with the size of words
    int len = sizeof(words) / sizeof(string);

    // generate a random number
    int idx = rand() % len;

    return words[idx];
};
void renderWord(const string& chars){
    cout << "\nWord: ";
    for(char c : chars){
        cout << c << " ";
    }
    cout << endl;
};
void renderGuessedLetters(const string letters){
    cout << "Guessed letters: ";
    for(char c : letters){
        cout << c << ", ";
    }
}