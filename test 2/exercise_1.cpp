#include <iostream> 
using namespace std;

/*Write a function multiple that determines for a pair of integers whether the second integer is a multiple of the first. 
The function should take two integer arguments and return 1 (true) if the second
is a multiple of the first, and 0 (false) otherwise. Use this function in a main program that receives
as input the pair of integers and then prints the value returned by the function.*/


int check_multiple(int a,int b);


int main(){


    int first_num,sec_num,result;


    cout << "enter in first number : " << endl;
    cin >> first_num;

    
    cout << "enter in second number : " << endl;
    cin >> sec_num;


    result=check_multiple(first_num,sec_num);

    cout << "result is " << result << endl;


}


int check_multiple(int a,int b){


    if (b%a==0)
        return 1;
    else if(b%a!=0){
        return 0;
    }
    else{
        cout << "the numbers are not integers" << endl;
    }

}