// HW2.cpp
// Name: Gary Singh
// Date: 2/11/20

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <algorithm>

using namespace std;

int mainMenu();
int pleaseInput();
int removeConsonant();
int removeVowell();
int removeNumber();
int removePunct();
bool correctSelection = false;
string userInput = "";
string userInputCopy = ""; //For storing original string, before it was formatted.
string userInputNumber = "";
string userInputPunct = "";
string userInputConsonant = "";


int main() 
{

	do
	{
		mainMenu();		
	} while
		( // Enter some words or 0 to exit.
			correctSelection == false
			);

	return 0;
}


int mainMenu() {

	pleaseInput(); // User must enter words in the main menu.

	getline(cin, userInput);

	if (cin.fail() || userInput == "" || userInput == " " || userInput.size() == 0) { // Ensures that the text are words or 0.

		cout << "\n\n\t*********************ERROR***********************\n";
		cout << "\tMust enter words.";
		cout << "\n\n\t*********************ERROR***********************\n";

		cin.clear();		

		correctSelection = false;

		return 0;

	}
	else if (userInput == "0") { // Pressing 0 will exit the program.
			   		 
		exit(0);
		
	}
	else // Appropriate input will be altered accordingly.
	{
		correctSelection = true;

		userInputCopy = userInput; // store a copy to show how original was modified.

	
		cout << "\n\t\t\tOriginal: " << userInputCopy << "\n\n\t\t\tremove vowels: "; //Display the original value as a reminder.

		removeVowell(); // Remove all the vowels from the string.
		removeNumber();
		removePunct();
		removeConsonant();

		cout << userInput << "\n\n\t\t\tremove numbers: " << userInputNumber << "\n\n\t\t\tremove punctuations: " << userInputPunct << "\n\n\t\t\tremove consonants: " << userInputConsonant << endl;
			   		 
	}

	correctSelection = false;

	return 0;
}

int pleaseInput() { // Allows the user to input words or exit.

	cout << "\tPlease enter a word(s)? Or press (Exit = 0): ";

	return 0;
}

int removeNumber() {

	userInputNumber = userInputCopy;

	for (int i = 0, stringLength = userInputNumber.size(); i < stringLength; i++) // if the char is a number, it removes from the string.
	{
		if (isdigit(userInputNumber[i]))
		{
			userInputNumber.erase(i--, 1);
			stringLength = userInputNumber.size();
		}

	}

	return 0;
}

int removeVowell()
{
	for (int i = 0, stringLength = userInput.size(); i < stringLength; i++) // if the char is a vowell, it removes from the string.
	{
		if (userInput[i] == 'a' || userInput[i] == 'e' || userInput[i] == 'i' || userInput[i] == 'o' || userInput[i] == 'u')
		{
			userInput.erase(i--, 1);
			stringLength = userInput.size();
		}
		else if (userInput[i] == 'A' || userInput[i] == 'E' || userInput[i] == 'I' || userInput[i] == 'O' || userInput[i] == 'U')
		{
			userInput.erase(i--, 1);
			stringLength = userInput.size();
		}

	} return 0;
}
int removePunct()
{
	userInputPunct = userInputCopy;

	for (int i = 0, stringLength = userInputPunct.size(); i < stringLength; i++) // if punctuation is found in any char, it is removed from the string.
	{
		if (ispunct(userInputPunct[i]))
		{
			userInputPunct.erase(i--, 1);
			stringLength = userInputPunct.size();

		}
	} return 0;
}

int removeConsonant()
{
	userInputConsonant = userInputCopy;

	for (int i = 0, stringLength = userInputConsonant.size(); i < stringLength; i++) // if the char is a consonant, it removes from the string.
	{
		if (userInputConsonant[i] == 'b' || userInputConsonant[i] == 'c' || userInputConsonant[i] == 'd' || userInputConsonant[i] == 'f' || userInputConsonant[i] == 'g' || userInputConsonant[i] == 'h' || userInputConsonant[i] == 'j' || userInputConsonant[i] == 'k' || userInputConsonant[i] == 'l' || userInputConsonant[i] == 'm' || userInputConsonant[i] == 'n' || userInputConsonant[i] == 'p' || userInputConsonant[i] == 'q' || userInputConsonant[i] == 'r' || userInputConsonant[i] == 's' || userInputConsonant[i] == 't' || userInputConsonant[i] == 'v' || userInputConsonant[i] == 'w' || userInputConsonant[i] == 'x' || userInputConsonant[i] == 'y' || userInputConsonant[i] == 'z')
		{
			userInputConsonant.erase(i--, 1);
			stringLength = userInputConsonant.size();
		}
		else if (userInputConsonant[i] == 'B' || userInputConsonant[i] == 'C' || userInputConsonant[i] == 'D' || userInputConsonant[i] == 'F' || userInputConsonant[i] == 'G' || userInputConsonant[i] == 'H' || userInputConsonant[i] == 'J' || userInputConsonant[i] == 'K' || userInputConsonant[i] == 'L' || userInputConsonant[i] == 'M' || userInputConsonant[i] == 'N' || userInputConsonant[i] == 'P' || userInputConsonant[i] == 'Q' || userInputConsonant[i] == 'R' || userInputConsonant[i] == 'S' || userInputConsonant[i] == 'T' || userInputConsonant[i] == 'V' || userInputConsonant[i] == 'W' || userInputConsonant[i] == 'X' || userInputConsonant[i] == 'Y' || userInputConsonant[i] == 'Z')
		{
			userInputConsonant.erase(i--, 1);
			stringLength = userInputConsonant.size();
		}

	} return 0;
}