#include<iostream>
using namespace std;
int main(){
  int a,b,count = 0;
  cin>>a>>b;
  while (a <= b) {
    /* code */
    a *= 3;
    b *= 2;
    count++;
  }
  cout << count;
  return 0;
}
