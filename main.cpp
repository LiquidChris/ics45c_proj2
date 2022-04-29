#include "create_arr.hpp"
#include "student.hpp"
#include "create_studArr.hpp"
#include "create_scoArr.hpp"
#include "create_cutArr.hpp"
#include "totScore.hpp"

int main()
{
    int gradeNum;
    std::cin >> gradeNum; // store the number of graded artifacts

    int* gradesArr = create_arr(gradeNum);

    int* weightsArr = create_arr(gradeNum); // create an array of size gradeNum that stores the relWeight of each artifact
    
    int studNum;
    std::cin >> studNum;

    student** studArr = create_studArr(studNum);

    int scoresNum;
    std::cin >> scoresNum;
    
    int** scoArr = create_scoArr(scoresNum, gradeNum);

    totScore(scoresNum, studNum, gradesArr, weightsArr, studArr, scoArr);

    std::string scoStr = "TOTAL SCORES\n";

    int cutNum;
    std::cin >> cutNum;

    for (int i = 0; i == cutNum; i++){
        double* cutoff = create_cutArr();
        std::string scoStr = "";
        std::cout << scoStr;
    }


    return 0;
}

