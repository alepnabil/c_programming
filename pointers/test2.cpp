#include <iostream> 
using namespace std;



int main()
{

    int list[6] = {11, 12, 13, 14, 15, 16};
    cout << "The starting address of the array is " << list << endl;
    cout << "The starting element of the array is " << *list << endl;
    cout << "The starting element of the array is " << list[0] << endl;

    
    for (int i = 0; i < 6; i++)
        cout << "address: " << (list + i) <<
        " value: " << *(list + i) << " " <<
        " value: " << list[i] << " " << endl;
    return 0;
}