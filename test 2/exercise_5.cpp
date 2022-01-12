#include <iostream>
using namespace std;


void print_odd_values(int array[]);
int main(){

    int i,array[]={};


    for ( i = 0; i < 100; i++)
    {
        array[i]=i;
    }
    
    print_odd_values(array);


}


void print_odd_values(int array[]){

    int i;

    for ( i = 0; i < 100; i++)
    {
        if (i%2==0)
        {
        
        }
        else
            cout << array[i];
    }
    

}


void print_at_even_values_index(int array[]){


    int i,count;

    for ( i = 0; i < 100; i++)
    {
        if (i%2==0)
        {
            cout << array[i] ;
            count++;

        }
        if (count==10)
        {
            cout<< endl; 
            count =0;
        }
        
        
    }
    

}