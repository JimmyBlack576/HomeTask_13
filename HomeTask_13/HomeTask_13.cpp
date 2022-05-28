#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n1, n2, n3, n4, n5, n6, n7, maxn;
    cout << "Введите первое число: \n";
    cin >> n1;
    cout << "Введите второе число: \n";
    cin >> n2;
    cout << "Введите третье число: \n";
    cin >> n3;
    cout << "Введите четвёртое число: \n";
    cin >> n4;
    cout << "Введите пятое число: \n";
    cin >> n5;
    cout << "Введите шестое число: \n";
    cin >> n6;
    cout << "Введите седьмое число: \n";
    cin >> n7;

    if (n1 > n2) 
        maxn = n1;
    else
        maxn = n2;
    if (n3 > maxn)
        maxn = n3;
    if (n4 > maxn)
        maxn = n4;
    if (n5 > maxn)
        maxn = n5;
    if (n6 > maxn)
        maxn = n6;
    if (n7 > maxn)
        maxn = n7;

    cout <<"Большее число: "<< maxn;

}

