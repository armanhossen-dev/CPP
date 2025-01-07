/*
To calculate CGPA (Cumulative Grade Point Average) with subjects having different credit hours, use the weighted average formula. Here’s the logic:

1. Multiply the grade points of each subject by its respective credit hours.
2. Sum up all the results from step 1.
3. Sum up all the credit hours.
4. Divide the total grade points by the total credit hours.
}
*/
#include<iostream>
using namespace std;

int main(){
    double Total_creditHour = 0;
    int    subjectNum;
    double Initial_CGPA = 0;
    double creditHour;
    double gradePoint;

    cout << "Enter how many subjects result published: ";
    cin >> subjectNum;
    for(int i = 0 ; i<subjectNum; i++){
        cout << "Enter credit hour & grade gaind : ";
        cin >> creditHour ;
        cin >> gradePoint;
        Initial_CGPA += creditHour* gradePoint;
        Total_creditHour +=  creditHour;
    }
    cout << "result = " << Initial_CGPA/Total_creditHour<< endl;
    if(Initial_CGPA/Total_creditHour <3.25){
        cout << "Waiver Gone!!!!!!!!!!!!!!!!!!!!!!!!\n";
    }else{
        cout << "Congo mama, Chill\n";
    }
    return 0;    
}