#include <iostream>
#include <cmath>
using namespace std;



int main(){

    int a;

    cout<< "enter a colour code in numbers (0-9)" << endl;
    cin >> a ;

    if (a==0){
        cout << "black" << endl;
    }
    else if (a==1){
        cout << "brown" << endl;
    }
    else if (a==2){
        cout << "red" << endl;
    
    }
    else if (a==3){
        cout << "orange" << endl;
    }    
    else if (a==4){
        cout << "yellow" << endl;
        
    }

    else if (a==5){
        cout << "green" << endl;
    }
    else if (a==6){
        cout << "blue" << endl;
        
    }

    else if (a==7){
        cout << "violet" << endl;
        
    }

    else if (a==8){
        cout << "gray" << endl;
        
    }
    else if (a==9){
        cout << "white" << endl;
    }

    return 0;

}