/*
Pattern for N = 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 




N = 5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

*/


#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here
    int num = n;
    int count = 2*n - 1;
    for(int i = 1; i <= 2*n - 1; i++){
        for(int j = n; j > num; j--)
            cout<<j << " ";
        for(int j = 1; j <= count; j++)
            cout<<num<<" ";
        for(int j = num+1; j <= n; j++)
            cout<<j<<" ";
        if(i < n){
            num--;
            count -= 2;
        }
        else{
            num++;
            count += 2;
        }
        cout<<endl;
    }
}
