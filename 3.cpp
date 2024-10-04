#include <iostream>
using namespace std;
double total(double price, int quantity, double discountPercent) { //вычисление общей суммы заказа
    double discount = discountPercent / 100.0;
    double discountedPrice = price * (1 - discount);
    return discountedPrice * quantity;
}
double totaldiscounted(double price, double discountPercent) { //вычисление скидкb для одной приставки
    double discount = discountPercent / 100.0;
    return price * (1 - discount);
}
int main() {
    setlocale(LC_ALL, "Russian");
    double price;
    int quantity;
    double discountPercent;
    int choice;
    cout << "Введите стоимость одной игровой приставки: ";
    cin >> price; //цена 1 приставки
    cout << "Введите количество игровых приставок: ";
    cin >> quantity; //количество приставок
    cout << "Введите процент скидки: ";
    cin >> discountPercent; //скидка в процентах
    cout << "Выберите действие: \n1. Посчитать общую сумму заказа\n2. Посчитать стоимость одной приставки с учетом скидки\n";
    //выбор действия пользователем
    cin >> choice;
    if (choice == 1) {
        double totalCost = total(price, quantity, discountPercent);
        cout << "Общая сумма заказа с учетом скидки: " << totalCost << " руб.";
    }
    else if (choice == 2) {
        double discountedPricePerUnit = totaldiscounted(price, discountPercent);
        cout << "Стоимость одной приставки с учетом скидки: " << discountedPricePerUnit << " руб.";
    }
    else {
        cout << "Неверный выбор. Пожалуйста, повторите снова.";
    }
    return 0;
}

