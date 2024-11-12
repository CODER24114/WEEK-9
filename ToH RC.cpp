#include <iostream>
using namespace std;

void solveHanoiRecursive(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    solveHanoiRecursive(n - 1, source, auxiliary, target);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    solveHanoiRecursive(n - 1, auxiliary, target, source);
}

int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Recursive solution:\n";
    solveHanoiRecursive(n, 'A', 'C', 'B');
    return 0;
}

