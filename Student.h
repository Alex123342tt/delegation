#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
    char name[51];
    char birthDate[20];
    char phone[20];
    char city[30];
    char country[30];
    char university[50];
    char uniCity[30];
    char uniCountry[30];
    int group;

    static int count;

public:

    Student(const char* n, const char* bd, const char* ph, const char* c, const char* cntry,
        const char* uni, const char* uCity,
        const char* uCntry, int gr);


    Student(const char* n, const char* bd, int gr);
    Student(const char* n);

    ~Student();

    void print();
    const char* getName();
    int getGroup();

    static int getCount(); 
};