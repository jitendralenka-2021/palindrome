About
========================================================================
Function called IsPalindrome() to check if a given pattern is palindrome.
If matched returns 1(true), else returns 0(false).

	- Function Prototype: bool IsPalindrome(string InStr)

A sample 'main.cpp' is given to test your input.

A unittest file 'unittest.cpp' is provided for sanity checking.


Rules for Input String
=========================================================================
Valid Input String: 	"1881", "Dad", "Step on no pets", " Dad", " dad ", "lenka"
Invalid Input String: 	"1#1", "", "@121@"


How to compile source(palindrome.cpp)
========================================================================
g++ -std=c++11 main.cpp palindrome.cpp HelperFunc.cpp -o palindrom


How to compile unittest file(unittest.cpp)
========================================================================
g++ -std=c++11 unittest.cpp palindrome.cpp  HelperFunc.cpp -o unittest