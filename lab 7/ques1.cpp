#include <iostream>

using namespace std;



void Drawtop(){
    cout << "*++++++++++++++*" << endl;
}

void Drawsides(){
    cout << "| \t      | \n" << endl;
    cout << "| \t      |" << endl;
}

void Drawbottom(){
    cout << "*-------------*" << endl;
}



int main(){

    Drawtop();
    Drawsides();
    Drawbottom();

    return 0;

}

