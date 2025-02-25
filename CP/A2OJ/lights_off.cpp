#include <iostream>

using namespace std;

int main() {
    int grid[3][3];
    int result[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1}; // Initially, all lights are on

    // Input the grid values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    // Toggle logic based on the given problem constraints
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int toggles = grid[i][j];
            if (i > 0) toggles += grid[i - 1][j]; // Top
            if (i < 2) toggles += grid[i + 1][j]; // Bottom
            if (j > 0) toggles += grid[i][j - 1]; // Left
            if (j < 2) toggles += grid[i][j + 1]; // Right
            
            result[i][j] = (toggles % 2 == 0) ? 1 : 0;
        }
    }

    // Output the result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}
