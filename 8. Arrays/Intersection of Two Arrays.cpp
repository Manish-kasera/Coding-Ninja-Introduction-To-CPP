/*

Intersection of Two Arrays II
Send Feedback
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, 
respectively. You need to print their intersection; An intersection for 
this problem can be defined when both the arrays/lists contain a 
particular value or to put it in other words, when there is a common 
value that exists in both the arrays/lists.

Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the 
first array/list(ARR1)


Input format :
The first line contains an Integer 't' which denotes the number of test cases 
or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing
the size of the first array/list.

Second line contains 'N' single space separated integers representing the 
elements of the first the array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the 
elements of the second array/list.
Output format :
For each test case, print the intersection elements in a row, 
separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1 sec 

Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 4 3
10

*/

// O(n2) Solution
#include<bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
   for(int i=0; i< size1;i++)
   {
       for(int j=0; j< size2;j++)
       {
         if (input1[i] == input2[j]) {
           cout << input1[i] << " ";
           input2[j] = INT_MIN;
           break;
         }
       }
   }
}



// Optimize Solution O(n) But it will not work due to printing sequence wise 
#include<bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
   sort(input1 , input1+size1);
   sort(input2, input2+ size2);

   int i=0 ,j=0;

   while( i< size1 && j < size2)
   {
       if(input1[i] == input2[j])
       {
           cout << input1[i] <<" ";
           i++;j++;
       }
       else if(input1[i] > input2[j])
       {
           j++;
       }
       else
       {
           i++;
       }
   }
}