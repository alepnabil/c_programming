#include <iostream>
using namespace std;


void Merge(int num1,int num2){

    cout << num1 << '\t' << num2 << '\t';

}


int main(){

    int a,b,i,j;
    cout << "enter the size of your first array : " << endl;
    cin >> a;

    int num1[a]={};


    for(i=0;i<a;i++){
        cout << "enter the " << i+1 << " number for first array :" << endl;
        cin >> num1[i];
    }

    cout << "enter the size of your second array : " << endl;
    cin >> b;

    int num2[b]={};

 
    for(j=0;j<b;j++){
        cout << "enter the " << j+1 << " number for secocnd array :" << endl;
        cin >> num2[j];
 
    }
    
    cout << "The first array number is :" << endl;
    for ( i = 0; i < a; i++)
    {
        cout << num1[i] << endl;
    }

    cout << "The second array number is :" << endl;
    for ( i = 0; i < b; i++)
    {
        cout << num2[i] << endl;
    }


    cout << "------MERGING-------" << endl;
    if (b>a)
    {
        for ( i = 0; i < b; i++)
        {
            Merge(num1[i],num2[i]);
        }
        
    }
    else
        for ( i = 0; i < a; i++)
        {
            Merge(num1[i],num2[i]);
        }
        
}