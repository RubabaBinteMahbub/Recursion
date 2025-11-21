#include<stdio.h>
void greeting(int n){
			if(n==0) return;
			printf("Good Morning\n");
			greeting(n-1);
			return;
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
greeting(num);

return 0;
}
