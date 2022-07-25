#include<stdio.h>
#include<math.h>
void main(void){
	
	//printf("");
	//Format Specifiers %d,%f,%c,%lf,%s
	//escape Sequences \n,\t
    printf("%s","Hello World \n");
	puts("Hello World 02");
	
	// int num_01;
	// int num_02;
	// int result;
	// int squre_result;
	
	// printf("%s","Enter Number:01 \n");
	// scanf("%d",&num_01);
	// printf("%s","Enter Number:02 \n");
	// scanf("%d",&num_02);	
	
	// result = num_01+num_02;
	
	/* printf("The sum of %d and %d is this: %d",
	 num_01,num_02,result);
	
	 squre_result = result*result;
	 printf("\nThe Suqare of the value %d is this: %d",result,squre_result);
	
    
	// -b+/b2-4ac/2a
	
		
	int num_01; //a
	int num_02; //b
	int num_03; //c
	int result_01;
	int result_02;
	int squre_result;
	
	
	printf("%s","Enter Number:01 \n");
	scanf("%d",&num_01);
	printf("%s","Enter Number:02 \n");
	scanf("%d",&num_02);	
	printf("%s","Enter Number:03 \n");
	scanf("%d",&num_03);	
	
	result_01 = (-1*num_02 + sqrt((num_02*num_02) - (4*num_01*num_03)))/(2*num_01);
	
	result_02 = (-1*num_02 - sqrt((pow(num_02,2)) - (4*num_01*num_03)))/(2*num_01);
	printf("The roots are %d and %d",result_01, result_02);
	
	printf("The Square: %d", (int)pow(num_01,2));
	printf("The Square: %f", pow(num_01,2));
	
	
	
	//getch(); */
	
	/*
	const float PI = 3.14659;
	PI = 3.14748;
	printf("%f",PI);
	*/
	
	
	/*
	int num_01;
	int num_02;
	int result;
	char op;
	
	printf("%s","Enter Number:01 \n");
	scanf("%d",&num_01);
	printf("%s","Enter Number:02 \n");
	scanf("%d",&num_02);	
	printf("%s","Enter Operator \n");
	
	op = getche();
	
	if(op == '+'){
	result = num_01+num_02;
	printf("\nThe sum of %d and %d is this: %d",
	 num_01,num_02,result);
	}
	else{
		printf("%s","Invalid Operator\n");
	}
	
	*/
	
	
	/*
	int num_01;
	int num_02;
	int result;
	char op;
	
	printf("%s","Enter Number:01 \n");
	scanf("%d",&num_01);
	printf("%s","Enter Number:02 \n");
	scanf("%d",&num_02);		
	printf("%s","Enter Operator \n");
	op = getche();
	
	if(op == '+'){
	result = (num_01 + num_02);
	printf("\nThe sum of %d and %d is this: %d",
	 num_01,num_02,result);
	}
	else if(op == '-'){
	result = (num_01-num_02);
	printf("\nThe sub of %d and %d is this: %d",
	 num_01,num_02,result);
	}
	else if(op == '*'){
	result = num_01*num_02;
	printf("\nThe multiplication of %d and %d is this: %d",
	 num_01,num_02,result);
	}
	else if(op == '/'){
	result = num_01/num_02;
	printf("\nThe division of %d and %d is this: %d",
	 num_01,num_02,result);
	}
	else{
		printf("%s","Invalid Operator\n");
	}
	*/
	
	//Uninary Operators
	int a = 30;
	int b = 20;
	printf("%d\n",a++);   //10 = 10
	printf("%d\n",--a);	//12,11,10,9 = 10
	printf("%d\n",++a); 	//10,11, = 11
	printf("%d\n",a++);	//10,11 = 11
	printf("%d\n",a++);	//10,11,12,13 = 12
	printf("%d\n",++a);	//11,14,13 = 14 
	printf("%d\n",--a);	//13,9,14,10,12, = 13
	printf("%d\n",a);		//10,13,16 = 13
	
	//a++ Phley print phir add/sub
	//++a phley add/sub phir print
	
	//Binary Operators
	//Relational Operators
	printf("%d\n",a<b);	//1
	printf("%d\n",a>b);	//0
	printf("%d\n",a==b);	//0
	printf("%d\n",a<=b);	//1
	printf("%d\n",a>=b);	//0
	printf("%d\n",a!=b);	//1
	
	//Logical Operator
	printf("%d\n",a<b && a!=b);	//1
	printf("%d\n",a>b && a!=b);	//0
	printf("%d\n",!(a==b) && a!=b);	//1
	printf("%d\n",a<=b && a!=b);	//1
    printf("%d\n",a>=b || a!=b);	//1
	printf("%d\n",a!=b && a!=b);	//1
	
	//Ternary Operator
	(a<b)?printf("A is less than B"):printf("B is less than A");
}