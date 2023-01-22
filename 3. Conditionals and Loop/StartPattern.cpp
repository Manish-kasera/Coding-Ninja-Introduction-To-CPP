/*
Start Pattern

Print the following pattern


The dots represent spaces.


Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******

*/

#include<iostream>
using namespace std;


int main(){
   
   int n;
   cin >>n;

   int i=1;

   while(i <= n)
   {
      int space = 1;
      while(space <= n-i)
      {
         cout <<" ";
         space++;
      }

      int j = 1;
      while( j <=(2 *i) - 1)
      {
         cout <<"*";
         j++;
      }
      cout << endl;
      i++;
   }
   
}


