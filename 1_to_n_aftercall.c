#include<stdio.h>
void increasing(int n){
			if(n==0) return;		//base case
			increasing(n-1);	//call
			printf("%d\n",n);	//code
			return;
/*আগে কোড তারপর recursive call আর 
পরই রিটার্ন করতে হবে সবসময় এমন কোনো কথা 
নেই। 
Dry করতে সবসময় ছোট সংখ্যা নিবে (4)।*/
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
increasing(num);

return 0;
}
