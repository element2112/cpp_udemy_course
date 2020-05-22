#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

//**************************** C STYLE STRINGS *************************/
/* cctype
 * isalpha() - true if letter
 * isalnum() - true if letter or digit
 * isdigit() - true if digit
 * islower() - true if lowercase
 * isprint() - true if printable char
 * ispunct() - true if punctuation char
 * isupper() - true if uppercase
 * isspace() - true if whitespace
 * tolower()
 * toupper()
 */
 
 /** cstring
  * copying - strcpy(dest, string)
  * concat - strcat (str, string) // strstring
  * comparision - strcmp(str1, str2)
  * length - strlent(str)
  * etc
  */
 
 /** cstdlib
  * 
  * string conversions to int, float, long, etc
  */
  
// ******************* CPP STRINGS *********************************/

// cpp strings are dynamic in size
int main()
{
    string s1; // empty
    string s2 {"Frank"}; // Frank
    string s3 {s2}; // Frank at a different address
    string s4 {"Frank", 3}; // Fra
    string s5 {s3, 0, 2}; // Fr
    string s6 {3, 'X'}; // XXX
    
    string s7 = "CPP ROCKS!"; // this is allowed
    string s8 = s7; // a copy of s7
    
    string sentence;
    string part1 {"C++"};
    string part2 {"is a powerful"};
    
    sentence = part1 + " " + part2 + " language"; // C++ is a powerful language

//    sentence = "C++" + " is powerful"; // Illegal cannot concat two c style literals. Can only mix cpp and c style

    string s9 {"Frank"};
    
    cout << s9[0] << endl; // F
    cout << s9.at(0) << endl; // F
    
    s9[0] = 'f'; // frank
    s9.at(0) = 'p'; // prank
    
    // ranged based for-loop
    
    for (char c : s9)
        cout << c << endl;    
        
    for (int c : s9)
        cout << c << endl;
        
    // substrings
    string test {"This is a test"};
    
    cout << test.substr(0,4) << endl;
    cout << test.substr(5,2) << endl;
    cout << test.substr(10,4) << endl;
    
    cout << test.find("This") << endl; // 0
    cout << test.find("is") << endl; // 2 (because the first "is" is in "this"
    cout << test.find("test") << endl; // 10
    cout << test.find('e') << endl; // 5
    cout << test.find("is", 4) << endl; // 5
    cout << test.find("XX") << endl; // not there so returns string::npos
    
    // remove chars
    cout << test.erase(0,5) << endl; // is a test
    cout << test.erase(5,4) << endl; // is a
    test.clear(); // empty string
    
    string test2 {"Frank"};
    
    cout << test2.length() << endl;
    
    // other concat
    
    test2 += " James";
    cout << test2 << endl;
    
    // ************** IO WITH STRINGS ************************/
    
    // get line
    string test3;
    getline(cin, test3);
    cout << test3 << endl;
    
    // get line until 'x'
    string test4;
    getline(cin, test4, 'x');
    cout << test4 << endl;
    
}