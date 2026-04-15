#include <iostream>
#include "StringImpl.h"
using namespace std;
int main() {

    String s1("Rallapalli");
    String s2("Akash");


    cout<<"first string: "<<s1.c_str()<<endl;
    cout<<"second string: "<<s2.c_str()<<endl;

    cout << "S1 Size: " << s1.size() << endl;
    cout << "S2 Size: " << s2.size() << endl;

    s1.append(s2);
    cout << "After append: " << s1.c_str() <<endl;
    
    int result = s1.compare(s2);
    if (result == 0)
        cout << "Strings are equal"<<endl;
    else if (result < 0)
        cout << "s1 < s2"<<endl;
    else
        cout << "s1 > s2"<<endl;

    // Copy constructor
    String s3 = s1;
    cout << "Copied string: " << s3.c_str() << endl;

    // Assignment
    String s4;
    s4 = s2;
    cout << "Assigned string: " << s4.c_str() << endl;

    return 0;
}