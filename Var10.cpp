#include <string>
#include <iostream>
using namespace std;

class SadovoeDerevo {
    string name;
    int number;
    int age;
    int plod;
public:
    SadovoeDerevo(string name, int age, int plod, int number) {
        this->name = name;
        this->age = age;
        this->plod = plod;
        this->number = number;
    }
    void show() {
        cout << "������ � " << this->number << ": " << this->name << endl <<
            "�������: " << this->age << endl <<
            "����������: " << this->plod << "% �� �����(100%)" << endl << endl;
    }
    void Decision() {
        if (age <= 150 && plod >= 85) 
            cout << "������ � " << number << " (" << name <<")"<< " �� ����� ������������!!" << endl<<endl;
        else
            cout << "������ � " << number << " (" << name << ")" << " ����� ������������!!" << endl<<endl;
    }
};
class Iablonya : public SadovoeDerevo {
public:
    Iablonya(string name, int age, int plod, int number) : SadovoeDerevo(name, age, plod, number){}
};
class Vishnya : public SadovoeDerevo {
public:
    Vishnya(string name, int age, int plod, int number) : SadovoeDerevo(name, age, plod, number) {}
};
class Grusha : public SadovoeDerevo {
public:
    Grusha(string name, int age, int plod, int number) : SadovoeDerevo(name, age, plod, number) {}
};


int main() {
    setlocale(LC_CTYPE,"rus");
    cout << "=============================================\n";
    Iablonya A("������", 120, 90, 1);
    A.show();
    A.Decision();
    cout << "=============================================\n";
    Vishnya B("�����", 50, 130, 2);
    B.show();
    B.Decision();
    cout << "=============================================\n";
    Grusha C("�����", 140, 47, 3);
    C.show();
    C.Decision();

    system("pause");
    return 0;
 }