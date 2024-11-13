#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, s_ele, mid, last, ele = 0;
    int arr[100]; // Fixed size array for the search
    int flag = 0;

    // Input number of elements
    printf("Enter the number of terms N (max 100): ");
    scanf("%d", &n);

    // Check if the number of elements is within bounds
    if (n > 100 || n <= 0) {
        printf("Invalid number of terms. Please enter a value between 1 and 100.\n");
        return 1; // Exit if the input is invalid
    }

    // Input array elements
    printf("\nEnter the sorted array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the search element: ");
    scanf("%d", &s_ele);

    last = n - 1; // Set the last index after `n` is defined

    // Binary search logic
    while (last >= ele) {
        mid = (ele + last) / 2; // Calculate middle index

        if (arr[mid] == s_ele) {
            printf("The search element %d is in position a[%d]\n", s_ele, mid);
            flag = 1; // Mark that the element is found
            break; // Exit the loop
        } else if (arr[mid] > s_ele) {
            last = mid - 1; // Search in the left half
        } else {
            ele = mid + 1; // Search in the right half
        }
    }

    // If element is not found, print a message
    if (flag == 0) {
        printf("The search element %d is not in any position\n", s_ele);
    }

    return 0;
}
