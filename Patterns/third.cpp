/*

n = 5

1        1
12      21
123    321
1234  4321
1234554321
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <=i ; k++){
            cout<<k;
        }
        for(int k = 1; k <= (n-i)*2; k++)
            cout<<" ";
            
        for(int k = i; k >=1 ; k--){
            cout<<k;
        }
        cout<<endl;
    }
}
