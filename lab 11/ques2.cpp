#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

/*Write a function called reverse that accepts a pointer to a C-string as an argument and
should test each character to determine whether it is upper or lower case. If a character is
uppercase, it should be converted to lowercase. Likewise, if a character is lowercase, it should
be converted to uppercase. Test the function by asking the user for a string (alphabets only)
in main function, then passing it to the function reverse and prints out the original and
reversed string.*/

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