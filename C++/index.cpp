#include "iostream"
using namespace std;

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

int main() {
    
    //Fibonacci number
    Fibonacci();

    int a = 10;
    int b = 20;
    //Swap two numbers
    SwapTwoNumbers(a,b);
    
    //Odd or even number
    cout << "Enter a number"<<endl;
    cin >> a;
    OddOrEvenNumber(a);
    
    return 0;
}

