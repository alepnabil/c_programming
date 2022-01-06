#include <iostream>
using namespace std;

/*Write a program that asks the user to enter an even integer named ‘n’. It then calls a function to
check if ‘n’ is negative or zero. If it is true, the function returns the sum as zero. If not, it calculates
the sum of all even integers counting down from ‘n’ to 0 and returns the sum. Main is responsible
to print the value of sum. As an example, if n = 6, it will calculate sum = 6 + 4 + 2 = 12.*/
int calculate_sum(int a) ;

int main(){

    int a,result;

    cout << "enter in an even number : " << endl;
    cin >> a;

    result=calculate_sum(a);

    cout << "the sum is \t :" << result << endl; 


}

int calculate_sum(int a){

    int sum,i;

    if (a<0||a==0)
    {
        return 0;
    }
    else{
        for ( i = 0; i <= a; i++)
        {
            if (i%2==0)
            {
                sum+=i;
            }
            else
            {
                //do nothing just pass
            }
            
        }
        
    }

    return sum;
    
}