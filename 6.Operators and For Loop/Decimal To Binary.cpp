/*

Decimal to Binary

Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding
binary number can exceed the integer range. So you may want to take 
the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail
when used for 'int's, 'long's, or 'long long's. Implement your own "pow" 
function to work for non-float data types.

Input format :
Integer N
Output format :
Corresponding Binary number (long)

Constraints :
0 <= N <= 10^5

Sample Input 1 :
12
Sample Output 1 :
1100

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{

  long long n;cin >> n;
  if(n == 0)
  {
	  cout <<"0" << endl;
	  return 0;
  }
  string s="";
  while( n != 1)
  {
	  int last = n % 2;
	  s += to_string(last);
	  n /= 2;
  }	
   
   s +="1";

   reverse(s.begin(),s.end());
   cout << s << endl; 
	
}
