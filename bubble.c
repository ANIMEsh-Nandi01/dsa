//bubble sort implemetion


#include<stdio.h>

void print(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++) {  // Outer loop iterates over the entire array
        for(j = 0; j < n-i-1; j++) {  // Inner loop compares adjacent elements
            if(a[j] > a[j+1]) {  // If current element is greater than the next
                // Swap the elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[5] = {10, 25, 32, 13, 20};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("Before sorting:\n");
    print(a, n);

    bubble(a, n);

    printf("After sorting:\n");
    print(a, n);

    return 0;
}
