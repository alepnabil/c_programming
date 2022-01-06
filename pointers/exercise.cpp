#include <iostream> 
using namespace std;



//call prototype before the main function so that the main function recognizes what the function is 
void cubeByReference( int * ); // prototype


int main()
{   
    //call by reference which means take the input itself not just the value
    int number = 5;
    cout << "The original value of number is : "<< number;

    //if we pass pointer into a function it will do a call-br-reference.
    cubeByReference( &number );
    cout << "\nThe new value of number is "<< number << endl;
    return 0;
}

void cubeByReference( int *nPtr )
{   
    cout << " original number is :" << *nPtr;
    *nPtr = *nPtr * *nPtr * *nPtr; // cube number in main
}

void array_with_pointers()

{
    int list[6] = {11, 12, 13, 14, 15, 16};


    //prints out the adres of the first element
    cout << list << endl;

    //prints out the address of the second element
    cout << (list + 1) << endl;

    //without using reference
    for (int i = 0; i < 6; i++)
    {   
        cout << "value : "<< (list[i]) << "adress : " << (list+i) <<endl;

    }

    //using reference (*) to access the values

    cout << "using reference" << endl;
    for (int i = 0; i < 6; i++)
    {   
        cout << "value : "<< *(list + i ) << "adress : " << (list+i) <<endl;

    }


}


