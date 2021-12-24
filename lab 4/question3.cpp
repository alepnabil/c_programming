#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){

    int a,b;

    cout << "pick one: " << endl;
    cout << "1)rock 2)paper 3)scissors " << endl;
    cin >> a;


    srand (time(0));
	b= rand() % 3;

 

    if (a==1&&b==2)
    {
        cout << "you choose rock||computer choose paper" << endl;
        cout << "you lose. computer wins" << endl;
    }
    else if(a==1&&b==3)
   {
        cout << "you choose rock||computer choose scissors" << endl;
       cout <<"you win.computer lose" << endl;
   }
   else if(a==2&&b==1)
   {
        cout << "you choose paper||computer choose rock" << endl;
       cout << "you win computer lose" << endl;
   }
   else if(a==2&&b==3)
   {
        cout << "you choose paper||computer choose scissors" << endl;
       cout << "you lose.computer win" << endl;
   }
   else if(a==3&&b==1)
   {
        cout << "you choose scissors||computer choose rock" << endl;
       cout << "you lose.computer win" << endl;
   }
   else if(a==3&&b==2)
   {
        cout << "you choose scissors||computer choose paper " << endl;
       cout << "you win.computer lose" << endl;
   }
   else
   {
       cout << "draw" << endl;
   }

    return 0;
}