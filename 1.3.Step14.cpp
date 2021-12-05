#include <iostream>

int main() {
    using namespace std;
    int V, T, S, num;
    const int length = 109;
    cin >> V >> T;
    S = V * T;
    S += (S / length + 1000) * length;
    num = S / length;
    S -= num * length;
    cout << S;
    return 0;
}
