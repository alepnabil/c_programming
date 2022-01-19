#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std ;

int main ()
{
	string filename ;
	string word ;
	
	cout << "Name of the file you want(.txt): " << endl ;
	cin >> filename ;
	cout << "Enter the word you want to search for: " << endl;
	cin >> word  ;
	cout << endl ;
	
	int count = 0 , current = 0 ;
	string line ;
	fstream file (filename.c_str());
	
	while (!file.eof())
	{
		bool found = false ;
		getline(file, line, '\n') ;
	
	
	  for (int i = 0 ; i < line.length() ; i++ )
	  {
		if (line[i] == word [current])
		{
			current++ ;
		}
		else current = 0 ;
		
		if (current == word.length () && !isalnum(line[i+1]))
		{
			found = true ;
			count++ ;
			current = 0 ;
		}
      }
		if (found)
		   cout << line << endl ;
	 
   }
   
   cout << "Your word \t " << word << "\t appeared \t " << count << " times" ;
	
	return 0 ;
	
}