// introduction to vector , its one step ahed of array

#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    Todays Task: i/p: n, n numbers, 
                 o/p: the number in reverse order
                 4
                 1 3 5 9 
                 9 5 3 1 <- output 
    */ 
   
   int n;
   cin >> n;
   int num[n];
   int temp;
   for(int i = 0; i<n; i++){
       cin >> num[i];
    }
    for(int i = 0, j=n-1; i<n/2; i++, j--){
        // cout << num[i] << ' ' << num[j] << "--->";
        temp = num[j];
        num[j] = num[i];
        num[i] =  temp;
        // cout << num[i] << ' ' << num[j] << endl;
    }

    for(int i = 0; i<n; i++){
       cout << num[i] << ' ';
    }

    // just reverse e print not changing the array to reverse but i did change the array to reverse order!
    
    return 0;
}