#include <stdio.h>
int input_num1 (){
	int a;
	printf("Enter first number: ");
	scanf("%d", &a);
	return a;
}
int input_num2(){
	int b;
	printf("Enter the second number: ");		
	scanf("%d", &b);
	return b;
}
add_numbers(num1, num2){
	return num1 +num2;
}
int subtract_numbers(num1, num2){
	return num1-num2;
} 
int multiply_numbers(num1, num2){
	return num2*num1;
}
int divid_numbers(num1, num2){
	return num1/num2;
}
int modulo_numbers(num1, num2){
	return num1 % num2;
}
int main(){
	int num1=input_num1();
        int num2=input_num2();
	int sum, subtract, modulo, divid, multiply;
	sum = add_numbers(num1, num2);
	subtract = subtract_numbers(num1, num2);
	multiply = multiply_numbers(num1, num2);
	divid = divid_numbers(num1, num2);
	modulo = modulo_numbers(num1, num2);
	printf("------------------my calculator-----------------------------------------\n");
	printf("-------The numbers you entered are : %d and : %d -----------------------\n", num1, num2);
	printf("-------The sum is:  %d -------------------------------------------------\n",sum);
	printf("-------The difference is: %d -------------------------------------------\n", subtract);
	printf("-------The product is : %d ---------------------------------------------\n", multiply);
	printf("-------The number : %d divided by the number:  %d is : %d---------------\n", num1, num2, divid);
	printf("-------The remainder of : %d divided by : %d is : %d -------------------\n", num1, num2, modulo);
	return 0;
}
