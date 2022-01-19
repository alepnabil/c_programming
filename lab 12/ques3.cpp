#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){

    char word[50],filename[50];
    int count=0,number,i;

 
    cout << "What file do you want ? " << endl;
    cin >> filename;

    cout << "What word do you want to find? " << endl;
    cin >> word;

    cout << "----FINDING WORDS-----" << endl;

    fstream input;
    input.open(filename);

    if (input.is_open())
    {
        string line; 

        while (input)
        {
            cout << line << endl;
            getline(input,line);
    
            if (line.find(word))
                {
                    count+=1;
                }    
        }

    }
    input.close();
    cout << "Found  \t" << word << count << "times" << endl;




}