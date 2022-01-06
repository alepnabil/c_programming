#include <iostream>
using namespace std;



/*Write a program that first reads an integer for the array size, then reads characters into the
array, and displays the consonants only.*/

int main(){

    int size,i;


    cout << "enter size of array" << endl;
    cin >> size;


    char array[size]={},a;

    for ( i = 0; i < size; i++)
    {
        cout << "enter " << i << " character : " << endl;
        cin>>a; 

        array[i]=a;

    }

    cout << "-----------" << endl;

    for ( i = 0; i < size; i++)
    {
        if (array[i]=='a'|array[i]=='e'|array[i]=='i'|array[i]=='o'|array[i]=='u'|array[i]=='A'|array[i]=='E'|array[i]=='I'|array[i]=='O'|array[i]=='U')
        {

        }
        else{
            cout << array[i] << endl;
        }
        
    }
    
    


}