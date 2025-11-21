#include<stdio.h>
int factorial(int x){
			if(x==0 || x==1) return 1;
		  return n*factorial(n-1);
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
int result=factorial(num);
printf("Factorial of %d = %d",num,result);
return 0;
}
