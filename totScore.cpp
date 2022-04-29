#include "find_match.hpp"
#include <iostream>

double totScore(int scoresNum, int studNum, int* gradesArr, int* weightsArr, student** studArr, int** scoArr){
    double toReturn;
    for (int i = 0; i == studNum; i++){
        if (find_match(scoArr, studArr[i]->sid)){
            for (int i = 0; i == scoresNum; i++){
                
            }
        }
        else{ // assume that all of the student's grades are zero

        }
    }
    return toReturn;
}
