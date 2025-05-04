#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    arr.reserve(3);

    for (int val : {5, 10, 15}) {
        arr.push_back(val);
    }

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
