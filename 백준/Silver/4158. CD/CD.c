#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int an[1000000];

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0;
}

int main() {
    int n, m, i, cd, cnt;

    while (1) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;

        for (i = 0; i < n; i++) {
            scanf("%d", &an[i]);
        }

        cnt = 0;
        for (i = 0; i < m; i++) {
            scanf("%d", &cd);
            if (binary_search(an, n, cd)) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
