#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    cout << "Enter first number: ";
    cin >> numbers[0];

    cout << "Enter second number: ";
    cin >> numbers[1];

    cout << "Enter third number: ";
    cin >> numbers[2];

    cout << "Enter fourth number: ";
    cin >> numbers[3];

    cout << "Enter fifth number: ";
    cin >> numbers[4];

    cout << "\nArray elements are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}