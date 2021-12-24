#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){

    int year=2021;
    float rate=1.04,fee=2500;

    cout << "Year \t membership fees" << endl;
    cout << "******************" << endl;
    cout<<year<<"\t"<<fee<<endl;

    while(year>=2021 && year <2026){

        year+=1;
        fee=fee*1.04;

        cout << year<<"\t" << fee << endl;

    }


}