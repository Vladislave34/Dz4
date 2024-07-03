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
    cout << "назва, клас, кличка" << endl;
    cin >> animal.name1 >> animal.clas >> animal.name2;

}
void Print(Animal animal)
{
    cout << "назва " << animal.name1 << endl;

    cout << "клас " << animal.clas << endl;
    cout << "кличка " << animal.name2 << endl;



}
void golos(int choose) {
    switch (choose) {
    case 1:
        cout << "√ав гав";
        break;
    case 2:
        cout << "м€у м€у";
        break;
    case 3:
        cout << "му му му";
        break;
    default:
        cout << "Ќев≥дома тварина";
        break;
    }
}
int main()
{
    Animal animal;
    init(animal);
    Print(animal);
    int a;
    cout << "¬ибер≥ть тварину((1) - собака, (2)-к≥т, (3)-корова)";
    cin >> a;
    golos(a);
    return 0;
}