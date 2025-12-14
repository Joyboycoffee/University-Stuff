//pos one side, neg other side, in order
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements (positive and negative):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Stable partition: negatives first, positives later
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            int temp = arr[i];
            int j = i;

            // Shift all elements right until correct position found
            while (j > 0 && arr[j - 1] >= 0) {
                arr[j] = arr[j - 1];
                j--;
            }

            arr[j] = temp;
        }
    }

    printf("\nArray after moving negatives to one side:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
