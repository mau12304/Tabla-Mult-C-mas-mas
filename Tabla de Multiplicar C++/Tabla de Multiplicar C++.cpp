#include <iostream>

using namespace std;

int main() {
    int NUM, I, RESUL;
    int linea;

    cout << "DIGITE NUMERO: ";
    cin >> linea;
    NUM = linea;

    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I = I + 1;
    }


    system("pause");
    return 0;
}