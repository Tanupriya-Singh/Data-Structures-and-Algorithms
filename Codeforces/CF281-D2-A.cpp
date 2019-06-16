#include<iostream>
#include<string.h>
using namespace std;
int main() {
  /* code */
  string a;
  cin>>a;
  char c = a[0];
  a[0] = toupper(c);
  cout<<a;
  return 0;
}
