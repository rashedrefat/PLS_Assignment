#include <iostream>
#include <vector>

using namespace std;

void printArray(int size) {
    vector<int> arr(size);  

    for (int i = 0; i < size; ++i) {
        arr[i] = (i + 1) * 2;
    }

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    printArray(5);
    printArray(8);

    return 0;
}
