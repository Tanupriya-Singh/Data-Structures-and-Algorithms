#include<iostream>
using namespace std;
int main(){
  int i,j,n,sum = 0,count = 0;
  cin>>n;

  for(i = 0; i < n;i++){
    sum = 0;
    for(j = 0; j<3;j++){
      int temp;
      cin>>temp;
      sum += temp;
    }
    if(sum >= 2)
      count++;
  }
  cout<<count;
  return 0;
}
