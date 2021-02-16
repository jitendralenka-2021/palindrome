#include "palindrome.h"


bool ProcessStrChars(string InStr){
    bool retVal = true;

    string::iterator forwardItr;         // Forward iterator
    string::reverse_iterator reverseItr; // Reverse Iterator

    forwardItr=InStr.begin();  //Itr pointing start of string
    reverseItr=InStr.rbegin(); //Itr pointing end of string 

    Log("ProcessStrChars():Start processing....");

    // Comparsion starts from pattern's one character from beginning and one character from end.
    for ((forwardItr,reverseItr); (forwardItr!=InStr.end(),reverseItr!=InStr.rend()); (forwardItr++,reverseItr++)){
        if (*forwardItr != *reverseItr){
            retVal = false;
            break;
        }
        else{
            //Nothing to do in match case.
        }
    }

    Log("ProcessStrChars():End processing....");
    return retVal;
}



//Desc: Function to determine if a word or phrase is a palindrome
//Arg-1: InStr (string type)
//Return Value: Returns 'true' if pattern matched else 'false'
//Author: @Jitendra
bool IsPalindrome(string InStr){
	bool retVal=true;
    bool retFromInputCheck=true;

    Log("IsPalindrome():Start processing....");

    retFromInputCheck = IsValidInput(InStr);

    if (retFromInputCheck){
        transform(InStr.begin(), InStr.end(), InStr.begin(), ::tolower); // convert to lower case   

        retVal=ProcessStrChars(InStr);        
    }
    else {
        retVal = false;
    }

    Log("IsPalindrome(): End processing...");
    return retVal;
}