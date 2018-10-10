#include <stdio.h>


int max(int a, int b) {
    return a >= b ? a : b;
}

void sort(int start, int end, int array[]) {
    if (start >= end) {
        return;
    }
    int i = start, j = end;
    int cur = i - (i - j) / 2;

    while (i < j) {
        while (i < cur && (array[i] <= array[cur])) {
            i++;
        }
        while (j > cur && (array[cur] <= array[j])) {
            j--;
        }
        if (i < j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            if (i == cur) {
                cur = j;
            } else if (j == cur) {
                cur = i;
            }
        }
    }
    sort(start, cur, array);
    sort(cur + 1, end, array);
}

int main() {
    FILE *file = fopen("sort.in", "r");
    int n;
    fscanf(file, "%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &array[i]);
    }
    sort(0, n - 1, array);

    fclose(file);

    file = fopen("sort.out", "w");
    for (int i = 0; i < n - 1; i++) {
        fprintf(file, "%d ", array[i]);
    }
    fprintf("%d", array[n - 1]);
    fclose(file);

    return 0;
}