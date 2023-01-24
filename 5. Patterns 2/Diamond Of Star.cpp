/*
Code : Diamond of stars
Print the following pattern for the given number of rows.

Note: N is always odd.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

 */
 

include<iostream>
using namespace std;


int main() {
    
  int n;
  cin >> n;
  
  int i=1;
  while( i<= (n/2 )+1)
  {
      int space =1;
      while(space <= (n/2 )+ 1-i)
      {
          cout << " ";
          space++;
      }

      int stars = 1;

      while(stars <= (2* i) - 1)
      {
          cout <<"*";
          stars++;
      }
      cout << endl;
      i++;
  }

  int j = n-2;
  int s = 1;
  while( i <= n)
  {
      int space = 1;
      while(space <= s)
      {
          cout <<" ";
          space++;
      }
      
      int star = 1;
      while(star <= j)
      {
          cout << "*" ;
          star++;
      } 
     
      j -=2;
      i++;
      cout << endl;
      s++;
  }
    
}
 