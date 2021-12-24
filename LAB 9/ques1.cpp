#include <iostream>
using namespace std;

int main(){

    int a,i,b,x;

    cout << "enter the size of your array : " << endl;
    cin >> a;
    
    int num[a];

    for(i=0;i<a;i++){
        cout << "enter the " << i+1 << " number :" << endl;
        cin >> b;
        num[i]=b;
    }

    cout << "what number do you want to find ? : " << endl;
    cin >> x;

    for(i=0;i<=a;i++){
        if (i==a)
        {
             cout<< "the number is not in the list" << endl;
        }  
        else if (num[i]==x)
        {
            cout << "your number is found at position " << i + 1  << endl;
            break;
        }
        else if (num[i]!=x)
        {
            //*cout << "your number is not in the list" << endl;
            continue;
        }
    };





}
