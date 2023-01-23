/*

Code : Character Pattern

Print the following pattern for the given N number of rows.

Pattern for N = 4
A
BC
CDE
DEFG

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Constraints
0 <= N <= 13

Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) 
  {
    char ch = 'A' + i - 1;
    for (int j = 1; j <= n; j++) 
	{
      if (i >= j) 
	  {
        cout << ch;
		ch++;
      }
    }
    cout << endl;
  }
}
