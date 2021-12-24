#include <iostream>

using namespace std;

int main() {
	
	float weight,height,BMI;
	
	cout << "Enter weight (in kiliogram): ";
	cin >> weight;
	
	cout << "Enter height (in meters): ";
	cin >> height;
	
	BMI =  weight/(height*height);
	
	if (BMI< 18.5 ) {
		
		cout << "Your BMI is " << BMI << " and your interpretion is Underweight" << endl;
		
	}
	
	else if (BMI < 25.0){
		
		cout << "Your BMI is " << BMI << " and your interpretion is Normal" << endl;
	}
	else if (BMI < 30.0){
		
		cout << "Your BMI is " << BMI << " and your interpretion is Overweight" << endl;
	}
	else {
		
		cout << "Your BMI is " << BMI << " and your interpretion is Obese" << endl;
	}

	return 0;
	
}