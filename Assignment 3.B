#include <iostream>
using namespace std;

int main() {

    // variable declaration
    float n1, n2, n3;

    // added missing semicolon
    cout << "Enter three numbers: ";

    // input operators fix
    cin >> n1 >> n2 >> n3;

    // nested if to find largest
    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    } else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}
