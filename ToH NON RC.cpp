#include <iostream>
#include <cmath>
using namespace std;

void solveHanoiIterative(int n, char source, char target, char auxiliary) {
    int totalMoves = pow(2, n) - 1; // Total number of moves
    char rods[3] = {source, auxiliary, target};

    for (int i = 1; i <= totalMoves; i++) {
        int from = (i & i - 1) % 3; // Determine source rod
        int to = ((i | i - 1) + 1) % 3; // Determine target rod
        if (n % 2 == 0) {
            swap(to, rods[1]); // Swap if the number of disks is even
        }
        cout << "Move disk " << ((i % 3) + 1) << " from " << rods[from] << " to " << rods[to] << endl;
    }
}

int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Non-recursive solution:\n";
    solveHanoiIterative(n, 'A', 'C', 'B');
    return 0;
}

