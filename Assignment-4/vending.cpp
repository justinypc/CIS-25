#include "vending.h"

// Global
double chipPrice = 2.50;
double sodaPrice = 1.75;

int chipStock = 0;
int sodaStock = 0;

// vend

void vend() {

    int choice;
    int quantity;
    char manager;

    cout << "\n1. Chips ($" << chipPrice << ") Stock: " << chipStock << "\n";
    cout << "2. Soda  ($" << sodaPrice << ") Stock: " << sodaStock << "\n";

    cout << "Choose item: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Facilities manager? (Y/N): ";
    cin >> manager;

    if (choice == 1) {

        if (quantity <= chipStock) {

            if (manager == 'Y' || manager == 'y') {
                cout << "Total: $0.00\n";
            } else {
                cout << "Total: $" << chipPrice * quantity << "\n";
            }

            chipStock -= quantity;

        } else {
            cout << "Not enough stock.\n";
        }

    } else if (choice == 2) {

        if (quantity <= sodaStock) {

            if (manager == 'Y' || manager == 'y') {
                cout << "Total: $0.00\n";
            } else {
                cout << "Total: $" << sodaPrice * quantity << "\n";
            }

            sodaStock -= quantity;

        } else {
            cout << "Not enough stock.\n";
        }

    } else {
        cout << "Invalid item.\n";
    }
}

// restock(stock)

void restock() {

    int choice;
    int amount;

    cout << "\nRestock which item?\n";
    cout << "1. Chips\n";
    cout << "2. Soda\n";

    cin >> choice;

    cout << "Enter amount to add: ";
    cin >> amount;

    if (choice == 1) {
        chipStock += amount;
        cout << "Chips restocked.\n";
    } else if (choice == 2) {
        sodaStock += amount;
        cout << "Soda restocked.\n";
    } else {
        cout << "Invalid selection.\n";
    }
}

// inflation (changes not permanent)

void admin() {

    int choice;
    double newPrice;

    cout << "\nAdmin Menu\n";
    cout << "1. Change Chip Price\n";
    cout << "2. Change Soda Price\n";

    cin >> choice;

    cout << "Enter new price: ";
    cin >> newPrice;

    if (choice == 1) {
        chipPrice = newPrice;
        cout << "Chip price updated.\n";
    } else if (choice == 2) {
        sodaPrice = newPrice;
        cout << "Soda price updated.\n";
    } else {
        cout << "Invalid selection.\n";
    }
}

// fact reset

void selfDestruct() {
    cout << "\nSelf destruct sequence initiated.\n";
    cout << "All prices set to $0.\n";

    chipPrice = 0;
    sodaPrice = 0;
}
