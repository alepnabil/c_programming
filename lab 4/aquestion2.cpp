#include <iostream>
#include <cmath>
using namespace std;



int main(){

    int a;

    cout<< "enter a colour code in numbers (1-10)" << endl;
    cin >> a ;

    switch (a)
    {
    case 0:
        cout << "black" << endl;
        break;
    case 1:
        cout << "brown" << endl;
        break;
     case 2:
        cout << "red" << endl;
        break;
     case 3:
        cout << "orange" << endl;
        break;
     case 4:
        cout << "yellow" << endl;
        break;
     case 5:
        cout << "green" << endl;
        break;
     case 6:
        cout << "blue" << endl;
        break;
     case 7:
        cout << "violet" << endl;
        break;
     case 8:
        cout << "gray" << endl;
        break;
     case 9:
        cout << "white" << endl;
        break;
    default:
        break;
    }


    return 0;



}