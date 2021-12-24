#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x == 0)
       return y;
       
    if (y == 0)
       return x;
  
    if (x == y)
        return x;
  
    if (x > y)
        return gcd(x-y, y);
        
    return gcd(x, y-x);
}

int main()
{
	int x,y;
	
	cout << "Enter your first number : " << endl;
	cin >> x;
	
	cout << "Enter your second number : " << endl;
	cin >> y;
	
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y);

    return 0;
}