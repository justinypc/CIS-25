#include "vending.h"

int main() {

    int menuChoice;

    while (true) {

    cout << "ADVANCED VENDING MACHINE (ran by Anthropic)\n";
    cout << "1. Vend\n";
    cout << "2. Stock\n";
    cout << "3. Admin\n";
    cout << "4. Self Destruct\n";
    cout << "5. Exit\n";

    cout << "Select option (1-5): ";
    cin >> menuChoice;

    switch(menuChoice) {

        case 1:
            vend();
            break;

        case 2:
            restock();
            break;

        case 3:
            admin();
            break;

        case 4:
            selfDestruct();
            break;

        case 5:
            cout << "System Shutdown.\n";
            return 0;

        default:
            cout << "Invalid selection.\n";
    }
}
}
