#include <iostream>
using namespace std;


/*(Write a recursive function to determine the number of digits in an integer number, N and
returns the value to main function. Also write a main function that is responsible for
getting in an input value from the user, passes it to the function and displays the result.)*/


int count_number(int a);
int main(){

    int a,result;


    cout << "Enter in a number :" << endl;
    cin >> a;
    
    result=count_number(a);


    cout << "The amount of digit in " << a << "is : " << result << endl;


}

int count_number(int a){

    //NEED TO USE STATIC SINCE WHEN THE FUNCTION IS BEING CALLED AGAIN, WE NEED TO USE THE OLD COUNT NUMBER
    static int count;

    if (a!=0)
    {
        count++;
        cout << count << endl;
        count_number(a/10);
    }
    
    return count;

}