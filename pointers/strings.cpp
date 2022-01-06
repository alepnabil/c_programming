#include <iostream> 
using namespace std;
//to avoid error
#pragma GCC diagnostic ignored "-Wwrite-strings"

int main(){


    //char just can be a character. in order to deal with string, need to use an array
    //making a string using char by calling pointer
    char name[] = "aliff";
    char *adress="kaajng";
    char testing='a';

    cout << name << endl;
    cout << adress << endl;
    cout << testing << endl;    


    //prompting string using get, but have too pass an array
    char city[4];
    cout << "what city : "<< endl;
    gets(city);

    cout << "the city is " << city  << endl;
    

}