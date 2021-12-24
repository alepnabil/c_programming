#include <iostream>
#include <cmath>
using namespace std;


int main(){

    char temp,hum;
    int c;
    cout << "What is the temperature? (warm/cold): " << endl;
    cin >> temp;

    cout << "What is the humidity? (dry/humid): " << endl;
    cin >> hum;
    
    if(temp=='warm'&& hum=='dry'){
        c=1;
    }
    else if(temp=='warm'&& hum=='hum'){
        c=2;
    }
     else if(temp=='cold'&& hum=='dry'){
        c=3;
    }
     else{
        c=4;
    }

    switch(c){
        case 1:
            cout << "play tennis" << endl ;
            break;
        case 2:
            cout << "swim" << endl ;
            break;
        case 3:
            cout << "play basket" << endl ;
            break;
        case 4:
            cout << "watch tv" << endl ;
            break;
    }


    return 0;
}