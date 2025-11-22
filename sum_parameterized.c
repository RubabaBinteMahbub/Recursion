#include<stdio.h>
int sum(int x, int n) {
    if (x > n) return 0;
 		return x + sum(x + 1, n);
    //1 to n.
}
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Sum = %d\n",sum(1,num));

    return 0;
}
