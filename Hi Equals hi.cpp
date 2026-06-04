#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
using namespace std;

bool custom_case_insensitive_equal(const string& s1, const string& s2) {
    int i = 0;
    if (s1.length() != s2.length()) {
        return false;
    }
    
    return equal(s1.begin(), s1.end(), s2.begin(), s2.end(),
        [](unsigned char charA, unsigned char charB) {
            return tolower(charA) == tolower(charB);
        });
}

    int main(){
     string string_1 = "Hello World";
     string  string_2 = "hello world";
         

     string_1.erase(remove_if(string_1.begin(), string_1.end(), ::isspace), string_1.end());
     string_2.erase(remove_if(string_2.begin(), string_2.end(), ::isspace), string_2.end());

     size_t maxChars;

     cout << "Select the amount of characters to check.";
     cin >> maxChars;

     if (string_1.length() > maxChars) {
         string_1.resize (maxChars);
     }
     if (string_2.length() > maxChars) {
         string_2.resize(maxChars);
     }

    if (custom_case_insensitive_equal (string_1,string_2)) {
        cout << "The two strings are equal." << endl;
    }
    else {
        cout << "The two strings are not equal." << endl;
       
    }



    if (string_1.length() == string_2.length()) {
        cout << "The comparison of string one and string 2 is equal to zero." << endl;
    }
    else if (string_1.length() <= string_2.length()) {
        cout << "The comparison of string one and string 2 is less than zero." << endl;
    }
    else {
        cout << "The comparison of string one and string 2 is more than zero." << endl;
    };

    return 0;
  };
