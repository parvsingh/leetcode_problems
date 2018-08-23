/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
*/

class Solution {
public:
    string toLowerCase(string str) {
   	#ifndef 0

    	for(int i = 0; i < str.size(); i++)
    	{
    		str[i] = (char)tolower(str[i]);		 
    	}

    #else
        for(int i= 0; i < str.size(); i++)
    	{
    		if(isalpha(str[i]) && str[i] < 'a')
    		{

    			str[i] = str[i] + 32;
    		}
    		else
    			str[i] = str[i];		 
    	}

    #endif 
    return str;

    }
};