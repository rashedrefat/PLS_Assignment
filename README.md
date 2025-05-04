# PLS_Assignment
Created for Programming Language Structure Course

# Fixed Stack Allocation

🟦 C++:
```cpp
int myArr[5];
```
* Fixed size at **compile time**
* Allocated on the **stack**
* Size cannot change

🟨 Python:
```python
myArray = [0] * 5
```
* No true fixed-size arrays
* Simulates fixed size with list
* Allocated on the **heap**

# Stack Dynamic Allocation

🟦 C++:
```cpp
void myFunc(int size) {
    int myArr[size];
}
```
* Size set at **runtime**
* Allocated on the **stack**
* Supports variable-length arrays

🟨 Python:
```python
def myFunc(size):
    myArr = [0] * size
```
* Size set at **runtime**
* Allocated on the **heap**
* Always dynamic

# Fixed Heap Allocation

🟦 C++:
```cpp
int* arr = new int[5];
delete[] arr;
```
* Fixed size
* Allocated on the **heap**
* Manual memory management

🟨 Python:
```python
myArr = [i * 2 for i in range(10)]
```
* Fixed number of elements
* Automatic memory handling
* Allocated on the **heap**

# Heap Dynamic Allocation

🟦 C++:
```cpp
#include <vector>
std::vector<int> myArr;
myArr.push_back(5);
myArr.push_back(10);
```
* Dynamic size
* Allocated on the **heap**
* Automatic memory management

🟨 Python:
```python
myArr = []
myArr.append(5)
myArr.append(10)
```
* Fully dynamic
* Allocated on the **heap**
* Grows and shrinks
