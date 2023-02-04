/*

Reverse Each Word
Aadil has been provided with a sentence in the form of a string as a function parameter.
The task is to implement a function so as to print the sentence such that each 
word in the sentence is reversed.
Example:

Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
Input Format:
The first and only line of input contains a string without any leading and 
trailing spaces. The input string represents the sentence given to Aadil.
Output Format:
The only line of output prints the sentence(string) such that each word in
the sentence is reversed. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN

*/

#include<bits/stdc++.h>

void reverse(char input[],int i,int j)
{
    while(i <= j)
    {
        swap(input[i],input[j]);
        i++;j--;
    }
}

void reverseEachWord(char input[]) {
    int start = -1;
    int end;
    
    int i =0;
    for(; input[i] != '\0';i++)
    {
        if(input[i] ==' ' || input[i] == '\0')
        {
          reverse(input, start + 1, i - 1);
          start = i;
        }
    }
    reverse(input,start+1,i-1);
}