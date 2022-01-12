#include <iostream>
using namespace std;


void separatePosNeg(int array[]);
int main(){

    int i,a,array[]={};

    for ( i = 0; i < 10; i++)
    {
        cout << "enter in " << i + 1 << " number : " << endl;
        cin>>a;

        array[i]=a;
    }
 
    separatePosNeg(array);

}

void separatePosNeg(int array[]){
    int i,j;
    int positive_numbers[]={};
    int negative_numbers[]={};

    for ( i = 0; i < 10; i++)
    {
        if(array[i]>0)
            {
                    positive_numbers[i]=array[i];
    
                    
            }
        else if (array[i]<0)
            {       
                    negative_numbers[i]=array[i];
                    
            }
    }

    cout << "---THE NEW POSITIVE ARRAY NUMBERS----" << endl;

    for ( i = 0; i < 10; i++)
    {
        cout << positive_numbers[i] << endl;
    }
    

    cout << "---THE NEW NEGATIVE ARRAY NUMBERS----" << endl;
    for ( i = 0; i < 10; i++)
    {
        cout << negative_numbers[i] << endl;
    }
    
    
}