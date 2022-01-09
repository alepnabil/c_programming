#include <iostream>
using namespace std;

/*(Write a function named subtotal that takes two arguments: the name of a floating
point array and the array size. The function should replace the contents of each cell in
the array with the sum of all the numbers up to that location in the original array. For
example, if the array passed to the function is { 5.8 , 2.6 , 9.1 , 3.4 , 7.0 } then when the
function returns, the array will have been changed to { 5.8 , 8.4 , 17.5 , 20.9 , 27.9 }. Write
also a main function that asks user to enter the original values of the array and display
the values of the array after it has been modified by the function.)*/

void subtotal(float array[],int size);
int main(){


    int size,i;
    float num;
    
    cout << "enter the size of your array : " << endl;
    cin >> size;

    float array[size]={};

    for (i = 0; i < size; i++)
    {
        cout << "enter the " << i+1 << "number" << endl;
        cin>> num;

        array[i]=num;
    }

    subtotal(array,size);

}


void subtotal(float array[],int size){

    float new_array[size],current_total;
    int i;


    for ( i = 0; i < size; i++)
    {
        current_total+=array[i];
        new_array[i]=current_total;
    }

    cout << "printing new array..." << endl;

    for ( i = 0; i < size; i++)
    {
        cout << new_array[i] << endl;

    }
    
    



}