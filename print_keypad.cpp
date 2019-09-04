#include <iostream>
#include <string>
#include<map>
using namespace std;

/*
Rather than storing the strings in an array
Print all the keypad combinations
*/

void keypad(int num, string output, map<int, string> mymap){

    if(num == 0){
        cout<<output<<endl;
        return;
    }

    string ans = mymap[(num%10)];

    for(int i = 0; i < ans.size(); i++){
        keypad(num/10, ans[i] + output, mymap);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */

    map<int, string>mymap;
    mymap.insert(make_pair(2,"abc"));
    mymap.insert(make_pair(3,"def"));
    mymap.insert(make_pair(4,"ghi"));
    mymap.insert(make_pair(5,"jkl"));
    mymap.insert(make_pair(6,"mno"));
    mymap.insert(make_pair(7,"pqrs"));
    mymap.insert(make_pair(8,"tuv"));
    mymap.insert(make_pair(9,"wxyz"));

    string output = "";
    keypad(num, output, mymap);
}
