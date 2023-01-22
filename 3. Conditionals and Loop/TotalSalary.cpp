/*

Total Salary

Write a program to calculate the total salary of a person. 
The user has to enter the basic salary (an integer) and the
grade (an uppercase character), and depending upon which the 
total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf

where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.

Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so
Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary

Constraints :
0 <= Basic Salary <= 7,500,000

Sample Input 1 :
10000 A
Sample Output 1 :
17600

Sample Input 2 :
4567 B
Sample Output 2 :
8762

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int basicSalary;
    char grade;

    cin >> basicSalary >> grade;

    float totalSalary = basicSalary + (0.2 * basicSalary) + (0.5* basicSalary) - (0.11 * basicSalary);

    if(grade == 'A')
      totalSalary += 1700; 
    else if(grade == 'B')
      totalSalary += 1500;
    else
      totalSalary += 1300;

   int ans = (round)(totalSalary) ;

   cout << ans << endl;    
    
}
