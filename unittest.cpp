// This is unittest file
#include "palindrome.h"
#include <iomanip>

using namespace std;

constexpr int PASS=0;
constexpr int FAIL=1;


//1. TrimLeadingAndTrailingSpace()
void Unittest_Palindrome(string InPattern, bool ExpectedVal){

	bool ActualVal = IsPalindrome(InPattern);
	if (ExpectedVal==ActualVal){
		cout << "Test case passed: " << std::left << "Pattern:" << InPattern << "  "<< std::left << "Returns:" << ActualVal << "\n";
	}
	else{
		cout << "Test case failed: " << std::left << "Pattern:" << InPattern << "  "<< std::left << "Returns:" << ActualVal << "\n";
	}
}
 

int main(){

	EnableDiableLog(false); //Disable log

	// starts here
	Unittest_Palindrome("", false);

	Unittest_Palindrome("a", true);

	Unittest_Palindrome("JITU", false);

	Unittest_Palindrome("dad", true); 

	Unittest_Palindrome("Dad", true);
 
	Unittest_Palindrome("1881", true);

	Unittest_Palindrome("MalaYalAm", true);

	Unittest_Palindrome("Step on no pets", true);

	Unittest_Palindrome("Bhubaneswar", false);

	Unittest_Palindrome(" ctC ", true);

	Unittest_Palindrome(" Goog", true);

	Unittest_Palindrome("565 ", true);

	Unittest_Palindrome("1#1", false);

	Unittest_Palindrome("@#@", false);

	return 0;	
}
