#include <iostream>

int main(){
    // Regular loop
    std::string students[] = {"Hec","Sherlock","Hello","Yo"};

    // char grades[] = { 'A', 'B','C', 'D'};

    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
    //     std::cout << students[i] << '\n';
    // }


    // foreach
    for(std::string student : students){
        std::cout << student << std::endl;
    }

    return 0;
}
// 770 500
// 2000 -> 6