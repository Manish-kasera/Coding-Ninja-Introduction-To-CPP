/*

Compress the String
Send Feedback
Write a program to do basic string compression. For a character which is 
consecutively repeated more than once, replace consecutive duplicate occurrences 
with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note:
Consecutive count of every character in the input string is less than or equal to 9.
Input Format:
The first and only line of input contains a string without any leading and 
trailing spaces.
Output Format:
The output contains the string after compression printed in single line.
Note:
You are not required to print anything. It has already been taken care of. 
Just implement the given function.
Constraints:
0 <= N <= 10^6

Where 'N' is the length of the input string.

Time Limit: 1 sec

Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa

*/

#include<bits/stdc++.h>

string getCompressedString(string &input) {
   
   string s ="";
   int start =0, end =1,count=1;
   int n = input.size();

   while(start <= n && end <= n)
   {
      if(input[start] == input[end])
      {
          end++;
          count++;
      }
      else
      {
          s += input[start];

          if(count > 1)
          {
              s += to_string(count);
          }
          count = 1;
          start = end;
          end++; 
      }
   }

   return s;
}