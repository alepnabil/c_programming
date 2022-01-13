#include <iostream>
#include <cstring>
using namespace std;



/*Imagine you are developing a software package that requires users to enter their own
passwords. Your software requires that users’ passwords meet the following criteria:
• The password should be at least seven characters long.
• The password should contain at least one uppercase and at least one lowercase letter.
• The password should have at least one digit.
Write a program that asks for a password and then verifies that it meets the stated criteria. If
it doesn’t, the program should display a message telling the user why.*/

void check_length(char *ptr);
void upper_lowercase(char *ptr);
void check_digit(char *ptr);
int main(){

    char password[50];
    char *ptr=password;

    cout << "enter your password for strength testing :" << endl;
    cin >> password;

    check_length(ptr);
    upper_lowercase(ptr);
    check_digit(ptr);

}



void check_length(char *ptr)
{
    if (strlen(ptr)<7)
    {
        cout << "Your password is less than 7 characters" << endl;

    }
    else{
        cout << "------PAST TEST 1-------" << endl;
    }
    
}


void upper_lowercase(char *ptr)
{
    int i,upper_count=0,lower_count=0;

    for ( i = 0; i < strlen(ptr); i++)
    {
        if (isupper(ptr[i]))
        {
            upper_count++;
        }
        else if(islower(ptr[i]))
        {
            lower_count++;
        }   
           
    }
  
    if (upper_count<=0)
    {
        cout << "your password doesnt contain any upper case character" << endl;
    }
    else if(lower_count<=0)
    {
         cout << "your password doesnt contain any lower case character" << endl;
    }
    else
    {
        cout << "-------PAST TEST 2------" << endl;
    }

}



void check_digit(char *ptr)
{
    int i,digit_counter=0;


    for ( i = 0; i < strlen(ptr); i++)
    {
        if (isdigit(ptr[i]))
        {
            digit_counter++;
        }
        
    }
    

    if (digit_counter<=0)
    {
        cout << "your password doesnt have any digit number " << endl;
    }
    else
    {
        cout << "-------PAST TEST 3------" << endl;
    }
    
    
}