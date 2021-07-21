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
        cout << "Дерево № " << this->number << ": " << this->name << endl <<
            "Возраст: " << this->age << endl <<
            "Плодородие: " << this->plod << "% от нормы(100%)" << endl << endl;
    }
    void Decision() {
        if (age <= 150 && plod >= 85) 
            cout << "Дерево № " << number << " (" << name <<")"<< " не нужно пересаживать!!" << endl<<endl;
        else
            cout << "Дерево № " << number << " (" << name << ")" << " нужно пересаживать!!" << endl<<endl;
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
    Iablonya A("Яблоня", 120, 90, 1);
    A.show();
    A.Decision();
    cout << "=============================================\n";
    Vishnya B("Вишня", 50, 130, 2);
    B.show();
    B.Decision();
    cout << "=============================================\n";
    Grusha C("Груша", 140, 47, 3);
    C.show();
    C.Decision();

    system("pause");
    return 0;
 }