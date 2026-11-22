#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    const int MAX_SCHOOL = 100000;
    vector<int> schools(N);

    for (int i = 0; i < N; ++i) {
        cin >> schools[i];
    }

    vector<int> count(MAX_SCHOOL + 1, 0);
    int maxCount = 0;

    for (int i = 0; i < N; ++i) {
        int school = schools[i];
        ++count[school];
        if (count[school] > maxCount) {
            maxCount = count[school];
        }
    }

    if (maxCount <= (N + 1) / 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}