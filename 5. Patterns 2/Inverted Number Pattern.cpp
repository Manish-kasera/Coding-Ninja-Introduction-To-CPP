/*
Code : Inverted Number Pattern

Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) 
  {
    int val = n-i+1;
    for (int j = 1; j <= n; j++) 
	{
      if (j <= n - i+1) 
	  {
        cout << val;
      } 
    }
    cout << endl;
  }
}
