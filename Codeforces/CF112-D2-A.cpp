#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  /*
  Method 1: using transform and #include<algorithm>

  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);



  using method two:
  iterate throughout the string and convert the string to either upper or lower case.
  */
  int length = a.length();
  for (int i = 0; i < length; i++) {
      int c = a[i]; // notice int data type here
      //tolower(int) <----------- accepts the ascii value
      if (isupper(c))
        a[i] = tolower(c);
    }
    for (int i = 0; i < length; i++) {
        int c = b[i];
        if (isupper(c))
          b[i] = tolower(c);
      }
  //compare compares the strings character by character and return the difference.
  auto temp = a.compare(b);
  if(temp > 0)
    cout<<"1";
  else if(temp < 0)
    cout<<"-1";
  else
    cout<<"0";
  return 0;
}
