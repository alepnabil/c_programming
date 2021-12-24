#include <iostream>

using namespace std;


int main(){

    int a,b,c;
    float output;

    cout << "enter an integer number : " << endl;
    cin >> a;

    cout << "What option do you want ? \t Press 1 : Celcius to Kelvin \t Press 2 : Kelvin to Celsius" << endl;
    cin >> b;

    if (b==1)
    {
        output = a + 273.15;
        cout << "Kelvin is :" << output << endl;
    }
    else if(b==2)
    {
        output = a - 273.15;
        cout << "Celcius is :" << output << endl;
    }
    else
    {
        cout << "----INVALID OPTION-----" << endl;
    }
    
    
    return 0;
}