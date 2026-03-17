#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char *sp); //a 1D array that will keep track all the markers,  like what box is taken and what box is occupied
void playerMove(char *sp, char player); 
void computerMove(char *sp, char computer); 

bool check_winner(char *sp, char player, char computer); //will return boolian value
bool checkTie(char *spces); //will return boolian value


int main(){
    char sp[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(sp);

    while (running)
    {
        if(check_winner(sp, player, computer)){
            running = false;
            break;
        }else if(checkTie(sp)){ //if ther is no ' ' white space then the game will be stop
            running = false; 
            break;
        }


        playerMove(sp, player); // sp array and players input in it will be added
        drawBoard(sp); // shows user input if any changes happend it will be showen in this 
        
        if(check_winner(sp, player, computer)){
            running = false;
            break;
        }else if(checkTie(sp)){ //if ther is no ' ' white space then the game will be stop
            running = false; 
            break;
        }
        
        //let computer give its mark
        computerMove(sp, computer);
        if(check_winner(sp, player, computer)){
            running = false;
            break;
        }else if(checkTie(sp)){ //if ther is no ' ' white space then the game will be stop
            running = false; 
            break;
        }
        
    } 
    cout << "Thanks for playing!\n";
    return 0;   
}

void drawBoard(char *sp){
    cout << "     |     |     \n"; 
    cout << "  " << sp[0] << "  |  " << sp[1]  << "  | " << sp[2] <<" " << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << sp[3] << "  |  " << sp[4]  << "  |  " << sp[5] <<" " << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << sp[6] << "  |  " << sp[7] << "  |  " << sp[8] <<" " << endl;
    cout << "     |     |     \n";

}
    
void playerMove(char *sp, char player){
    int  num;
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> num;
        num--;
        if(sp[num] == ' '){ // if that index char is white space then user can input his mark in that position
            sp[num] = player;
            break;
        }
    }while (!num > 0 || !num < 8); // user must input number between 1-9 but we math of index like  0-8 not more or less,
}

void computerMove(char *sp, char computer){
    int num;
    //srand(time(0)); or
    srand(time(NULL));

    while(true){
        num = rand() % 9; //will generate a random number in the range 0 to 8, not 1 to 9.
        //To get a number in the range 1 to 9, num = (rand() % 9) + 1;
        if(sp[num] == ' '){
            sp[num] = computer;
            break;
        }
    }    
}

bool check_winner(char *sp, char player, char computer){
    /*
    [0][1][2]
    [3][4][5]
    [6][7][8]    

    win: 
    if all char in the row is same
    if all char in the column is same
    */
   //if(sp[0] == sp[1] == sp[2]){ this will not work properly so dont give condition like this
   
   //if row matches
   if((sp[0] != ' ' ) && (sp[0] == sp[1] ) && ( sp[1] == sp[2] )){
    //unary operator
    //condition ? if_true_then_do_this : if_false_then_do_this ;
        sp[0] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   else if((sp[3] != ' ' ) && (sp[3] == sp[4] ) && ( sp[4] == sp[5] )){
       sp[3] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   else if((sp[6] != ' ' ) && (sp[6] == sp[7] ) && ( sp[7] == sp[8] )){
       sp[6] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   //if column matches
   else if((sp[0] != ' ' ) && (sp[0] == sp[3] ) && ( sp[0] == sp[6] )){
    //unary operator
    //condition ? if_true_then_do_this : if_false_then_do_this ;
        sp[0] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   else if((sp[1] != ' ' ) && (sp[1] == sp[4] ) && ( sp[1] == sp[7] )){
       sp[1] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   else if((sp[2] != ' ' ) && (sp[2] == sp[5] ) && ( sp[5] == sp[8] )){
       sp[2] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   //trace or corno
   else if((sp[0] != ' ' ) && (sp[0] == sp[4] ) && ( sp[4] == sp[8] )){
       sp[0] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }
   else if((sp[2] != ' ' ) && (sp[2] == sp[4] ) && ( sp[4] == sp[6] )){
       sp[2] == player ? cout << "You win!\n" : cout << "You lose!\n" ;
   }else{
    return false;
   }
   
    //return 0; // 0 means false, and 1 means ture
}

bool checkTie(char *sp){
   for(int i = 0; i < 9; i++){
    if(sp[i]==' '){
        return false;
        break;
    }
   }
   cout << "It's a Tie\n";
   return true;   
    //return 0;
}
//4.29.48/6.00.00