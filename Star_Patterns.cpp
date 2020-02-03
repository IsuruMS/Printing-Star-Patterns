//header files
#include<iostream>
using namespace std;

//declaration of the function
void PrintPattern(int n, char letter);

//main function
int main()
{
	//needed variables
	int noLines;
	char printChar;

	//getting the no of lines
	cout << "Number of Lines in the Pattern\t:\t";
	cin >> noLines;
	//getting the character to be printed
	cout << "\nCharacter to be Printed\t:\t";
	cin >> printChar;

	//the upper pattern
	for (int i = noLines; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << printChar;
		}
		cout << endl;
	}
	//function fot lower pattern
	PrintPattern(noLines, printChar);

	//end of the program
	system("pause");
	return 0;
}

//recursive fucntion for lower pattern
void PrintPattern(int n, char letter)
{
	//base case
	if (n == 0)
	{
		return;
	}
	//recurssion
	PrintPattern(--n, letter);

	//print the result
	for (int i = 0; i <= n; i++)
	{
		cout << letter;
	}
	cout << endl;
}