#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

void output_weight(float& kg)
{

    float gram;

    gram = kg/1000;
    cout << "POUNDS IN KILOGRAM : " << kg << "kg" << endl;
    cout << "OUNCES IN GRAM : " << gram << "g" << endl;

}

void calculate_weight(float& p){
    float kg;

    kg=p/2.2046;

    output_weight(kg);
}

//prompt user for input
void input(){
    float p;

    cout << "ENTER THE WEIGHT IN POUNDS :" << endl;
    cin>> p;

    calculate_weight(p);
}

int main(){

    char user_choice;

    do{
        input();
        cout << "Do you want to continue ? (Y/N): " << endl;
		cin >> user_choice;
		cout << endl;
    }while (user_choice=='y'||user_choice=='Y');
    
}


    for ( i = 0; i < s1; i++)
    {
        cout << "the original first array is " << endl;
        cout << num1[i] << endl;
    }
        
    for ( j = 0; j < s2; j++)
    {
        cout << "the original second  array is " << endl;
        cout << num2[j] << endl;
    }