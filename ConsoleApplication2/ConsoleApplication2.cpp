

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int num,res;
    cout << "Введите число: ";
    cin >> num;
    if (num < 0) {
        res = num - 10;
        cout << "Resulte " << res;
    }
    else {
        res = num + 10;
        cout <<"Resulte "<< res;
    }

}

