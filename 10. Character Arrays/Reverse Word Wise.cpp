/*

Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given 
string should come at 1st place, last second word at 2nd place and so on. 
Individual words should remain as it is.

Input format :
String in a single line
Output format :
Word wise reversed string in a single line

Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.

Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always

*/


// Best Solution O (N)
void reverse(char input[], int start, int end)
{
   while(start < end)
   {
    std::swap(input[start++], input[end--]);
   }
}

void reverseStringWordWise(char input[])
{
  int previousSpaceIndex = -1;
  int i = 0;
  
  for(; input[i] != '\0'; i++)
  {
   if(input[i] == ' ')
   {
    reverse(input, previousSpaceIndex + 1, i - 1);
    previousSpaceIndex = i;
   }
  }
  
  reverse(input, previousSpaceIndex + 1, i - 1);
  reverse(input, 0, i - 1);
}



// Using Vector, String and CharArray Solution O(NlogN)
#include<bits/stdc++.h>
using namespace std;

void reverseStringWordWise(char input[]) {
   
   string s ="";
   vector <string> v;

   for(int i=0; i<= strlen(input);i++)
   {
     if (input[i] != ' ' && input[i] != '\0') {
       s += input[i];
     } 
     else 
     {
       v.push_back(s);
       s.clear();
     }
   }

   reverse(v.begin(),v.end());

   string ans = "";
   for (int i = 0; i < v.size(); i++) {
     if (i != v.size() - 1)
       ans += v[i] + " ";
     else
       ans += v[i];
   }

   // c.str() used to convert string to charArray
   strcpy(input, ans.c_str()); // ye important hai guru
}