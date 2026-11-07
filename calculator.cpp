#include <iostream>
using namespace std;

int age;  // Global variable

int main() {
    cout << "enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "pilla bacha" << endl;
    }
    else {
        cout << "uncle garu" << endl;
    }

    return 0;
}