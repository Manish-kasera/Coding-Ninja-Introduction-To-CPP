/*
Code : Alpha Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 3
A
BB
CCC

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Constraints
0 <= N <= 26

Sample Input 1:
7
Sample Output 1:
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG

*/


#include<iostream>
using namespace std;


int main()
{
   int n;
   cin >> n;

   for(int i=1;i <= n;i++)
   {
       char ch = 'A' +i -1;
       for(int j=1;j <= n;j++)
       {
           if(i >=j)
           {
               cout << ch;
           }
       }
       cout << endl;
   }
}


