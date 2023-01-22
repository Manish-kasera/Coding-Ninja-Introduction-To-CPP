/*
Number Pattern 2

Print the following pattern
Pattern for N = 4
...1
..23
.345
4567


The dots represent spaces.


Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines


The dots represent spaces.
*/

#include<iostream>
using namespace std;


int main()
{
  
  int n;
  cin >> n;

  int i=1;
  while(i <=n)
  {
	  int val = i;
	  int space = 1;
	  while(space <= n-i)
	  {
       cout <<" ";
	   space++;
	  }
	  int j=1;
	  while(j <= i)
	  {
		  cout << val;
		  val++;
		  j++;
	  }
	  cout << endl;
	  i++;
  }
     
  
}


