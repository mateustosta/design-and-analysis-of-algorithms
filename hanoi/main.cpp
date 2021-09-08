#include <iostream>

using namespace std;

void hanoi(int n, char i, char f, char t) {
    if (n == 1) {
        cout << i << " -> " << f << endl;
    } else {
        hanoi(n-1, i, t, f);
        cout << i << " -> " << f << endl;
        hanoi(n-1, t, f, i);
    }
}

int main() {
    // number of disks, initial, final, temp
    hanoi(3,'A','C','B');

    return 0;
}