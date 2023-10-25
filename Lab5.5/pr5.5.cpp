#include <iostream>

using namespace std;

int ways(int m, int x, int y, int z) {
    if (m == 0) {
        return 1;
    }
    else if (m < 0) {
        return 0;
    }
    else {
        return ways(m - x, x, y, z) + ways(m - y, x, y, z) + ways(m - z, x, y, z);
    }
}

int main() {
    int m, x, y, z;
    cout << "m ="; cin >> m;
    cout << "x ="; cin >> x;
    cout << "y ="; cin >> y;
    cout << "z ="; cin >> z;

    int numWays = ways(m, x, y, z);

    cout << "Number of ways: " << numWays << endl;

    return 0;
}

