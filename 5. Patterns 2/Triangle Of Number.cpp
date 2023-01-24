/*

Code : Triangle of Numbers

Print the following pattern for the given number of rows.

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
     1
    232
   34543
  4567654
 567898765

*/





#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for(int i=1; i<= n;i++)
    {
        int val_pos = i;
        for(int j=1; j<= (2*n) -1 ;j++)
        {
            if(j <= n-i)
            {
                cout <<" ";
            }
            else if(j <= n)
            {
                cout << val_pos;
                if(j == n)
                {
                    val_pos--;
                }
                else
                {
                    val_pos++;
                }
               
            }
           else if( j <= n + i-1)
            {
                
                cout << val_pos ;
                val_pos--; 
            }
        }
        cout << endl;
    }
   
    
}
