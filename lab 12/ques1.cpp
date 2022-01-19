#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){

    ifstream input; // declare object
    input.open("file1.txt"); // open a file
    int number,count=0;
    string filename("file1.txt");
    int avg=0,sum=0,i,temp,j,numarray[7];

    ofstream output;

    output.open("increase.txt");

    //error handling
    if (!input.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    //read each line in the file
    while (input >> number) {
        //append the value inside the new file
      
            numarray[count]=number;
            count++;
            cout << number << "\t" ;
            //to calculate the sum of the numbers
            sum+=number;
    }
    
  
    cout << endl;
    cout << "sorting numbers...." << endl;


    //sort the array
    for (int i = 0; i < 7; i++) {
        for (int j = 1 + i; j < 7; j++) {
                if (numarray[i] > numarray[j]) {
                    temp = numarray[i];
                    numarray[i] = numarray[j];
                    numarray[j] = temp;
                }
        }
    }
   
    //insert the sorted numbers into the new file
    if (output.is_open()){
        for ( i = 0; i < 7; i++)
            {
                    output <<"\t" <<  numarray[i];
            }
    }           
            
        
                
    input.close();
    output.close();



    cout << endl;
    avg =sum/7;

    cout << "the sum is : " << sum << endl;
    cout << "the avg is : " << avg << endl;

}
