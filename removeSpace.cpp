// C++ Program to remove spaces from a string 
#include <iostream> 
#include <string> 

using namespace std; 

string remove_spaces(string str) 
{ 
	string result = ""; 
	for (char c : str) { 
		if (c != ' ') { 
			result += c; 
		} 
	} 
	return result; 
} 

int main() 
{ 
	string str = "remove space from string"; 

	cout << "Without spaces: " << remove_spaces(str) 
		<< endl; 

	return 0; 
}
