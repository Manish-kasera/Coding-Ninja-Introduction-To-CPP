/*
Code : Interesting Alphabets

Print the following pattern for the given number of rows.

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Input format :
N (Total no. of rows)
Output format :
Pattern in N lines

Constraints
0 <= N <= 26

Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) 
  {
    char ch = 'A' + n -i;
    for (int j = 1; j <= n; j++) 
    {
      if (i >= j) {
        cout << ch;
        ch++;
      }
    }
    cout << endl;
  }
}
