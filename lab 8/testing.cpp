#include <iostream> 
#include <cmath> 
using namespace std;  

void inputFunction(double &pound, double &ounce);
void calculateWeight(double pound, double ounce, double &kilogram, double &gram);
void outputFunction(double pound, double ounce, double kilogram, double gram);


int main() 
{    

	double pound,ounce;

	double kilogram,gram; 
	char inputOption; 

	do 
	{ 
		inputFunction(pound, ounce);
        calculateWeight(pound, ounce, kilogram, gram);
        outputFunction(pound, ounce, kilogram, gram);
       
		cout << "Repeat this computation for new input values?(Y/N): ";
		cin >> inputOption;
		cout << endl;
		
	}while(inputOption == 'Y' || inputOption == 'y');
	
	return 0;
} 

void inputFunction(double &pound, double &ounce)
{
	cout << "Enter pounds weight: "; 
	cin >> pound; 
	while(pound < 0)
	{
		cout << "Enter a valid number of pounds weight: ";
		cin >> pound; 
	} 
	cout << "Enter ounces weight: "; 
	cin >> ounce; 
	while(ounce < 0 || ounce >= 16)
	{
		cout << "Enter a valid number of ounces weight: ";
		cin >> ounce; 
	} 
	cout << endl;
} 

void calculateWeight(double pound, double ounce, double &kilogram, double &gram)
{   
	
	double totalpound;
	totalpound = pound + ounce / 16;
	kilogram =  totalpound / 2.2046;
	gram = kilogram * 1000;
	kilogram = floor(kilogram);
    gram = floor(gram - kilogram * 1000 + 0.5);
} 

void outputFunction(double pound, double ounce, double kilogram, double gram)
{
	cout << pound << " pounds and " << ounce << " ounces are equal to " << kilogram << " kilograms and " << gram << " grams." << endl;

}