#include <iostream>
using namespace std;


/*Write two overloaded functions that return the sum of values at even locations of an array
with the following headers:
int sumOfEven (const int* array, int size);
double sumOfEven (const double* array, int size);
Write a test program that reads five integers or double values, invokes these functions and
displays the sum of values at even locations.*/



int main(){

    int sumOfEven (const int* array, int size);
    double sumOfEven2 (const double* array, int size);

    int i,a,avg_int;
    int array[5]={};
    double array2[5]={};

    double avg_double;

    for ( i = 0; i <5; i++)
    {
        cout << "enter in the \t " << i  << " \t number : " << endl;
        cin >> a;

        array[i]=a;
        array2[i]=a;
    }


    avg_int=sumOfEven(array,5);
    avg_double=sumOfEven2(array2,5);

    cout << "-----sum of even index----" << endl;
    cout << avg_int << endl;

    cout << avg_double << endl;


}


int sumOfEven (const int* array, int size){

    int i,total,avg_final;

    cout << "-------------------" << endl;
    for ( i = 0; i <size; i++)
    {
        if (i % 2 ==0 )
        {
            //cout << array[i] << endl;
            total+=array[i];

            cout << "current value of sum " << total << endl;
        }  
    }

    return total;
}
double sumOfEven2 (const double* array, int size){


    int i;
    double avg,avg_final;

    for ( i = 0; i <=size; i++)
    {
        if (i%2==0)
        {
            avg+=array[i];
        }
        else{
            //meaning at the odd position of the array, so just ignore//
        }   
        
    }

    avg_final=avg/size;

    return avg_final;
}