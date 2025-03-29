#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, current_year;
    scanf("%d %d %d", &n, &m, &current_year);

    int** grid = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        grid[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int row = 0, col = 0;
    int steps = 0;

    while (grid[row][col] != current_year) {
        steps++;
        if (grid[row][col] % 5 == 0) {
            if (row + 1 < m) {
                row++;
            } else {
                grid[row][col]++;
            }
        } else if (grid[row][col] % 4 == 0) {
            if (row - 1 >= 0) {
                row--;
            } else {
                grid[row][col]++;
            }
        } else if (grid[row][col] % 3 == 0) {
            if (col + 1 < n) {
                col++;
            } else {
                grid[row][col]++;
            }
        } else {
            if (col - 1 >= 0) {
                col--;
            } else {
                grid[row][col]++;
            }
        }
    }

    printf("%d\n", steps);

    for (int i = 0; i < m; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}