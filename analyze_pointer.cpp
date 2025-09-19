#include <iostream>
using namespace std;
void analyze_pointer(int *ptr){
	//the memory location pointed by the pointer to the console
	cout << "adress stored in the pointer is : " << ptr << endl;
	//the value of the integer which the pointer points to the console
	cout << "the adress points to the value is : " << *ptr << endl;
}
int main(){
	int i1 = 5;;
	//crating the pointer using stack
	int *iValue1 = &i1;
	//calling the function
	analyze_pointer(iValue1);

	//creating the pointer using heap
	int *iValue2 = new int(6);
	//calling the function
	analyze_pointer(iValue2);
	delete iValue2;
	return 0;
}