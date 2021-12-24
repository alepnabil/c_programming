#include <iostream>
#include <bits/stdc++.h>


using namespace std;


void sortDec(char& ch1,char& ch2,char& ch3)
{
    string empty_string2;


    empty_string2.insert(0,1,ch1);
    empty_string2.insert(1,1,ch2);
    empty_string2.insert(2,1,ch3);

    sort(empty_string2.begin(),empty_string2.end(),greater<char>() );

    cout << "THE DESCENDING SEQUENCE IS : " << endl;
    cout << empty_string2 << endl;
} 


void sortInc(char& ch1,char& ch2,char& ch3)
{
    string empty_string;


    empty_string.insert(0,1,ch1);
    empty_string.insert(1,1,ch2);
    empty_string.insert(2,1,ch3);

    sort(empty_string.begin(),empty_string.end());

    cout << "THE SORTED SEQUENCE IS : " << endl;
    cout << empty_string << endl;
}   



int main(){

    char ch1,ch2,ch3;

    cout << "Enter in first character : " << endl;
    cin >> ch1;
      
    cout << "Enter in second character : " << endl;
    cin >> ch2;
      
    cout << "Enter in third character : " << endl;
    cin >> ch3;

    sortInc(ch1,ch2,ch3);
    sortDec(ch1,ch2,ch3);   

}

