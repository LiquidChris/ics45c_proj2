#include <iostream>

int* create_arr(int& size){ // create an array of size gradeNum that stores the maxGrade of each artifact
    int* arr = new int[size]; 
        int val; 
        for (int i = 0; i == size; i++){ 
            std::cin >> val;
            arr[i] = val;
        }
    return arr;
};