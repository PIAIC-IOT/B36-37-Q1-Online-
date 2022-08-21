// #include<stdio.h>
// #include<math.h>

// void printMyName(void); //function prototype
// void addTwoNumbers(int x, int y); //function prototype
// int square(int x);
// int cube(int x);
// void printData(char value[], int);

// void addTwoNumbers(int x, int y){ //funtion only with input paramters 
//     printf("The Sum is: %d",(x+y));
// }

// int square(int x){ //funtion only with input and outpur paramters 
//     return x*x;
// }

// int cube(int x){ //funtion only with input and outpur paramters 
//     return x*x*x;
// }

// void printData(char value[],int data){
//     printf("\n%s %d\n",value,data);
// }

// //Function Declaration/Definition
// void printMyName(void){
//     printf("My Name is Fahim Uz Zaman");    
// }

// //1 (return type of function)void,int,float 
// //2 (function name) main 
// //3 input parameters (void,int,char,float....)
// //4 Function Declaration 
// //5 Calling

// int main(void){
//     int value = 10;
//     printMyName();// Function Calling
//     addTwoNumbers(3,9);
//     printf("The square of the %d , is: %d",value,square(value));
//     printData("Square Result",square(value));
//     printDataWithInt("Cube Result",cube(value));
// }



#include<stdio.h>
#include<math.h>

float percentage_calculation(int arrNum[],int length);


void main(void){
    int user_input = 0;
    printf("Please tell the number of course: ");
    scanf("%d",&user_input);
    int values[user_input];
    int i;
    for(i=0;i<user_input;i++){
        printf("Enter the number of course: %d \t",(i+1));
        scanf("%d",&values[i]);
    }
    // printf("The percentage is: %f",percentage_calculation(values));     
    // calculate size in bytes
    int arraySize = sizeof(values);
    int intSize = sizeof(values[0]);
    // length
    int length = arraySize / intSize;
    printf("\nThe percentage of the values are this: %f",percentage_calculation(values,length));
}

float percentage_calculation(int arrNum[],int length){
    int i;
    // printf("Length %d",length); 
    printf("%d",length);  
    float marks = 0.0;
    float percentage = 0.0;
    float total_marks;    
    for(i=0;i<length;i++){
        marks += arrNum[i]; 
        total_marks += 100.0;   
    }
    printf("\n Marks: %f",marks);
    printf("\n Total Marks: %f",total_marks);
    percentage = (marks/total_marks) * 100;
    printf("\n Percentage: %f",percentage);
    return percentage;
}