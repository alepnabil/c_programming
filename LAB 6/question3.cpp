#include <iostream>

using namespace std;

int main(){


    int a,b=100;

    for ( a= 2; a<=b; a++)
    {
        if(a<6&&a!=4){
            cout << a << ",";
        }
        else if(a%2==0||a%3==0||a%5==0||a==0||a==1){
            continue;
        }
        else{
            cout << a  << "," ;
        }

    }
    

}