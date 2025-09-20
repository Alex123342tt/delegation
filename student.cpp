#include "Student.h"
#include <cstring>

int Student::count = 0; 


Student::Student(const char* n, const char* bd, const char* ph,const char* c, const char* cntry,
    const char* uni, const char* uCity,
    const char* uCntry, int gr)
{
    strcpy_s(name, n);
    strcpy_s(birthDate, bd);
    strcpy_s(phone, ph);
    strcpy_s(city, c);
    strcpy_s(country, cntry);
    strcpy_s(university, uni);
    strcpy_s(uniCity, uCity);
    strcpy_s(uniCountry, uCntry);
    group = gr;

    count++;
    cout << "Створено об'єкт студента: " << name << endl;
}


Student::Student(const char* n, const char* bd, int gr)
    : Student(n, bd, "невідомо", "невідомо", "невідомо", "невідомо", "невідомо", "невідомо", gr)
{
}


Student::Student(const char* n)
    : Student(n, "невідомо", "невідомо", "невідомо", "невідомо", "невідомо", "невідомо", "невідомо", 0)
{
}

Student::~Student() {}

void Student::print()
{
    cout << "ПІБ: " << name << endl;
    cout << "Дата народження: " << birthDate << endl;
    cout << "Телефон: " << phone << endl;
    cout << "Місто: " << city << endl;
    cout << "Країна: " << country << endl;
    cout << "Навчальний заклад: " << university << endl;
    cout << "Місто навчального закладу: " << uniCity << endl;
    cout << "Країна навчального закладу: " << uniCountry << endl;
    cout << "Група: " << group << endl;
}

const char* Student::getName() { return name; }

int Student::getGroup() { return group; }

int Student::getCount() { return count; }