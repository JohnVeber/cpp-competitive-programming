#include <iostream>
using namespace std;

int count_ways_rec(int coins[3], int idx, int S) {
    if (S == 0) {
        return 1;
    }
    if (S < 0 || idx == 3) {
        return 0;
    }
    int take = count_ways_rec(coins, idx, S - coins[idx]);
    int skip = count_ways_rec(coins, idx + 1, S);
    return take + skip;
}

int count_ways(int a, int b, int c, int S) {
    int coins[3] = {a, b, c};
    return count_ways_rec(coins, 0, S);
}

int main() {
    int a, b, c, S;
    cin >> a >> b >> c >> S;
    cout << count_ways(a, b, c, S) << "\n";
    return 0;
}