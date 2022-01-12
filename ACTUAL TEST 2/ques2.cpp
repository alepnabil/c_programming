#include <iostream>
using namespace std;


int funR(int n);
int main(){

    int n,result;

    cout << "enter in your number : " << endl;
    cin >> n;

    result=funR(n);

    cout << "the result is " << result << endl;

}


int funR(int n){

    if (n>1)
    {
        return (funR(n-1)-0.2);

    }
    else if (n==1)
    {
        return 4;
    }
    
}