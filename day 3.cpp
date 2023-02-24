#include <iostream>
using namespace std;
int main() {

    double n1, n2;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2;

    if(n1 > n2)
        cout << "Largest number: " << n1;

    else if(n2 > n1)
        cout << "Largest number: " << n2;

    else
        cout << "Numbers are equal";

    return 0;
}
