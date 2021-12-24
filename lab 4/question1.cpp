#include <iostream>
#include <cmath>
using namespace std;


int main(){

  	float pq,trv;
	int i=1;
	
	while (i<=5){
		cout << "Please enter the quantity of product No." << i << endl;
		cin >> pq;
		
	    switch(i){
		    case 1:
			    trv += pq * 2.98;
			    break;
		    case 2:
			    trv += pq * 4.50;
			    break;
		    case 3:
			    trv += pq * 9.98;
			    break;
		    case 4:
			    trv += pq * 4.49;
			    break;
		    case 5:
			    trv += pq * 6.87;
			    break;
		    default:
			    cout << "invalid input" << endl;
			}
		i++;
	}
	
	cout << "total price is RM: " << trv << endl;
	
	return 0;

}