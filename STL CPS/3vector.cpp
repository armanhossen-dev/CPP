#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector with size mentioned
    // after giving a vector size all its index stors value zero, then after while we store value then it saves the new value
    // array te size bole deyar por jodi er element gula print kri tokn random value print hobe
    
    int n; 
    cin >> n;
    
    // vector sized mentions while declaration! using the vectorVariable name and first braket and inside the value or size how many element i wnat to store!
    vector<int> vec(n);  
    
    cout << "Storing nums inside the vector: " << endl;
    cout << "Size = " << vec.size() << endl;
    for(int i = 0; i<n; i++){
        cin >> vec[i];
        //? if i don't add any number still then it will be the max size given at the stat  so lets find that
        //? also untill i fill the maximum num inside it will stillshow the size as max not how many number it has
        // cout << "Size = " <<vec.size() << endl;
    }

    for(int i = n-1; i>-1; i--){
        cout << vec[i] << ' ';
    }
    cout << endl;

    // deleting or removing the last element of a vector
    vec.pop_back(); // complexity O(1)    // this removes the last element of that vector
    cout << "poped a number (from end)" << endl;
    // inside the pop_back(); there no number or elemtn have to be intered


    // problem occurs when if after i have pop_back(); then i again try to print the n sized array 
    // for(int i = 0; i<n; i++)  ❌
    // so insted using n size , make the condition change to vec.size()
    for(int i = 0; i<vec.size(); i++){ // ✅
        cout << vec[i] << ' ';
    }

    // or  
    // for(int i : vec){
    //     cout << i << ' ';
    // }

    // todo: here we have already fixed the size of the vector so here size would be like this , if i pop_back(); then it will decrease
    cout << "\nNow, Size = " << vec.size() << endl;
    
   
    return 0;
}

// O(1) = 1  operation
// while using array to find the size there is complexity O(1) to O(n)
// int arr[100];
// int n = sizeof(arr) / sizeof(arr[0]); 
// This calculation happens at compile time if the array is declared locally with a fixed size.
// counting elements or using some sentinel — and that would indeed be O(n).


// | Operation                  | Example                      | Complexity | Why                        |
// | -------------------------- | ---------------------------- | ---------- | -------------------------- |
// | Fixed-size array length    | sizeof(arr)/sizeof(arr[0])   | O(1)       | Compile-time calculation   |
// | Pointer-based array length | Custom loop to count         | O(n)       | Must traverse all elements |
// | std::vector::size()        | v.size()                     | O(1)       | Just returns stored size   |


// but in vector using .size() this has complexity O(1) , 
// vec.size() simply returns a stored member variable (usually an integer).
// There’s no iteration, no computation — just a direct read.
// ✅ So complexity = O(1) (constant time)