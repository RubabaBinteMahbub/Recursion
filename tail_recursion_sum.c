#include <stdio.h>

// Helper Function: টেল রিকার্সিভ ফাংশন যা ফল সঞ্চয় করে (acc)
int tail_sum_recursive(int x, int n, int acc) {
    // Base Case: x, n-এর থেকে বড় হলে, সঞ্চিত ফল (acc) রিটার্ন করা হবে
    if (x > n) {
        return acc;
    }
    // Recursive Step: ফল (acc + x) আপডেট করে, পরবর্তী কলটিই শেষ অপারেশন হিসেবে থাকবে।
    return tail_sum_recursive(x + 1, n, acc + x);
}

// Wrapper Function: বাইরে থেকে কল করার জন্য
int sum_recursive(int n) {
    // রিকার্শন শুরু (1 থেকে n, প্রাথমিক ফল 0)
    return tail_sum_recursive(1, n, 0);
}

int main() {
    int num;
    printf("Enter the upper limit (n) for summation: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n--- Recursive Result ---\n");
    printf("Sum (1 to %d) = %d\n", num, sum_recursive(num));

    return 0;
}
