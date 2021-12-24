#include <iostream>
#include <cmath>
using namespace std;

int main(){



float x1,y1,x2,y2,m,b;


cout<< "enter in x1" << endl;
cin >> x1;

cout<< "enter in y1" << endl;
cin >> y1;

cout<< "enter in x2" << endl;
cin >> x2;

cout<< "enter in y2" << endl;
cin >> y2;



m=(y2-y1)/(x2-x1);
b=y1-(m*x1);

if (m==1||b==1){
    cout << "cannot display" << endl; 
} else if (m==0||b==0){
    cout << "cannot display" << endl; 
} else{
    cout << "your m is :"<< m << endl;
    cout << "your b is : " << b << endl;

}

return 0;

}