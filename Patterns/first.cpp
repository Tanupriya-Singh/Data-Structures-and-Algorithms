//Print this pattern

/*
  1
 232
34543
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
        for(int k = i; k > 0; k--){// Run how many times
            cout<<num;
            num++;
        }
        num--;
        for(int k = i; k > 1; k--){//Run how many times
            num--;
            cout<<num;
        }
        cout<<endl;
    }
}
    
