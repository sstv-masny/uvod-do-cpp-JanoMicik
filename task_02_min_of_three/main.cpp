
#include <iostream>
using namespace std;
int main() {
    long long a, b, c;

    cout << "Zadaj tri cisla";
    cin >> a >> b >> c;

    long long min = a;

    if (b < min) {
        min= b;
    } 

    if (c < min) {
        min = c;
    }

    cout << "Najmensie cislo je: " << min;
    
    return 0;
    }
