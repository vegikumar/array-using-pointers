#include <iostream>
int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int* ptr;
    std::cout << "Enter elements: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }
    std::cout << "You entered: ";
    ptr = arr;
    for (int i = 0; i < SIZE; i++) {
        std::cout << *ptr << " ";
        ptr++;
    }
    std::cout << std::endl;
    return 0;
}
