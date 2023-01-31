/*

Pair Sum

You have been given an integer array/list(ARR) and a number X. 
Find and return the total number of pairs in the array/list which sum to X.

Note:
Given array/list can contain duplicate elements. 
Input format :
The first line contains an Integer 't' which denotes the number of 
test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' 
representing the size of the first array/list.

Second line contains 'N' single space separated integers representing 
the elements in the array/list.

Third line contains an integer 'X'.
Output format :
For each test case, print the total number of pairs present in the array/list.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9
Time Limit: 1 sec

Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7

*/
// O(n2) Solution
int pairSum(int *input, int size, int x)
{
	int c=0;
	for(int i=0; i< size ;i++)
	{
		for(int j=i+1 ;j < size;j++)
		 {
			if(input[i] + input[j] == x)
			 c++;
		 }
	}

	return c;
}


// O (n * log(n)) Optimize Solution
#include<bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n, int k)
{
	 sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
  
        // Lower bound from i+1
        auto y = lower_bound(arr + i + 1, arr + n, x) ;
  
        // Upper bound from i+1
        auto z = upper_bound(arr + i + 1, arr + n, x);
        c = c + z - y;
    }
    return c;
}