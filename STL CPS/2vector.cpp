#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[30]; // ekane limit 30 deya hoise, 30 ta int nite par be
    vector<int> vec; // size is not mentioned, so as much memory i have, i can store that much int number

    //condition taking input of int numbers untill the input is -1, then stops and reverse print the number
    while(true) {
        int x;
        cin >> x;
        if(x == -1) break;
        vec.push_back(x);
        // vectorVariable.push_back(value);
        // here .push_back(value); it's complexity O(1) 
        // if i want to increae an array's size then i have to make a new array and copy the past array then this task's complexity O(n), n elements so n times , O reads "order"
        // cout << "Size = " <<  vec.size() << endl; // each time a new num stored in the vector it auto increase its index and by 1, and thats the size
    }

    //to know the size of a vector // how many number it has already stored
    int n = vec.size(); // all the .functionNname(); here after the vector variable name then there is dot then functino name
    cout << "Number of num in this vector stored: "<< n  << endl;
    
    // after storing some number in the vector i can use index
    // if i don't store any number then the will be not index print and there size is 0
    for(int i = n-1; i>-1; i--)    {
        cout << vec[i] << ' ';
    }

    return 0;
}

