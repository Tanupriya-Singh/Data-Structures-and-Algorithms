#include<iostream>
using namespace std;
int main() {
  int a,b,c,x,y,z;
  cin>>x>>y>>z;
  cin>>a>>b>>c;
  int flag = 0;
  if(a < x)
    flag = 1;
  if(a+b < y)
    flag = 1;
  if((a+b+c)-(x+y) < z)
    flag = 1;

  if(flag == 1)
    cout<<"NO";
  else
    cout<<"YES";

  return 0;
}
