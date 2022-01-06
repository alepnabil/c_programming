#include <iostream>
using namespace std;


/*Write a function that return the average of an array with the following header:
double average(double *array, int size)
In the main function, prompts the user to enter ten double values, invokes the function
average, and display the average value*/

double average(double *array,int size);

int main(){

    int i,j=10;
    
    double a,result;

    double array[10]={};

    for ( i = 0; i <=j ; i++)
    {
        cout << "Enter the " << i << "number :" << endl;
        cin>>a;

        array[i]=a;
    }

    result=average(array,10);

    cout << "the average is : " << result << endl;

    
}


double average(double *array,int size){

    int i;
    double avg,avg_final;

    for ( i = 0; i <=size; i++)
    {
        avg+=array[i];
    }
    
    avg_final=avg/size;

    return avg_final;

}

