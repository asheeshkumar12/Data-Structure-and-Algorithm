#include<iostream>
#include<string>
using namespace std;
string uniqueChar(string s) {
	// Write your code here
      string str;
    int len = s.length();
 
    // loop to traverse the string and
    // check for repeating chars using
    // IndexOf() method in Java
    for(int i = 0; i < len; i++)
    {
         
        // character at i'th index of s
        char c = s[i];
 
        // If c is present in str, it returns
        // the index of c, else it returns npos
        auto found = str.find(c);
        if (found == std::string::npos)
        {
             
            // Adding c to str if npos is returned
            str += c;
        }
    }
    return str;
}
int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}