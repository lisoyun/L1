#include <iostream>
#include <cmath>
#include <limits>

using namespace std;


double safeInput() {
    double value;
    while (true) {
        cin >> value;
            return value;
        
    }
}

// Прямоугольник
void rectangle() {
    double a, b;

    // Ввод и проверка стороны a
    do {
        cout << "Введите длину стороны a (больше 0): ";
        a = safeInput();
        if (a <= 0) {
            cout << "Ошибка: длина стороны должна быть больше 0. Пожалуйста, попробуйте снова." << endl;
        }
    } while (a <= 0);

    // Ввод и проверка стороны b
    do {
        cout << "Введите длину стороны b (больше 0): ";
        b = safeInput();
        if (b <= 0) {
            cout << "Ошибка: длина стороны должна быть больше 0. Пожалуйста, попробуйте снова." << endl;
        }
    } while (b <= 0);

    double perimeter = 2 * (a + b);
    double area = a * b;
    double diagonal = sqrt(a * a + b * b);

    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
}
//ssss


int main() {
    int choice;
    
    while (true) {
        cout << "\nВыберите фигуру (1 - Прямоугольник, 0 - Выход): ";
        choice = safeInput();

        switch (choice) {
            case 1:
                rectangle();
                break;
            
            case 0:
                cout << "Выход из программы.\n";
                return 0;
            default:
                cout << "Ошибка! Выберите цифру от 0 до 1." << endl;
        }
    }

    return 0;
}
