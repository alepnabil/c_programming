#include <iostream>
using namespace std;


int main(){


    int a, *aPtr;
    a = 7;
    aPtr = &a;


    cout << "The address of a is " << &a
    << "\nThe value of aPtr is " << aPtr;

    cout << "\n\nThe value of a is " << a
    <<"\nThe value of *aPtr is " << *aPtr;

    //the kedudukan of *aPtr is the same as the VALUE of &aPtr 
    cout << "\n\nShowing that * and & are complements of each other\n"
    "&*aPtr = " << &*aPtr << "\n*&aPtr = " << *&aPtr << endl;


    cout << "The address of aPtr is " << &aPtr << endl;
    return 0;


}