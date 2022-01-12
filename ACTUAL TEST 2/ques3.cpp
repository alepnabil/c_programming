#include <iostream>
#define PI 3.14159265359
using namespace std;


double input();
double compute(double height,double radius);
void output(double V,double A);

int main(){

    double height,radius,V,A;

    height,radius=input();
    cout << "heightr" << height << "radius" << radius << endl;
    V,A=compute(height,radius);
    output(V,A);

}


double input(){

    double height,radius;

    cout << "enter in your height" << endl;
    cin>> height;

    
    cout << "enter in your radius" << endl;
    cin>> radius;

    return height,radius;
}   

double compute(double height,double radius)
{
    double V,A;

    V=PI*(radius*radius)*(height);
    A=(2*PI*(radius)*(height)) + 2*(PI)*(radius*radius);

    return V,A;
}

void output(double V,double A)
{
    cout << "the volume is " << V << endl;
    cout << "the area is " << A << endl;
}