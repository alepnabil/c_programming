#include <iostream> 
using namespace std;
#include <cstring>
//to avoid error
#pragma GCC diagnostic ignored "-Wwrite-strings"

int main(){


    
    //prompting string using get, but have too pass an array
    char city[4];
    cout << "what city : "<< endl;
    gets(city);

    cout << "the city is " << city[0]  << endl;
    

    char *s1 = "abcdefg";
    char *s2 = "abcdg";
    char *s3 = "abcdg";
    cout << strcmp(s1, s2) << endl;
    cout << strcmp(s2, s1) << endl;
    cout << strcmp(s2, s3) << endl;
    cout << strncmp(s1, s2, 3) << endl;


    //char just can be a character. in order to deal with string, need to use an array
    //making a string using char by calling pointer
    char name[] = "aliff";
    char *adress="kaajng";
    char testing='a';

    cout << name << endl;
    cout << adress << endl;
    cout << testing << endl;    



}