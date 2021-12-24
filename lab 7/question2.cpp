#include <iostream>

using namespace std;



void isVowel(string a){

    string str=a;
    int count=0;

    for (int i = 0; i < str.size(); i++){
    if (str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u'|str[i]=='A'|str[i]=='E'|str[i]=='I'|str[i]=='O'|str[i]=='U')
    {
        cout << str[i] << ":" << 1 << endl;
        count+=1;
    }
    else
    {
        cout << str[i] << ":" << 0 << endl;
    }
    } 
    cout << "The vowel appears :" << count << " times" << endl;
}


int main(){


    string b;

    cout << "Enter in your sequence of words : " << endl;
    cin >> b;

    isVowel(b);

    return 0;

    
}