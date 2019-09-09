/*
Print this pattern

Pattern for N = 5

 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
 
 
 For N = 4
 1  2  3  4
 9 10 11 12
13 14 15 16
 5  6  7  8
*/

#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here
  
  int startValue = 1;
  for(int i = 1; i <= n; i++)
  {
      for(int j = startValue; j < startValue+n; j++)
    cout<<j<<" ";
  cout<<endl;
  
  //Now decide the next start value
  if( i == (n+1)/2)
  {
    if(n % 2 != 0)
      startValue = n*(n-2) + 1;
    else
      startValue = n*(n-1) + 1;
   }
   else if(i > (n+1)/2)
    startValue = startValue - 2*n;
   else
    startValue = startValue + 2*n;
  }
}
