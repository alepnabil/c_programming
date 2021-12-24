#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int i,j,num=0,sum=0;
    
    while (num<20)
    {
        num++;
        if(num==10|num==11)
            continue;
        sum+=num;
    }
    cout << "the new sum is " << num << endl;
    



    while (num<20)
    {
        num++;
        sum+=num;
        if (sum>=100)
        {
            break;
        }
        
    }
    cout << "the number is :" << num << endl;
    cout << "the sum of number is " << sum << endl;

    /*will carry out the inner loop first*/
    
    for(i=5; i >0 ; i--){
        for(j=0; j<i ;j++)
            cout<< "#" << endl ;
    }



    while (num<20)
    {
        num++;
        sum+=num;
        if (sum>=100)
        
            break;
        
        
    }
    
    return 0;
}
