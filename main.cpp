#include <windows.h>
#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student st("�������� ���� ��������", "01.01.2000", "+380991112233", "���", "������", "��� ��. �. ��������", "���", "������", 101);

    Student st2("�������� �����", "02.02.2001", 202); 
    Student st3("��������� ����");                 

    cout << "\n--- ��� �������� 1 ---" << endl;
    st.print();

    cout << "\n--- ��� �������� 2 ---" << endl;
    st2.print();

    cout << "\n--- ��� �������� 3 ---" << endl;
    st3.print();

    cout << "\nʳ������ ��������� ��������: " << Student::getCount() << endl;


}