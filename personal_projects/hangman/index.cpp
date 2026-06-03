// v1.0.0 -> Personal and Raw version
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
void renderWord(const char chars[], int len);
string charsToString(const char chars[], int len);

int main(){
    string word, strGenWord = "";
    char guess;
    int tries = 0;
    
    word = computeWord();
    int wordLength = word.length();
    
    cout << "\n****************************** HANGMAN ******************************\n" << endl;
    cout << "You've got to guess a " << wordLength << " lettered word with a single letter guess at a time." << endl;

    char genWord[wordLength]; 
    for(int i = 0; i < wordLength; i++){
        genWord[i] = '_';
    }
    renderWord(genWord, wordLength);

    while(word != strGenWord){
        cout << "\nQuess letter: ";
        cin >> guess;

        int position = word.find(guess);
        
        if(position > -1){
            genWord[position] = guess;
            renderWord(genWord, wordLength);
        }else{
            renderWord(genWord, wordLength);
            cout << "\nOops! not there.\n";
        }     
        tries++;   
        strGenWord = charsToString(genWord,wordLength);
        cout << "\nstrGenWord: " << strGenWord << endl;
    }

    
    cout << "\nCongratulations! You guessed the word: " << word << endl;
    cout << "Finally! After " << tries << " tries, you made it." << endl;
    cout << "See Ya Another Time" << endl;


    return 0;
}


// functions
string computeWord(){
    srand(time(0));
    string words[] = {"hello", "world", "Hec Sherlock", "apple", "car", "shop", "FBI", "face"};

    // compute a random with the size of words
    int len = sizeof(words) / sizeof(string);

    // generate a random number
    int idx = rand() % len;

    return words[idx];
};
void renderWord(const char chars[], int len){
    cout << "\nWord: ";
    for(int i = 0; i < len; i++){
        cout << chars[i] << " ";
    }
};
string charsToString(const char chars[], int len){
    string word;
    for(int i = 0; i < len; i++){
        word+=chars[i];
    }

    return word;
}