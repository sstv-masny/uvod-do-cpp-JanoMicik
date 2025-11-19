
#include <iostream>
using namespace std;
int main() {

    long long rok;

    cout << "Zadaj rok";
    cin >> rok;

    if (rok % 4 == 0)
        cout << "Rok je priestupny ";

    else 
        cout
             << "Rok nie je priestupny";    
    
    return 0;
}
