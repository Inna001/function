/******************************************************************************
Перевод из восьмеричной системы счисления в десятичную
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool Proverca(int num);// Функция для проверки, является ли число восьмеричным
int Perevod(int per);// Функция для перевода восьмеричного числа в десятичное

int main() {
    
    int a;
    do {
        cout << "Введите восьмеричное число A: ";
        cin >> a;

        if (!Proverca(a)) {
            cout << "Вы ввели не восьмеричное число.Попробуйте снова." << endl;
        }
    } while (!Proverca(a));

    int result = Perevod(a);
    cout << "Перевод из восьмеричного числа в десятичное = " << result;

    return 0;
}


bool Proverca(int num)// Определение функции Proverca
{
    int temp = num;
    while (temp > 0) {
        if (temp % 10 >= 8) {
            return false;
        }
        temp /= 10;
    }
    return true;
}


int Perevod (int per) // Определение функции Perevod
{
    int sum = 0, st = 0;
    int t= per;

    while (t > 0) {
        sum += (t % 10) * pow(8, st);
        t /= 10;
        st++;
    }

    return sum;
}
