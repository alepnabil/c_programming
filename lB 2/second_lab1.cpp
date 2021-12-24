#include <iostream>
using namespace std;

int main(){

    //distance=speed*time

    float speed,distance,time;

    cout << "enter speed (in kmph):" << endl;
    cin >> speed ;

    cout << "enter time (in seconds):" << endl;
    cin >> time ;

    time=time/3600;
    distance=speed*time;

    cout << "the speed is : " << speed << endl;
    cout << "the time  is : " << time << endl;
    cout << "the distance is : " << distance << " km "<<endl;

    return 0;

}