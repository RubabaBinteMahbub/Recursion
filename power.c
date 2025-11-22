#include<stdio.h>
int power(int a,int b){
if(b==0) return 1;
return a*power(a,b-1);
}
int main() {
int base,exp;
printf("Enter the base  : ");
scanf("%d", &base);
printf("Enter the exponent  : ");
scanf("%d", &exp);

printf("Result = %d\n",power(base,exp));

return 0;
}
