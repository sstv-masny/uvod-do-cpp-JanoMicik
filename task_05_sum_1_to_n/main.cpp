
#include <iostream>
using namespace std;
int main() {
    long long n, i = 1, sum = 0;

    cout << "Zadaj cislo ";
    cin >> n;

    for (i; i <= n; i++) // Prva moznost
        sum = sum + i;
    
    /*while (i <= n) {  // Druha moznost
        sum = sum + i;
        i++;
    }*/

    cout << "Sucet cisel 1 - n je: " << sum;
    
    return 0;
}
