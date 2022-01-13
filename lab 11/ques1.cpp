#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char original_string[30],new_string[30];
	int i, j=0;
	char *ptr=original_string;

	cout << "enter in your string" << endl;
	cin >> original_string;
	
	
	for (i=0;i<strlen(ptr);i++)
	{
		if (isalpha(ptr[i]))
		{
		    new_string[j]=original_string[i];
			j++;
		}
	}

    cout << "the new string is : " << endl;
    cout << new_string << endl;
 
	return 0;
}