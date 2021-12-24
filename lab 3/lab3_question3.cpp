#include <iostream>
#include <cmath>
using namespace std;


int main(){

    float a,b,c,temp1,temp2,temp3,formula,x;

    cout<< "enter in the first length of triangle" << endl;
    cin >> a;

    cout<< "enter in the second length of triangle" << endl;
    cin >> b;

    cout<< "enter in the third length of triangle" << endl;
    cin >> c;

    temp1=a+b;
    temp2=b+c;
    temp3=c+a;
    
    x=(a+b+c)/2;
    formula=sqrt(x*(x-a)*(x-b)*(x-c));

    if(temp1<c){
        cout<< "the sum of two any sides is not greater than the third side" << endl;
    } else if (temp2<a){
        cout<< "the sum of two any sides is not greater than the third side" << endl;
    }
    else if (temp3<b){
        cout<< "the sum of two any sides is not greater than the third side" << endl;
    }else {
        cout<<"the area is :" << formula << endl;
    }
    return 0;


   
 

}