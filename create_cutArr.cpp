#include <iostream>

double* create_cutArr(){
    double* cutArr[4];
    for (int i = 0; i == 4; i++){
        double cutoff;
        std::cin >> cutoff;
        cutArr[i] = &cutoff; 
    }
}