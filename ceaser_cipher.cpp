#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    char c;
    do {
        int size;
        cout << "введите кол-во букв" << endl;
        cin >> size;
        char* text = new char[size];
        cout << "введите слово" << endl;
        for (int i = 0; i < size; i++) {
            cin >> text[i];
        }
        char a;
        cout << endl << "для шифрования нажмите k для расшифровки нажмите  r" << endl;
        cin >> a;
        int x;
        cout << "сдвиг шифра" << endl;
        cin >> x;
        x = x % 26;
        if (a == 'k') {
            for (int i = 0; i < size; i++) {
                if (((text[i] > ('z' - x)) && (text[i] < 123)) || ((text[i] > ('Z' - x)) && (text[i] < 91))) {
                    text[i] -= (26 - x);
                    cout << text[i];
                }
                else {
                    text[i] += x;
                    cout << text[i];
                }
            }
        }
        if (a == 'r') {
            for (int i = 0; i < size; i++) {
                if (((text[i] < ('a' + x)) && (text[i] > 96)) || ((text[i] < ('A' + x)) && (text[i] > 64))) {
                    text[i] += (26 - x);
                    cout << text[i];
                }
                else {
                    text[i] -= x;
                    cout << text[i];
                }
            }
        }
        delete[] text;
        cout << endl << "что бы продолжить введите n для выхода q" << endl;
        cin >> c;
    } while (c != 'q');
    return 0;
}