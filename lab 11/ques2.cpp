#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



void reverse_string(char input[]);
int main()
{

    char input[30];
    char *ptr;

    //point this pointer to the array(stores the value of the array)
    ptr=input;
    cout << "enter in a word : " << endl;
    cin >> input;

    reverse_string(ptr);
    
    
}


void reverse_string(char *ptr){
    
    int i;
  
    for ( i = 0; i < strlen(ptr); i++)
    {
        if (isupper(ptr[i]))
        {   
            //will return an ascii value so we need to convert the value
            cout << char(tolower(ptr[i])) << endl;
        }
        else  
        {
            cout << char(toupper(ptr[i])) << endl;
        }
       
        
    }
    

}