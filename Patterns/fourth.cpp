
n = 7

*
 * *
   * * *
     * * * *
   * * *
 * *
*

#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int num = 0;
    for(int i = 1; i <= n; i++){
        
        if(i > n/2){
             num = n - i;
        }
        else{
            num = i - 1;
        }
        
        for(int j = 1; j <= num; j++)
            cout<<" ";
        for(int j = 1; j <= num + 1; j++)
            cout<<"* ";
        cout<<endl;
    }
    
}


