#include <string>
#include<map>
using namespace std;

/* Function returns the string corresponding to the code on the keypad
e.g., 23 should return all the combinations of string corresponding to 2 -> abc and 3-> def
*/


int fun(int num, string output[], map<int, string> mymap){
    //Hashmap is working correctly
    if(num == 0){
        output[0] = "";
        return 1;
    }

    int smallOutput = fun(num/10, output, mymap);

    //Work with this element
    int rem = num % 10;


    //Get the string
    string ans = mymap[rem];
    int s = ans.size();
    string temp[50000] = {"\0"};


    int k = 0;
    //Run a loop
        for(int i = 0; i < smallOutput; i++){
            for(int j = 0; j < s; j++){
            temp[k] = output[i] + ans[j];
            k = k+1;
        }
    }
    //Copy to the original output
    for(int i = 0; i < s*smallOutput; i++){
        output[i] = temp[i];
    }

    return s*smallOutput;

}
int keypad(int num, string output[]){
    /*Acts as a key-value pair
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

    return fun(num, output, mymap);
}
