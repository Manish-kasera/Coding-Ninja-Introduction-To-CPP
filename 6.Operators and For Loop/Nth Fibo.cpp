/*
Nth Fibonacci Number
Send Feedback
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1

Provided N you have to find out the Nth Fibonacci Number.

Input Format :
The first line of each test case contains a real number ‘N’.
Output Format :
For each test case, return its equivalent Fibonacci number.

Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second

Sample Input 1:
6
Sample Output 1:
8

*/

#include<bits/stdc++.h>
using namespace std;

// 1 1 2 3 5 8
int main()
{
   int n;
   cin >> n;
   
  if(n == 1 || n == 2)
   {
        cout << "1" << endl;
        return 0;
   }
   
   int x = 1,y = 1;
   for(int i=2; i<n;i++)
   {
        int temp = x;
        x = y;
        y = temp+y;
   }   
   cout << y << endl;
}