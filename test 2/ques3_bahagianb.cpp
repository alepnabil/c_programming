#include <iostream>
using namespace std;

void reverse_string(char *word);
int main(){

    char word[9];

    cout << "enter in your word" << endl;
    cin >> word;

    cout << word[4] << "----------" << endl;


    reverse_string(word);
    
    cout << "reverse of the string is " << word <<endl;

}


// NEED TO CALL BY REFERENCE OF THE ARRAY TO GET THE ADRESS//
void reverse_string(char *word){

    //value pointer//
    char *front,*rear,*test,temp;

    //set the value of pointer fron to the adress of FIRST CHARACTER IN THE STRING//
    front=&word[0];
    rear=&word[8];

    int i,length=8;

    //when we call * meaning we want the VALUE AT THAT POSITIN(THIS IS DEREFERENCE) //
    cout << "front is " << *front << endl;

    //divide the length of the array since WHEN WE SWAP, WE ONLY SWAP IT 4 TIMES(DARAB 2 SINCE 2 WORDS DAPAT 8)
    for ( i = 0; i < length/2; i++)
    {
        temp=*rear;
        *rear=*front;
        *front=temp;

        //THEN MOVE TO THE NEXT NUMBER//
        front++;
        rear--;

    }
    
}