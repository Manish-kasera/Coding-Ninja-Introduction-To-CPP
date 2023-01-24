/*

Code : Mirror Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  12
 123
1234


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
*/

#include<iostream>
using namespace std;


int main()
{
   int n;
   cin >> n;

   for(int i=1; i<= n;i++)
   {
	   int val = 1;
	   for(int j=1;j <= n;j++)
	   {
		   if(j <= n-i)
		   {
			   cout <<" ";
		   }
		   else
		   {
             cout << val;
			 val++;
		   }
	   }
	   cout << endl;
   }  
  
}


