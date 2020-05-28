#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num(char x,int len){
	if(len <0)
		return 0;
	switch(x){
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
			case '3':
			return 3;
			break;
				case '4':
			return 4;
			break;
				case '5':
			return 5;
			break;
				case '6':
			return 6;
			break;
				case '7':
			return 7;
			break;
				case '8':
			return 8;
			break;
				case '9':
			return 9;
			break;
	}
}

int main(){
	
	
	int result[100];
	int i=0;
	char num1[] = "123456789123456789";
	char num2[] = "1234567811111111111111111111";
	int carry = 0;
	int l1= strlen(num1)-1;
	int l2 = strlen(num2)-1;
	int result1;
	
	
	while(1){
		if(l1 < 0  && l2 <0 && carry == 0)
			break;
		result1 = num(num1[l1],l1) + num(num2[l2],l2);
		l1--;
		l2--;
		if(carry>0){
			result1 +=carry;
			carry = 0;
		}
		carry = result1 / 10;
		result[i] = (result1 % 10);
		i++;
	}
	
	i--;
	printf("\n");
	
	while(i>=0){
			printf("%d",result[i]);
			i--;
	}
	
}
