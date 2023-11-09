#include<stdio.h>
#include<math.h>
int main(){
	int number1, number2, number3;
	printf("nhap so number 1: \n");
	scanf("%d",&number1);
	printf("nhap so nummber 2: \n");
	scanf("%d",&number2);
	printf("nhap so number 3: \n");
	scanf("%d",&number3);
	int max = number1;
	int min = number1;
	max = max<number2 ? number2 : max;
	max = max<number3 ? number3 : max;
	min = min>number2 ? min : number2;
	min = min>number3 ? min : number3;
	printf("max la: %d, min la; %d", max,min);	
}
