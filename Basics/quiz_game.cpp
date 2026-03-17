#include<iostream>
//wow code bruh

void printOption(int index);
int option_to_num(char ch);

std::string options[][4] = {
            {"A. 1269", "B. 1075", "C. 1985", "D. 2025"},
            {"A. Guido van Rossum","B. Bjarne Stroustrup","C. John Carmack","D. Arman Hossen"},
            //{"A. C","B. Python","C. Java","D. Go"},
            {"A. C","B. C+","C. C--","D. B++"},
            {"A. Yes","B. No","C. Sometimes","D. What's Earth?"} };


std::string questions[] = {
        "1. What year was c++ created?: ",
        "2. Who invented c++?: ",
        "3. What is the predecessor of c++?: ",
        "4. how was the questoins?: "};


char  answerKey[] = {'C', 'B', 'A', 'B'};


int main(){
    //qize game, with 1D array questions, 2D array options   
       
    int num_of_question = sizeof(questions)/sizeof(questions[0]);
  
    //let find how many option for each questions
    int num_option_byColumn = sizeof(options[0])/sizeof(options[0][0]);  


    char user_ans;
    char ans_input[num_option_byColumn];
    int score = 0;

    for(int i = 0; i < num_of_question; i++){
        if(i == 0)
            std::cout << "******************************\n";
        
        std::cout << questions[i] << '\n' << std::endl;
        //std::cout << "******************************\n";
        for(int j = 0; j < num_option_byColumn; j++){
            std::cout << options[i][j] <<'\n';  //options 
        }
        std::cout << "******************************\n";
        std::cout << "Your answer: ";
        std::cin >> user_ans;
        std::cout << "******************************\n";
        //user should input uppercase , but if user inputs lowercase, then we have to make it upper case
        user_ans = toupper(user_ans); // if upper case then no change will happen, if lower cae then it will be converted into upper case
        ans_input[i] = user_ans;
    }

    std::cout << std::endl;
    std::cout << "Correct Answers:\n";
    for(int i = 0; i < num_of_question; i++){
        if(ans_input[i] == answerKey[i]){
            score++;
        }
        std::cout << questions[i] ;
        printOption(i);
        std::cout << std::endl;
    }

    std::cout << std::endl;
    //std::cout << "Your Total marks = "<<score;
    //make ending great looking
    std::cout << "******************************\n";
    std::cout << "*           RESULTS          *\n";
    std::cout << "******************************\n";
    std::cout << "CORRECT GUESS: "<< score <<'\n';
    std::cout << "Number of Questions: "<< num_of_question << std::endl;
    //std::cout << "SCORE: "<< (score/num_of_question)*100 << '%'<< std::endl; it will not work, because score/num_of_question will won't give double value, so it will return 0, not the decimal part
    std::cout << "SCORE: " << (score/(double)num_of_question)*100 << '%' << std::endl;

    return 0;
}
/*
A = 0;
B = 1;
c = 2;
D = 3;
*/

int option_to_num(char ch){
    switch (ch)
    {
    case 'A':
        return 0;
        break;
    
    case 'B':
        return 1;
        break;
    
    case 'C':
        return 2;
        break;
    
    case 'D':
        return 3;
        break;
    }
}

//self salute, wow, what a thinkig arman, at 2:28AM , Alhamdulillah 
void printOption(int index){
    int num = option_to_num(answerKey[index]);
    switch (index)
    {
    case 0:
        std::cout << options[0][num];
        break;
    case 1:
        std::cout << options[1][num];
        break;
    case 2:
        std::cout << options[2][num];
        break;
    case 3:
        std::cout << options[3][num];
        break;
    default:
           std::cout << "Error, opition not found\n";
        break;
    }
}