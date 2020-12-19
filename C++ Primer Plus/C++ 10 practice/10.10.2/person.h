//Author: 崔小葵
//Date: 2020-12-19 01:19:06
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-19 01:19:06
#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;      // Person's last name
    char fname[LIMIT]; // Person's first name
public:
    Person() { lname = "", fname[0] = '\0'; }            // #1
    Person(const string &ln, const char *fn = "Heyyou"); // #2
    // the following methos display lname and fname
    void Show() const;       // firstname lastname format
    void FormaiShow() const; // lastname, firstname format
};

#endif