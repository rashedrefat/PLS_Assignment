#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto arr = make_unique<int[]>(5);

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
