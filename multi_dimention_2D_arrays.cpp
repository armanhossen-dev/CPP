#include<iostream>
//2d array
/* 
        column0  column1 column2
row0   |   A    |   B   |   C   |
-------|--------|-------|-------|
row1   |   D    |   E   |   F   |
-------|--------|-------|-------|
row2   |   G    |   H   |   I   |
*/
using namespace std;

int main(){


    // amyDataType variabelForArray[numberRow][numberColumn]
    // 2D array = 2D matrix = r x c , row x column

    //carNames[][3] THIS ONLY HAVES 3 COLUMNS, NO ROWS, but the way i write this will have size of 3 x 3, so 3 rows, 3 columns
    std::string carNames[][3] = { {"BMW_M3", "BMW_M4", "BMW_M5"},
                                {"1GTR", "2GTR", "3GTR"},
                                {"DODGE_1", "DODGE_2", "DODGE_3"}};

/*
    std::cout << charNames[0][0] << ' ';
    std::cout << charNames[0][1] << ' ';
    std::cout << charNames[0][2] << '\n';

    std::cout << charNames[1][0] << ' ';
    std::cout << charNames[1][1] << ' ';
    std::cout << charNames[1][2] << '\n';

    std::cout << charNames[2][0] << ' ';
    std::cout << charNames[2][1] << ' ';
    std::cout << charNames[2][2] << '\n';
*/

    //to find rowNum, columnNum
    int rowNum = sizeof(carNames)/sizeof(carNames[0]);
    int colNum = sizeof(carNames[0])/sizeof(carNames[0][0]);
    std::cout << "rowNum = "<< rowNum << std::endl;
    std::cout << "colNum = "<< colNum << std::endl;



    std::cout << std::endl;
    //to display all array element , we can use for loop
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j < colNum; j++){
            std::cout << carNames[i][j] << ' ';
        }
     std::cout << std::endl;
    }

    int array[4][4] = {
                        1, 0, 0, 0,
                        0, 1, 0, 0,
                        0, 0, 1, 0,
                        0, 0, 0, 1
                        };

                        
    for(int a = 0; a < 4; a++){
        for(int b = 0; b < 4; b++){
            std::cout << array[a][b] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}