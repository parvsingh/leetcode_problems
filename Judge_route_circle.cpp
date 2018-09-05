/*
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true
Example 2:
Input: "LL"
Output: false
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        
    	int countU = 0;
    	int countD= 0;
    	int countL= 0;
    	int countR= 0;
       
    	int l = moves.length();
    	for(int i = 0; i < l; i++)
    	{


	        switch(moves.at(i)){
	        	case 'U':
	        			countU ++;
	        			break;
	        	case 'D':
	        			countD ++;
	        			break;
	        	case 'L':
	        			countL ++;
	        			break;
	        	case 'R':
	        			countR ++;
	        			break;
	        }
            
        }
	        if(countU == countD)
	        {   if(countL == countR)
	        	    return true;
	        }
	    return false; 
    }
};