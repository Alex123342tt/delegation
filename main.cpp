#include <windows.h>
#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student st("Іваненко Іван Іванович", "01.01.2000", "+380991112233", "Київ", "Україна", "КНУ ім. Т. Шевченка", "Київ", "Україна", 101);

    Student st2("Петренко Петро", "02.02.2001", 202); 
    Student st3("Сидоренко Сидір");                 

    cout << "\n--- Дані студента 1 ---" << endl;
    st.print();

    cout << "\n--- Дані студента 2 ---" << endl;
    st2.print();

    cout << "\n--- Дані студента 3 ---" << endl;
    st3.print();

    cout << "\nКількість створених студентів: " << Student::getCount() << endl;


}