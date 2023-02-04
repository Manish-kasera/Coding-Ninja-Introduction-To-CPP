/*

Highest Occuring Character
Send Feedback
For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest 
frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, 
return the character which comes first.
Consider:
Assume all the characters in the given string to be in lowercase always.
Input Format:
The first and only line of input contains a string without any leading and 
trailing spaces.
Output Format:
The only line of output prints the updated string. 
Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abdefgbabfba
Sample Output 1:
b

Sample Input 2:
xy
Sample Output 2:
x

*/

#include<bits/stdc++.h>
using namespace std;
#define NUM_CHAR 256

char highestOccurringChar(char input[]) {
 
     int count[NUM_CHAR] = {0};
    
    int len = strlen(input);
    char res;
    int maxi = INT_MIN;
    
    for(int i=0;i < len;i++)
    {
        count[input[i]]++;
        if (maxi <= count[input[i]])
        {
            maxi = count[input[i]];
            res = input[i];
        }
        
    }
  return res;
}


// This Solution May Not Works
using namespace std;

char highestOccurringChar(char input[]) {
  
  int hash[27];

  for(int i=0; i<= 26;i++)
  {
      hash[i] = 0;
  }

  for(int i=0;i < strlen(input);i++)
  {
      hash[input[i] - 97]++;
  }
  
  char ans;
  int maxi =0;
  for(int i=0;i < strlen(input);i++)
  {
    if (hash[input[i] - 97] > maxi )
    {
        maxi = hash[input[i] - 97];
        ans = input[i] ;
    }
  }

 return ans;
}