#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  int row = 0,col = 0;
  int count = 0;
  int temp;
  for(int i = 0;i<5;i++){
    for(int j = 0; j < 5;j++){
      cin>>temp;
      if(temp == 1){
        row = i;
        col = j;
      }
    }
  }
  count = abs(row - 2) + abs(col-2);
  cout<<count;
  return 0;
}
