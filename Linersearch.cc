#include <iostream>
using namespace std;

int main() {
    int i;
    int arr[10] = {2, 3, 4, 5, 7, 7};
    int key = 5;
    int flag = 0;
    int size = 10;

    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << "Present";
    } else {
        cout << "Not Present";
    }

    return 0;
}