#include<stdio.h>
#include<stdbool.h>
void main(void){

    int num_01 = 10;
    int num_02 = 5;
    char op = '+';    
	/*
	switch(op){
		case '+':
			printf("The sum is this: %d",(num_01+num_02));
			break;
		case '-':
			printf("The sum is this: %d",(num_01-num_02));
			break;
		default:
			printf("Invalid Operator");
			break;
	}
	*/
	/*
	switch(num_01<num_02){
		case true:
			printf("Yes");
			break;
		case false:
			printf("No");
			break;
	}
	*/
	
	//for(initialization;condition;increament/decrement)
	//{
		//statement
	//}
	
	// Write a program to make a list of next 10 odd number
	// according to the given number

/*	
	int i;
	int input;
	scanf("%d",&input);
	// 44
	//44 % 2 == 0;
	//input = input + 1;
	
	if(input % 2 == 0){ //even
		input = input + 1;	
		//Both are same i = i + 2; // i+=2;
		for(i=input;i<=(input+20);i+=2){
			printf("%d\n",i);
		}
	}
	else{ // Odd
		for(i=input;i<=(input+20);i+=2){
			printf("%d\n",i);
		}
	}
	*/
	
	
	// intialization
	// while(condition){
		//statement
		// increament/decrement
	//}
/*	
	int i = 10;
	while(i<20){
		printf("%d\n",i);
		i++;
	}
	
	int j = 10;
	do{
		printf("Main tu Chaloo Ga\n");		
		j++;
	}while(j<9);
*/
/*	
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	
	//nested loops
	int i,j;
	for(i=0;i<5;i++){ //outer loop
		for(j=0;j<5;j++){ //inner loop
			printf("%d",j);
		}
		printf("\n");
	}
	char ch_arr[6][10] = {
		"math",
		"pyh",
		"chem",
		"eng",
		"comp",
		"isl"
	};
	
	printf("%s",ch_arr + 4);
	
	int class,course;
	for(class=8;class<=10;class++){
		for(course=0;course<6;course++)
		{
			printf("class: %d, course: %s\n",class,ch_arr + course);
		}		
	}
	*/
	int i,j;
	for(i=0;i<5;i++){ //
		for(j=0;j<=i;j++){ //inner loop
			printf("*");
		}
		printf("\n");
	}
}