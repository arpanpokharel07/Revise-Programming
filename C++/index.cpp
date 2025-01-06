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

int main() {
    
    //Fibonacci number
    Fibonacci();

    int a = 10;
    int b = 20;
    //Swap two numbers
    SwapTwoNumbers(a,b);
    return 0;
}

