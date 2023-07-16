#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Value of a and b before swapping was %d and %d\n", a, b);
    wrong_swap(a, b);//This will not work due to call by value
    printf("Value of a and b after swapping is %d and %d\n", a, b);
    swap(&a, &b);//This will work due to call by reference
    printf("Value of a and b after swapping is %d and %d\n", a, b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
