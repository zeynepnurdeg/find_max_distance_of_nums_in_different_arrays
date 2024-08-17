#include <stdio.h>
#include <math.h>

#define ROW 3
#define COL 3

int find_max_distance(int arrays[][COL], int arraysSize, int* arraysColSize) {
    int i, j, k, m, distance = 0;

    for (i = 0; i < arraysSize - 1; i++) {
        for (j = 0; j < arraysColSize[i]; j++) {
            for (k = i + 1; k < arraysSize; k++) {
                for (m = 0; m < arraysColSize[k]; m++) {
                    if (abs(arrays[i][j] - arrays[k][m]) > distance) {
                        distance = abs(arrays[i][j] - arrays[k][m]);
                    }
                }
            }
        }
    }
    return (distance);
}

int main(void)
{
    int arrays[ROW][COL] = { {5, 6, 9},{3, 4},{2, 5, 7} };
    int colSize[ROW] = {3, 2, 3};

    int max = find_max_distance(arrays, ROW, colSize);
    printf("%d\n", max);

    return 0;
}