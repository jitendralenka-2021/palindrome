#include "palindrome.h"

void EnableDiableLog(bool InIsLog){
    g_IS_LOG_ENABLE=InIsLog;
}



bool GetLogVal(){
    return g_IS_LOG_ENABLE;
}



void Log(string InlogStr){
    if (g_IS_LOG_ENABLE==true) {cout << "DEBUG:" << InlogStr << "\n";}
}



void TrimLeadingAndTrailingSpace(string & InStr){    
    auto totSize = InStr.size();

    Log("TrimLeadingAndTrailingSpace():Start processing....");

    while (InStr.rfind(" ") == --totSize) { //Right side trim
        InStr.erase(totSize, totSize + 1);
    }

    while (InStr.find(" ") == 0) { //Left side trim
        InStr.erase(0, 1);
    }

    Log("TrimLeadingAndTrailingSpace():End processing....");
}



bool IsAlphanumeric(string InStr){
	bool retVal=true;

	Log("IsAlphanumeric():Starts processing....");

	for (auto ch:InStr){
    	if (!isalnum(ch)){ //If not alphanumeric then check for valid space character               
        	if (ch==' '){
                retVal = true;
        	}
        	else {
            	retVal = false;
            	break;
        	}
    	}
    	else{
    		//Alpha numeric character
    	}
	}

    Log("IsAlphanumeric():End processing....");
	return retVal;
}



// 1. Input is not empty string
// 2. size of input should not overflow
// 3. Input string should consists of alphanumeric. Space is allowed in between 
bool IsValidInput(string  & InStr){
	bool retVal = true;

    Log("IsValidInput():Start processing....");

    if(InStr.empty()){
        retVal = false;
    }
    else if(InStr.size() > InStr.max_size() ){ // It should not cross max size.
        retVal = false;
    }
    else{ // Alphanumeric and space in between pattern are allowed
    	TrimLeadingAndTrailingSpace(InStr);
        retVal = IsAlphanumeric(InStr);
    }

    Log("IsValidInput():End processing....");
    return retVal; 
}