#pragma once
#include <cstring>

class String
{
private:
    char* data;
    size_t length;

public:
    // Constructor
    String(const char* str = "");

    // Copy constructor
    String(const String& other);

    // Assignment operator
    String& operator=(const String& other);

    // Destructor
    ~String();

    size_t size() const;

    const char* c_str() const;

    void append(const String& other);

    int compare(const String& other) const;
};
