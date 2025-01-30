#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double a, b, c;

    cout << "Ciao!" << endl;
    cout << "scrivi 2 numeri" << endl;
    cout << "se il primo è più grande del secondo li invertirò" << endl;
    cin >> a;
    cin >> b;
    if (a > b) {
        c = a;
        a = b;
        b = c;
        cout << a << endl;
        cout << b << endl;
        cout << "ok ho invertito i numeri" << endl;
    } else {
        cout << a << endl;
        cout << b << endl;
        cout << "ok non ho modificato nulla" << endl;
    }
    cout << "vuoi andare avanti?" << endl;
    string avanti1;

    cin >> avanti1;
    if (avanti1 == "si") {
        double d, e, somma, media;

        cout << "bene!" << endl;
        cout << "scrivi di nuovo 2 numeri" << endl;
        cin >> d;
        cin >> e;
        cout << "vuoi sapere la somma?" << endl;
        string avanti2;

        cin >> avanti2;
        if (avanti2 == "si") {
            somma = d + e;
            cout << "fantastico!" << endl;
            cout << "eccoti la somma:" << endl;
            cout << somma << endl;
            cout << "vuoi anche la media?" << endl;
            string avanti4;

            cin >> avanti4;
            if (avanti4 == "si") {
                cout << "grandioso!" << endl;
                cout << "eccoti la media dei 2 numeri:" << endl;
                media = somma / 2;
                cout << media << endl;
                cout << "vuoi finire?" << endl;
                string fine;

                cin >> fine;
                if (fine == "si") {
                    cout << "perfetto!" << endl;
                    cout << "FINE!" << endl;
                } else {
                    cout << "e allora sti cazzi" << endl;
                }
            } else {
                cout << "FAI SCHIFO COGLIONE" << endl;
            }
        } else {
            cout << "FAI SCHIFO COGLIONE" << endl;
            cout << "vuoi sapere la media?" << endl;
            string avanti3;

            cin >> avanti3;
            if (avanti3 == "si") {
                cout << "eccoti la media dei 2 numeri:" << endl;
                somma = d + e;
                media = somma / 2;
                cout << media << endl;
                cout << "vuoi finire?" << endl;
                string fine;

                cin >> fine;
                if (fine == "si") {
                    cout << "perfetto!" << endl;
                    cout << "FINE! (anche se non hai fatto la somma)" << endl;
                } else {
                    cout << "e allora sti cazzi" << endl;
                }
            } else {
                cout << "BASTA MI HAI ROTTO IL CAZZO" << endl;
            }
        }
    } else {
        cout << "FAI SCHIFO COGLIONE" << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
