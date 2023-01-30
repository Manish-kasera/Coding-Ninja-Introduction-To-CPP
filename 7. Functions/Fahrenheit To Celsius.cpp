/*

Fahrenheit to Celsius Table
Send Feedback
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) 
and Step Size (W), you need to convert all Fahrenheit values from 
Start to End at the gap of W, into their corresponding Celsius values 
and print the table.

Input Format :
3 integers - S, E and W respectively
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value. Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")

Constraints :
0 <= S <= 1000
0 <= E <= 1000
0 <= W <= 1000

Sample Input 1:
0 
100 
20

Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37

*/

void printTable(int start, int end, int step) {

  while(start <= end)
  {
     int ans = (start - 32) * (5/9.0); 
     cout << start <<" " << ans << endl;
      start += step;
  }
    
}


