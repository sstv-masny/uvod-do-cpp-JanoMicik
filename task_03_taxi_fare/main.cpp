
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    
    long long km, suma = 0;

    cout << "Zadaj najazdene kilometre";
    cin >> km;

    if (km <= 2) {
        suma = 4;
        cout << "Cena za taxik je: " << suma << " eura";
    }
    
    else {
        suma = 4.00 + 1,50 * ceil (km - 2);
        cout << "Cena za taxik je: " << suma << " eur";
    }
    return 0;
}
