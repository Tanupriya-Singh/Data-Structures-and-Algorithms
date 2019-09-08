/*
for n = 4

   1
  23
 345
4567
*/

#include <iostream>
using namespace std;

int main() {
    
    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 0; k < n-i;k++)
            cout<<" ";
        int num = i;
        for(int k = 0; k < i; k++){// Run how many times
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
    
