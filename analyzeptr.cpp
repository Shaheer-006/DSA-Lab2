#include <iostream>

using namespace std;

// PART 1

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

// PART 2

int main() {

    // Stack allocation

    int iValue = 56; 
    analyze_pointer(&iValue);  // Passing Address

    cout << endl;

    // Heap allocation
    int *heapvalue = new int;
    *heapvalue = 89;
    analyze_pointer(heapvalue);

    delete heapvalue;

    return 0;

}
