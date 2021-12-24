#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){


    int firstnum,secondnum,sum,sum_of_second=0;


    cout << "enter your first number :" << endl ;
    cin >> firstnum;

    cout << "enter your second number :" << endl ;
    cin >> secondnum;
    
    while (firstnum>secondnum)
    {
        cout << "your second number should be bigger" << endl;
        cout << "enter your first number :" << endl ;
        cin >> firstnum;

        cout << "enter your second number :" << endl ;
        cin >> secondnum;
    }
  
    while (firstnum>=secondnum)
    {
        sum+=firstnum++;
    }

    cout << "the sum of number is :" << sum << endl;

    




}