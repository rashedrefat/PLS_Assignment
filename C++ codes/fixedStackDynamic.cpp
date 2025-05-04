#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr;

    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = (i + 1) * 10;
    }

    for (int value : arr) {
        cout << value << " ";
    }

    cout << endl;
    return 0;
}
