#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){

    int a,b,count;
    string br;

    cout << "enter your number" << endl ;
    cin >> a;

    while (true)
    {
        cout << "enter your next number" << endl ;
        cin >> b;

        if (b>a)
        {
            a=b;
            count=0;
        }

       
       
    
        cout << "do you want to continue?(yes/no) " << endl;
        cin >> br;


        if (b==a)
        {
            count+=1;
        }
        else{
            
        }
        

        if (br=="no")
        {
            break;
        }
        else{
            
        }


    }


    cout<< "the highest number is " << a << endl;
    cout << "the number appear sebanyak " << count << endl;


}


int main(){

    int a, b, count;
    string br;

    cout << "enter your number" << endl ;
    cin >> a;
	
	do{
		
	  cout << "enter your next number" << endl ;
        cin >> b;

        if (b>a){
            a=b;
            count=0;
   		 }
    
        cout << "do you want to continue?(yes/no) " << endl;
        cin >> br;


        if (b==a)
            count+=1;
        

        if (br=="no")
            break;
        
    }
    while (br == "yes");
    

    cout << "the highest number is " << a << endl;
    cout << "the number appear " << count << " times";

	return 0;
}