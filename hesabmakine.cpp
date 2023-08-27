#include <iostream>
using namespace std;

int main() {
    char islem;
    double sayi1,sayi2;

    cout << "ilk sayiyi girin: ";
    cin >> sayi1;

    cout << "ikinci sayiyi girin: ";
    cin >> sayi2;

    cout << "islemi secin (+, -, *, /): ";
    cin >> islem;

    switch (islem) {
        case '+':
            cout << "Sonuc: " << sayi1+sayi2 << endl;
            break;
        case '-':
            cout << "Sonuc: " << sayi1-sayi2 << endl;
            break;
        case '*':
            cout << "Sonuc: " << sayi1*sayi2 << endl;
            break;
        case '/':
            if (sayi2 != 0) {
                cout << "Sonuc: " << sayi1 / sayi2 << endl;
            } else {
                cout << "Hata: Sýfýra bölemezsiniz." << endl;
            }
            break;
        default:
            cout << "Geçersiz iþlem seçildi." << endl;
            break;
    }

    return 0;
}

