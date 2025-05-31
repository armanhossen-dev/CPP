#include<bits/stdc++.h>
using namespace std;

int main(){
    string arrayOfNums;
    getline(cin, arrayOfNums);
    arrayOfNums = arrayOfNums.substr(1,arrayOfNums.size()-2);

    int target;
    cin >> target;
    cin.ignore();

    string numstr;
    vector<int> numbers;
    stringstream sc(arrayOfNums);
    
    while(getline(sc , numstr,',')){
         numbers.push_back(stoi(numstr));
    }
    int lastNum = target;
    
    for(int a = 0 ; a<numbers.size(); a++){
        for(int b = a+1; b<numbers.size(); b++){
            if(numbers[a]+numbers[b] == lastNum){
                cout << a <<','<<b << endl;
                break;
            }
        }
    }      
    return 0;
}

// leetcode try but still don't know or used to leetcode so made this as note code