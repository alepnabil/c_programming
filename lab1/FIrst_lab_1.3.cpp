//no need ;
#include <iostream>

//use--->using
using namespace std;


//[]--->()
int main()
{
			float firstNumber;
			//secondNumber---->secondNumber
			float secondNumber;
			
// Prompt user to enter the first number.
cout << "Enter the first number" << endl;
//>>---------><<
cout << "Then hit enter" << endl;
//<<------->>>
cin >> firstNumber;


// Prompt user to enter the second number.
//ned--->endl
cout << "Enter the second number" << endl;
cout << "Then hit enter" << endl;
//cout----->cin and seconNumber--->secondNumber
cin >> secondNumber;


// Echo print the input. //
cout << endl << "You input the numbers as " << firstNumber
<< " and " << secondNumber << endl;


// Now we will swap the values.
firstNumber = firstNumber+secondNumber;
secondNumber = firstNumber-secondNumber;
firstNumber=firstNumber-secondNumber;



// Output the values.
cout << "After swapping, the values of the two numbers are ";
cout << firstNumber << " and " << secondNumber << endl;



system ("pause");
return 0;
}
