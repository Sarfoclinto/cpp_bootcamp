#include <iostream>


int main(){
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int len = sizeof(array)/sizeof(int);

    for (int num : array){
        std::cout << num << " ";
    }
    std::cout << '\n'; 
    
    // bubble sort
    for(int i = 0; i < len; i++){
        for(int v = 0; v < len; v++){
            if(array[i] > array[v]){
                int temp = array[i];
                array[i] = array[v];
                array[v] = temp;
            }
        }
    }

    std::cout << '\n';

    for (int num : array){
        std::cout << num << " ";
    }


    return 0;
}


