#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  int count = 0;
  int length = s.length();
  for (int i = 0; i < length; i++) {
      int c = s[i];
      if (isupper(c))
        count++;
    }

    if(count > (length/2)){
          transform(s.begin(),s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s<<"\n";
  return 0;
}
