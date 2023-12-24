#include <iostream>
#include <conio.h>
#include <iomanip>
#include "C:\Users\Пользователь\Desktop\прога\ЛАБЫ\lab1 nika.cpp"
#include "C:\Users\Пользователь\Desktop\прога\ЛАБЫ\lab2 nika.cpp"
#include "C:\Users\Пользователь\Desktop\прога\ЛАБЫ\lab3 nika.cpp"
#include "C:\Users\Пользователь\Desktop\прога\ЛАБЫ\lab4 nika.cpp"

using namespace std;

int main(int pic) {
    cout << "Main Window (Lab 5)\nCin Desired lab (1-4) or 'X' for exit:\n";
    int menupick = 0;
    while (true) {
        menupick = _getch();
        switch (menupick) {
        case('1'):
            main1();
            break;
        case('2'):
            main2();
            break;
        case('3'):
            main3();
            break;
        case('4'):
            main4();
            break;
        case('x'):
        case('X'):
            exit(0);
        }

        cout << "Main Window (Lab 5)\nCin Desired lab (1-4) or 'X' for exit:\n";
        menupick = 0;
    }
    return 0;
}
