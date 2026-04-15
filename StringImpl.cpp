#include "StringImpl.h"
#include <iostream>

// class String
// {
// private:
//     char* data;
//     size_t length;
// public:
//     String(const char* str = "");// Constructor
//     String(const String& other); // Copy constructor
//     String& operator=(const String& other);// Assignment operator 
//     ~String();// Destructor
//     size_t size() const;
//     const char* c_str() const;
//     void append(const String& other);
//     int compare(const String& other) const;
// };

// Constructor
String::String(const char* str) {
    
    length = strlen(str);
    data = new char[length + 1];
    strcpy(data, str);  
}

// Copy Constructor (default one is shallow copy )
String::String(const String& other) {
    length = other.length;
    data = new char[length + 1];
    strcpy(data, other.data);
}

// Assignment Operator 
String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;

        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }
    return *this;
}

// Destructor
String::~String() {
    delete[] data;
}

// size 
size_t String::size() const {
    return length;
}
//string 
const char* String::c_str() const {
    return data;
}

// Append 
void String::append(const String& other) {
    size_t newLength = length + other.length;

    char* newData = new char[newLength + 1];

    strcpy(newData, data);
    strcat(newData, other.data);

    delete[] data;

    data = newData;
    length = newLength;
}

// Compare
int String::compare(const String& other) const {
    return strcmp(data, other.data);
}


