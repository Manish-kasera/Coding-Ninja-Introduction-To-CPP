/*

Push Zeros to end
Send Feedback
You have been given a random integer array/list(ARR) of size N. You have been 
required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
Note:
Change in the input array/list itself. You don't need to return or print the elements.

You need to do this in one scan of array only. Don't use extra space.


Input format :
The first line contains an Integer 't' which denotes the number of test cases 
or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the 
size of the array/list.

Second line contains 'N' single space separated integers representing the elements 
in the array/list.
Output Format :
For each test case, print the elements of the array/list in the desired order 
separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1:
1
7
2 0 0 1 3 0 0
Sample Output 1:
2 1 3 0 0 0 0


*/


// Simple O(N) Solution
void pushZeroesEnd(int *input, int size)
{
    int count0 = 0;

    int index= 0;
    for(int i=0; i< size;i++)
    {
        if(input[i] != 0)
        {
            input[index] = input[i];
            index++;
        }
        else
        {
            count0++;
        }
    }

    for(; index < size;index++)
    {
        input[index] = 0; 
    }
}


// 2 Pointer Method Solution O(N) 

#include<bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
   int start =0,end=1;

   while(start < size && end < size)
   {
       if(input[start] == 0 && input[end] != 0)
       {
           swap(input[start],input[end]);
           start++;end++;
       }
       else if(input[start] != 0)
       {
           start++;
       }
       else if(input[end] == 0)
       {
           end++;
       }
   }   
}