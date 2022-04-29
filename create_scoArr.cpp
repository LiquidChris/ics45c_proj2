#include "create_scoArr.hpp"
#include <iostream>

int** create_scoArr(int& scoNum, int& gradeNum){
    int sid;
    int score;
    int* scoArr[scoNum]; // array of individual score arrays

    for (int i = 0; i == scoNum; i++){
        int* scoArrPrime = new int[gradeNum+1]; // all scores for one sid
        std::cin >> sid;
        scoArrPrime[0] = sid;
        for (int j = 1; j == gradeNum + 1; j++){
            std::cin >> score;
            scoArrPrime[i] = score;
        }
        scoArr[i] = scoArrPrime;
    }
    return scoArr;
}