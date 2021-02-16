#include "palindrome.h"
#include <iostream>
using namespace std;

void SetInputBuffer(){
	cin.clear(); //Restore input stream
	cin.ignore(5, '\n' ); //Flush garbage
}

int main()
{	
	bool LoopItr = true;
	bool retFromPalindrom = false;
	bool UserInputLog = true;
	string UserInputStr;
	//char UserInputStr[25]; 

	cout << "Do you want to Enable log(Type 1), Disable(Type 0): ";
	cin >> UserInputLog;
	EnableDiableLog(UserInputLog);
	cout << "For log, you have chosed to " << GetLogVal() << "\n";

	SetInputBuffer();

	do{
		cout << "###############################################\n";
		cout << "Enter pattern:";

		getline(cin, UserInputStr); 
		cout << "You entered:" << UserInputStr << "\n\n";

		retFromPalindrom=IsPalindrome(UserInputStr);
		cout << "-----------------------------------------\n";
		cout << "Palindrome Returned=" << retFromPalindrom << "\n";
		cout << "\n-----------------------------------------\n";
		cout << "###############################################\n\n";

		cout << "Type 1 to continue and 0 to stop:";
		cin >> LoopItr;
		cout << "\n\n";

		SetInputBuffer();
	}while(LoopItr);
} 
