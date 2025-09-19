#include <iostream>

using namespace std;

int main() {

    int length;

    // Taking Input
    cout << "Enter the length of the string: ";
    cin >> length;

    // Dynamic Allocation
    char *str = new char[length];

    cout << "Enter the string: ";
    cin.ignore();
    cin.read(str, length);

    //Reversing
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    //Displaying
    for (int i = 0; i < length; i++) {
        cout << str[i];
    }
    cout << endl;

    //Freeing Memory
    delete[] str;

    return 0;
}
