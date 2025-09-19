#include <iostream>
#include <string>  //for taking input from the pointer as a string
#include <utility> // for swap function 
using namespace std;

//function to reverse the string using pointer
void reverseString(string *ptr){
	int length = ptr->length();
	for (int i = 0; i < length / 2; i++){
		swap((*ptr)[i], (*ptr)[length - i - 1]);  // Swap characters to reverse string
	}
}

// function to output the string with the help of pointer
void outputString(string *ptr){
	cout << *ptr << endl;  
}

int main(){
	string *ptr = new string;  // Allocate string on heap
	cout << "Enter a string : ";
	getline(cin, *ptr);        
	reverseString(ptr); 
	cout << "the reverse string is : ";
	outputString(ptr);  
	cout << endl;

	//free the allocated memory
	delete ptr;                

	return 0;
}