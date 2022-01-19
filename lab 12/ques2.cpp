#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	
	ofstream output;
	output.open("Lab11_2.txt");

    cout<<"The random number is:";
    output<<"The random number is:";
        
    int array[20],even[20],odds[20],x=0,y=0;
    srand (time(0));


    //append all random numbers to original file
    for(int i=0;i<20;i++){
        array[i] = rand() % 99+1;
        output<<array[i]<<" ";
        cout <<array[i]<<" ";
    }
    output.close();	
    

    //divide into odd and even numbers
    for(int j=0;j<20;j++){  
        if(array[j] % 2 ==0)
            even[x++]=array[j];
        else
            odds[y++]=array[j];
    }

    //opens second file
	ofstream output2;
	output2.open("evens.txt");
		 
    if(output2.is_open()){
        output2<<"\nThe Even Number Is:";
        for(int i=0;i<x;i++){
            output2<<even[i]<<" ";
        }

}
	output2.close();
	

    //opens third file
	ofstream output3;
	output3.open("odds.txt");

    if(output3.is_open()){
        output3<<"\nThe Odds Number Is:";	
                for(int i=0;i<y;i++){
                    output3<<odds[i]<<" ";
            }	

    }

    output3.close();	

}