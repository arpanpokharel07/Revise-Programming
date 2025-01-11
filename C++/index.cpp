#include "iostream"
using namespace std;
#include "string.h"

//Function for fibonacci numbers
void Fibonacci(void){
    int a = 0;
    int b = 1;
    int c = a+b;

    cout<<a<<endl;
    cout<<b<<endl;

    for(int i = 0; i <7; i++){
        cout<<c<<endl;
        a = b;
        b = c;
        c = a+b;
    }
}
//Function for swapping two numbers
void SwapTwoNumbers(int i, int j)
{
    printf("Value of a and b: Before swap");
    printf("Value of A: %d and value of B: %d\n",i,j);

    int c = i;
    i = j;
    j = c;
    
    printf("Value of a and b: After swap");
    printf("Value of A: %d and value of B: %d\n",i,j);

}

//Function to check if user given number is odd or even
void OddOrEvenNumber(int i)
{
    if(i % 2 == 0){
        printf("%d is an even number\n",i);
    }
    else{
        printf("%d is an odd number\n",i);
    }
}

//Function to check if user given number is prime number or not
void PrimeNumber(int i){

    int divisor[] = {2,3,5,7};

    for(int j = 0; j < 4; j++){
        if(i % divisor[j] == 0){
            printf("%d is a not prime number", i);
            return;
        }
    }
    printf("%d is a prime number", i);
    
}

void SomeQuestions(int a){
    //Function reduces repeated codes.

//Fibonacci number
    Fibonacci();
    //Swap two numbers
    SwapTwoNumbers(10, 20);
    //Odd or even number
    cout << "Enter a number"<<endl;
    cin >> a;
    OddOrEvenNumber(a);
    //Prime number or not
    PrimeNumber(a);
}
int main() {
    
/*----------------Common variable declarations----------------*/    
    int a = 0; //Integer
    float f = 1.213; //Float
    double d = 1.2131415; //Double
    bool b = true; //Boolean  
    long l= 123456789; //Long
    string s = "apple"; //String
    char c = 'a'; //Character

/*----------------Arthematic operators----------------*/    
    int total = 100+200;
    int subtract = 200-100;
    int multiply = 100*200;
    int divison = 200/100;
    int modulus = 200%100;
/*----------------Conditional statement----------------*/    
    //If statement
    if(total == 300) 
    {
        total = 400;
    }
    else if(total == 400)
    {
        total = 500;
    }
    else {
        total = 300;
    }

    //Switch statement
    switch(a){
        case 0:{
            a = 1;
            break; //Must use break, otherwise it will continue. In this case, it will go to case 1.
        }case 1:{
            a = 2;
            break;
        }case 2:{
            a = 3;
            break;
        } default:{
            a = 4;
            break;
        }
    }

/*----------------Loops----------------*/    
    //For loop
    for(int i=0; i<5; i++)
    {
        cout<<i<<endl; //Prints 0 - 4
    }
    
    //While loop
    int i=0;
    while(i<5)
    {
        cout<<i<<endl; //Prints 0 - 4
        i++;
    }

    //Do while loops
    //It runs once
    do{
        cout<<i<<endl; //Print 0 and ends the loop
    }while(i>5);

/*----------------Function----------------*/    
    SomeQuestions(a); 



    return 0;
}

