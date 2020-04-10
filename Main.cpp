#include <iostream>
#include <string>

using namespace std;

//Function: dataType nameOfFunction() {}

//Function Declarations
void printMessage();
// printMessage - prints a welcoming message for the user

void printResult(int);
// printResult - prints whatever is passed in as a parameter
//@param int - the number to be printed

void addNums(int, int);
//addNums - add two integers
//@param int - first number to be added
//@param int - second number to be added

int main()
{

	printMessage();

	int num1,
		num2;
	
	cout << "Type in two integers: ";
	cin >> num1 >> num2;

	addNums(num1, num2);

	return 0;
}

//Function Definitions

void printMessage()
{
	cout << "Math Operations" << endl;
}

void addNums(int x, int y)
{
	printResult(x + y);
}

void printResult(int total)
{
	cout << "Total: " << total << endl;
}