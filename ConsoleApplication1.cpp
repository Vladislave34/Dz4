#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;
struct Animal {
    char name1[100];
    char clas[100];
    char name2[100];
};
void init(Animal& animal) {
    cout << "�����, ����, ������" << endl;
    cin >> animal.name1 >> animal.clas >> animal.name2;

}
void Print(Animal animal)
{
    cout << "����� " << animal.name1 << endl;

    cout << "���� " << animal.clas << endl;
    cout << "������ " << animal.name2 << endl;



}
void golos(int choose) {
    switch (choose) {
    case 1:
        cout << "��� ���";
        break;
    case 2:
        cout << "��� ���";
        break;
    case 3:
        cout << "�� �� ��";
        break;
    default:
        cout << "������� �������";
        break;
    }
}
int main()
{
    Animal animal;
    init(animal);
    Print(animal);
    int a;
    cout << "������� �������((1) - ������, (2)-��, (3)-������)";
    cin >> a;
    golos(a);
    return 0;
}