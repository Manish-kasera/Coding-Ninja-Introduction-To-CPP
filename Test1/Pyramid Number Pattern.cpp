/*

Pyramid Number Pattern
Print the following pattern for the given number of rows.

Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)
Output format : Pattern in N lines

Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345

*/

#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;

  for(int i=1; i <= n;i++)
  {
    int val = i;
    for(int j = 1; j <= (2* n) - 1;j++)
    {
      
       if(j >= n - i +1  && j <= n + i -1)
       {
         cout << val;

         if(j >= n-i+1 && j < n)
         {
           val--;
         }
         else{
           val++;
         }
       }
       else
       {
         cout <<" ";
       }
    }
    cout << endl;
  }

  
}

