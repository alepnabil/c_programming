#include<iostream>
using namespace std;


int main(){


    int size;
    cout << "Enter size of char : " ;
    cin >> size;

    char gamma[size]={0};
    char delta[size]={0};

    char N;


	for(int i = 0; i < size ; i++)
	{
		cout<<"\nPlease enter a character: "<<endl;
		cin>>N;

		if ((N == 'a') || (N == 'e') || (N == 'i') || (N =='o')||(N == 'u'))
		{
			gamma[i] = N;
			cout<<N<<" is vowel\n";
		}
	
		else
		{
			delta[i] = N;	
			cout<<N<<" is non-vowel\n";
		}
	}


	
return 0;	
}