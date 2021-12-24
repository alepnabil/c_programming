#include <iostream>
#include <cmath>
using namespace std;

int main(){

    const double PI=3.142;
    float opp,hyp,adj,degree,rad;


    cout << "enter in hipotenuse" << endl;
    cin >> hyp;

    cout << "enter in degree" << endl;
    cin >> degree;

    rad=degree*(PI/180);

    opp=(sin(rad)*hyp);

    adj=(opp/tan(rad));

    cout <<"the oposite is :" << opp << endl;
    cout << "the adjacent is : " << adj << endl ;

    return 0;




}