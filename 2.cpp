#include <iostream>
#include <cmath>
const double PI = 3.14; //добавляем число пи
using namespace std;
//вычисление площади
double area(double diameter) {  
    double radius = diameter / 2.0;
    return PI * pow(radius, 2);
}
 //вычисление перимитра
double perimeter(double diameter) {
    return PI * diameter;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double diameter;
    int choice; 
    cout << "Введите диаметр окружности: ";
    cin >> diameter;
    cout << "Выберите действие: \n1. Посчитать площадь\n2. Посчитать периметр\n";
    //выбор действия пользователем
    cin >> choice;
    if (choice == 1) {
        double area1 = area(diameter);
        cout << "Площадь окружности: " << area1;
    }
    else if (choice == 2) {
        double perimeter1 = perimeter(diameter);
        cout << "Периметр окружности: " << perimeter1;
    }
    else {
        cout << "Повторите снова";
    }
    return 0;
}


