// title:understanding
// http://media.textadventures.co.uk/games/WcXYblcKtkSx6lJKY_pz7w/index.html
#include <iostream>
#include <ctime>

using namespace std;

//int = return type
//main = entry function
//() = parameters

//prototype function
int AddTwoNumber(int firstNumber, int secondNumber);

int main()
{
	cout << "\n\n\t\t *** Welcome to the Slam ***\n\n";
	
	//variable to catch the sum needed
	//return value
	int catchTheSum = 0;
	catchTheSum = AddTwoNumber(5, 7);
	cout << "\n My calculations say the sum is " << catchTheSum << endl;
	
	return 0;
}

int AddTwoNumber(int firstNumber, int secondNumber)
{
	//create variable to hold total (sum)
	int sum;
	//add two numbers for the total
	sum = firstNumber + secondNumber;
	
	return sum;
}