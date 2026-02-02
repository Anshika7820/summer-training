#include <iostream>
using namespace std;

bool searchkey(int arr[], int key, int n) {
    if (n == 0) return false;
    if (arr[0] == key) return true;
    return searchkey(arr + 1, key, n - 1);
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << searchkey(a, 2, 5);
}
