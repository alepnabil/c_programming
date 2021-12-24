#include <iostream>
#include <cmath>
using namespace std;


int main(){

    char temp,hum;

    cout << "What is the temperature? (warm/cold): " << endl;
    cin >> temp;

    cout << "What is the humidity? (dry/humid): " << endl;
    cin >> hum;

    if(temp=='warm'){
        if(hum=='dry')
        {
                cout << "play tennis" << endl;

        }
         else 
        {
                cout << "swim" << endl;
        }
    }
    else{
        if(hum=='dry')
        {
                cout << "play basketball" << endl;

        }
        else 
        {
                cout << "watch tv" << endl;
        }
    }
    return 0;
}