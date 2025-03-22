#include <iostream>
#include <cmath>

using namespace std;

float P(float a, float b, float c) {
    return a + b + c; //периметр
}

float A(float a, float b, float c) {
    float s = P(a, b, c) / 2; //полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool Y(float a, float b, float c) {
    return (a == b || b == c || a == c);
}

bool N(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    setlocale(LC_ALL, "RUS");
    float side1, side2, side3;

    cout << "Введите длины сторон треугольника: ";
    cin >> side1 >> side2 >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Стороны должны быть положительными!" << endl;
    }
    else if (!N(side1, side2, side3)) {
        cout << "Стороны не могут образовать треугольник!" << endl;
    }
    else {
        float perimeter = P(side1, side2, side3);
        float area = A(side1, side2, side3);

        cout << "Периметр треугольника: " << perimeter << endl;
        cout << "Площадь треугольника: " << area << endl;

        if (Y(side1, side2, side3)) {
            cout << "Треугольник является равнобедренным." << endl;
        }
        else {
            cout << "Треугольник не является равнобедренным." << endl;
        }
    }

    return 0;
}
