#include <iostream>

using namespace std;


int checknumber(int b){

    int MSD,LSD,final_asnwer;

    MSD=b/100;
    LSD=b%10;

    final_asnwer=MSD*LSD;

    return final_asnwer;
}

int main(){

    int a,b;

    cout << "Enter in 3 digit number " << endl;
    cin >> a;

    
    b=checknumber(a);
    cout<< "The multiplication between MSD and LSD is : " << b << endl;

    return 0 ;



}