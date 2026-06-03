#include <iostream>


void sort_desc(int array[], int size);
void sort_asc(int array[], int size);

int main(){
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int len = sizeof(array)/sizeof(int);

    for (int num : array){
        std::cout << num << " ";
    }
    std::cout << '\n'; 
    
    // bubble sort
    // sort_desc(array,len);
    sort_asc(array,len);

    std::cout << '\n';

    for (int num : array){
        std::cout << num << " ";
    }


    return 0;
}

// bubble sorting (descending order)
void sort_desc(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int v = 0; v < size - i - 1; v++){
            if(array[i] > array[v]){
                int temp = array[i];
                array[i] = array[v];
                array[v] = temp;
            }
        }
    }
}


// buble sorting (ascending order)
void sort_asc(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i -1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

