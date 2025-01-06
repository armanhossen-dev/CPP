#include <iostream>
void sort(int ar[], int size);
void printElements(int ar[], int s);
int main()
{
    int array[] = {10, 7, 4, 3, 9, 0, 2, 1, 6, 5, 8};
    int arrayElementNumber = sizeof(array) / sizeof(array[0]);
    sort(array, arrayElementNumber);

    return 0;
}

void sort(int ar[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    { // loop to run this loop size types, size -> number times
        for (int n = 0, j = 1; j < size; n++, j++)
        { // compare, n starts form 0, and j starts from 1,
            if (ar[n] > ar[j])
            {                  // if ar[0] > ar[1] , then
                temp = ar[n];  // temp will store ar[0]
                ar[n] = ar[j]; // and, ar[0] will store ar[1] value,
                ar[j] = temp;  // then, ar[1]  will have ar[0] value,
            } // this condition runs , if finds a big number then small number
              // then it will swape that big value with the small value,
              // so, for the inner loop the value of n , j will increase 1 for
              // each time of the loop ends, inner, thus all elements will be
              // conpaire with besides elements, and j will not be more than the size,
              // Thus it will modify the array and give the small value earlier and the bigger value next or end
              // thus we can sort an array,
        }
    }

    /*
    *same work will be done
    int tmp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(ar[j] > ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    todo: if we compare first with second by greater than '>' = we will get samll to big.
    todo: if we compare first with second by less than '<' = we will get big to small.
    */
    for (int k = 0; k < size; k++)
    {
        std::cout << ar[k] << std::endl;
    }
}