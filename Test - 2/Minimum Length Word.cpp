/*

Minimum Length Word
Send Feedback
Given a string S (that can contain multiple words), you need to find the word which 
has minimum length.
Note : If multiple words are of same length, then answer will be first minimum 
length word in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word

Constraints :
1 <= Length of String S <= 10^5

Sample Input 1 :
this is test string
Sample Output 1 :
is

Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a

*/

/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/

#include<bits/stdc++.h>
using namespace std;

void minLengthWord(char input[], char output[]){
	
	string s="";
	int mini = 1000;
	string temp="";
	for(int i=0;i<=strlen(input);i++)
	{
        if(input[i] ==' ' || input[i] == '\0')
		{
           if(mini > temp.size())
		   {
			   s.clear();
			   s += temp;
			   mini = temp.size();
		   }
		   temp.clear();
        }
		else
		{
            temp += input[i]; 
		}
	}
    
	int i=0;
	for(; i< s.size();i++)
	 output[i] = s[i];

	output[i] = '\0';	 
}


