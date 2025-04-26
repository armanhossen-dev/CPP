//finding the second largest number in an array of integer numbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> u = {1,2,3,4,4};
    sort(u.begin(), u.end());
    reverse(u.begin(), u.end());
    for(auto i : u){
        if(u[0]>i){
            cout << i << endl;
            break;
        }
    }     
    return 0;
}