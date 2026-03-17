#include <iostream>


double getTotal(double arr[], int size);

int main() {
    
    double marks[] = {12.03, 12, 159.5};
    int size = sizeof(marks) / sizeof(double);    
    double totalMark = getTotal(marks, size);
    std::cout << "Total marks: " << totalMark << std::endl;
    return 0;
}
 
double getTotal(double arr[] ,int size) {
    //funciton gets the address of array like the pointer, not the size
    //int size = sizeof(arr) / sizeof(double);     // this will not work, because, sizeof(arr) will not contian the size , so size is calculate in the main fucntion 
    double sum = 0;
    for (int i = 0; i < size; ++i) {
           sum += arr[i];   
    }
    return sum; 
}

