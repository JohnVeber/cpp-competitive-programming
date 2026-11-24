#include <iostream>

using namespace std;

int hanoi(int n) {
    if (n == 1) {
        return 1;
    }
    return 2 * hanoi(n - 1) + 1;
}

int main() {
    int N;
    cin >> N;
    cout << hanoi(N) << "\n";
    return 0;
}