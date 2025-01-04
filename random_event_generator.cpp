#include<iostream>
#include<ctime>
#include<cstdlib>

//this event number or random event number of random task to show in game like random monster to apper etc.
//today i make this code for making random 5 massage

int main(){
    srand(time(0));

    int range_of_number = 5;
    int randNum = (rand() % range_of_number ) + 1;
    switch(randNum){
        case 1:
            std::cout << "It's number 1\n";
            break;
        //also i can write like this
        case 2: std::cout << "It's number 2\n";
                break;
        case 3: std::cout << "It's number 3\n";
                break;
        case 4: std::cout << "It's number 4\n";
                break;
        case 5: std::cout << "It's number 5\n";
                //break; //if i don't use break in switch, then the default case will run,
        default:std::cout << "this never happens\n";
                break;
        //if stillthere is no default case then it will be also break the operation;
    }
    /*
    you a bumper sticker'\n-;
    you a t-shirt! \n";
    you a free lunch! \n";
    You in a gift card \n";
    you in concert tickets !\n";
    */

    return 0;
}
