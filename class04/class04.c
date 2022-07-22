#include<stdio.h>
void main(void){
/* 	int age; //Decleration
	age = 25; //Assingment
	int sibiling = 4; // Decleration + Assignment = Iniialization
	float height = 5.3;
	char char_01 = 'a';
	float pi = 3654564654.1465894636975636874;
	double pi2 = 3654564654.1465894636975636874;
	long amount = 36987515;
	
	printf("Hello from PIAIC");
	printf("\n%d",age);
	printf("\n%.2f",height);
	printf("\n%c",char_01);
	printf("\n%.20f",pi);
	printf("\n%.20lf",pi2);
	printf("\n%lu",amount); */
	
	
/* 	int var01 = 10;
	int var02 = 20;
	int result01 = var01 + var02;
	int result02 = var01 - var02;
	int result03 = var01 * var02;
	int result04 = var01 / var02;
	int result05 = var01 % var02;
	
	printf("\t|======================================|\n\t");
	printf("|The Sum of %d and %d is %d            |\n\t", var01,var02,result01);
	printf("|The Subtraction of %d and %d is %d   |\n\t", var01,var02,result02);
	printf("|The Multiplication of %d and %d is %d|\n\t", var01,var02,result03);
	printf("|The Division of %d and %d is %d        |\n\t", var01,var02,result04);
	printf("|The Modulus of %d and %d is %d        |\n\t", var01,var02,result05);
	printf("|======================================|\n\t"); */
	
	// Lower Bound 0 && Length - 1 = 4
	// int arrAge[] = {25,27,29,28,36}; 
	// float arrHeight[] = {5.2,4.3,6.4,4.7,6.9}; 
	// printf("%d %d %d %d %d\n",arrAge[0],arrAge[1],arrAge[2],arrAge[3],arrAge[4]);
	
	// char name01[20] = "Fahim Uz Zaman";
	// char fahim[5] = {'F','A','H','I','M'};
	// printf("%s\n",name01);
	// puts(fahim);

    /* char name[30];
    printf("Please provide your name? \n");
    scanf("%s",name);
    printf("Your name is this: %s",name); */
	
	char name[30];
    printf("Please provide your name? \n");
    fgets(name, sizeof(name), stdin);
    puts(name);
	
}
