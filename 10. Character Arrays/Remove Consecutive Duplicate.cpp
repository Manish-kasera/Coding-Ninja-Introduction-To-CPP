/*

Remove Consecutive Duplicates
Send Feedback
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 Input Format:
The first and only line of input contains a string without any leading 
and trailing spaces. All the characters in the string would be in lower case.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.
Time Limit: 1 second

Sample Input 1:
aabccbaa
Sample Output 1:
abcba

*/

#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    
    int start =0, end = 1;
    int n = strlen(input);
   
    while(start < n && end < n)
    {
        if(input[start] == input[end])
        {
            int i = end;
            for(; i< n;i++)
            {
                input[i] = input[i+1];
            }
            input[i] = '\0';
            n--;
        }
        else
        {
            start++;end++;
        }
    }
}




#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[]) 
{
   int start =0,end=1;
    string ans ="";
    for(int i=0;i < strlen(input);i++)
    {
        if(input[start] == input[end])
        {
            end++;
        }
        else if( input[start] != input[end])
        {
            ans += input[i];
            start=  end;
            end++;
        }
    }
   int i=0;
   for(i;i< ans.size();i++)
   {
       input[i] = ans[i];
   }
    input[i] = '\0';
}