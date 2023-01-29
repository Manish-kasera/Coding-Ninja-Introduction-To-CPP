/*

Number Star Pattern
Send Feedback
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;

int main()
{
  
  int n;
  cin >> n;

  for(int i=1; i<= n ;i++)
  {
    int val1 = 1;
    int val2 = n-i+1;
    for(int j=1; j <=2 * n;j++)
    {
       if(j >=1 && j <= n - i +1)
       {
         cout << val1++;
       }
       else if(j >= n + i)
       {
         cout <<val2--; 
       }
       else
       {
         cout<<"*";
       }
    }
    cout << endl;
  }
 
}


