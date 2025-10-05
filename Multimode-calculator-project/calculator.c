//headers
#include <stdio.h>
#include <math.h>

// Function declarations
int add(int num1, int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int remainder_val(int num1, int num2);
int square(int num1);
int cube(int num1);
int fourth_power(int num1);
int fifth_power(int num1);
float percent(float obtained_marks, float total_marks);
double nth_power(double base, int exponent);
long long factorial(int number);
int reverse_number(int number);

void bitwise_And(int num1, int num2);
void bitwise_Or(int num1, int num2);
void bitwise_Xor(int num1, int num2);
void bitwise_Rightshift(int num1, int num2);
void bitwise_Leftshift(int num1, int num2);
void bitwise_Not(int num1);
void decimal_to_binary(int number);

int normal_cal();
int scientific_cal();
int programmers_cal();

int main() {
    int choice;   
    

    printf("Select Calculator Type:\n");
    printf("1: Normal Calculator\n");
    printf("2: Scientific Calculator\n");
    printf("3: Programmers Calculator\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            normal_cal(); 
            break;
        case 2:
            scientific_cal(); 
            break;
        case 3:
            programmers_cal(); 
            break;
        default:
            printf("ERROR!!!! Invalid choice.\n");
            break;
    }

    return 0;
}

// Normal Calculator functions
int normal_cal() {
    int operation;

    printf("\nSelect Operation:\n");
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Remainder\n6: Square\n7: Cube\n8: Fourth Power\n9: Fifth Power\n10: Percentage\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    int num1, num2;
    switch (operation) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Addition: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Subtraction: %d\n", sub(num1, num2));
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Multiplication: %d\n", multiply(num1, num2));
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Division: %d\n", divide(num1, num2));
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Remainder: %d\n", remainder_val(num1, num2));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("Square: %d\n", square(num1));
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("Cube: %d\n", cube(num1));
            break;
        case 8:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("Fourth Power: %d\n", fourth_power(num1));
            break;
        case 9:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("Fifth Power: %d\n", fifth_power(num1));
            break;
        case 10:
            printf("Enter obtained marks and total marks: ");
            float obtained_marks, total_marks;
            scanf("%f %f", &obtained_marks, &total_marks);
            printf("Percentage: %.2f%%\n", percent(obtained_marks, total_marks));
            break;
        default:
            printf("ERROR! Invalid operation.\n");
            break;
    }

    return 0;
}

// Scientific Calculator functions
int scientific_cal() {
    int operation;

    printf("\nSelect Operation:\n");
    printf("1: Nth Power\n2: Factorial\n3: Reverse Number\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    int num;
    double base;
    switch (operation) {
        case 1:
            printf("Enter base and exponent: ");
            scanf("%lf %d", &base, &num);
            printf("Nth Power: %.2f\n", nth_power(base, num));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial: %lld\n", factorial(num));
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Reversed Number: %d\n", reverse_number(num));
            break;
        default:
            printf("ERROR! Invalid operation.\n");
            break;
    }

    return 0;
}

// Programmers Calculator functions
int programmers_cal() {
    int operation;

    printf("\nSelect Operation:\n");
    printf("1: Bitwise AND\n2: Bitwise OR\n3: Bitwise XOR\n4: Bitwise Right Shift\n5: Bitwise Left Shift\n6: Bitwise NOT\n7: Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    int num1, num2;
    switch (operation) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("num2 in binary: ");
            decimal_to_binary(num2);
            printf("Bitwise AND: %d\n", num1 & num2);
            printf("Bitwise AND in binary: ");
            decimal_to_binary(num1 & num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("num2 in binary: ");
            decimal_to_binary(num2);
            printf("Bitwise OR: %d\n", num1 | num2);
            printf("Bitwise OR in binary: ");
            decimal_to_binary(num1 | num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("num2 in binary: ");
            decimal_to_binary(num2);
            printf("Bitwise XOR: %d\n", num1 ^ num2);
            printf("Bitwise XOR in binary: ");
            decimal_to_binary(num1 ^ num2);
            break;

        case 4:
            printf("Enter number and shift value: ");
            scanf("%d %d", &num1, &num2);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("num2 in binary: ");
            decimal_to_binary(num2);
            printf("Bitwise Right Shift: %d\n", num1 >> num2);
            printf("Bitwise Right Shift in binary: ");
            decimal_to_binary(num1 >> num2);
            break;

        case 5:
            printf("Enter number and shift value: ");
            scanf("%d %d", &num1, &num2);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("num2 in binary: ");
            decimal_to_binary(num2);
            printf("Bitwise Left Shift: %d\n", num1 << num2);
            printf("Bitwise Left Shift in binary: ");
            decimal_to_binary(num1 << num2);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("num1 in binary: ");
            decimal_to_binary(num1);
            printf("Bitwise NOT: %d\n", ~num1);
            printf("Bitwise NOT in binary: ");
            decimal_to_binary(~num1);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("num1 in binary: ");
            decimal_to_binary(num1);

            break;

        default:
            printf("ERROR! Invalid operation.\n");
            break;
    }

    return 0;
}

// Normal Calculator Operations
int add(int num1, int num2) 
{ 
    return num1 + num2;
}

int sub(int num1, int num2)
 { 
    return num1 - num2;
 }

int multiply(int num1, int num2)
 { 
    return num1 * num2;
 }

int divide(int num1, int num2)
 { 
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed\n");
        return 0;
    }
    return num1 / num2; 
}

int remainder_val(int num1, int num2)
 { 
    if (num2 == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return num1 % num2; 
}

int square(int num1)
 { 
    return num1 * num1; 
}

int cube(int num1) 
{ 
    return num1 * num1 * num1; 
}

int fourth_power(int num1)
 { 
    return num1 * num1 * num1 * num1;
 }

int fifth_power(int num1)
 {
  return num1 * num1 * num1 * num1 * num1;
 }

float percent(float obtained_marks, float total_marks) 
{ 
    return (obtained_marks / total_marks) * 100;
}

// Scientific Calculator Operations

double nth_power(double base, int exponent)
 { 
    return pow(base, exponent); 
}

long long factorial(int number)
 { 
    if (number == 0 || number == 1) return 1; 
    return number * factorial(number - 1); 
}

int reverse_number(int number)
 { 
    int reversed = 0; 
    while (number != 0) { 
        reversed = reversed * 10 + number % 10; 
        number /= 10; 
    } 
    return reversed; 
}

// Programmers Calculator Operations


void bitwise_And(int num1, int num2) 
{ 
    printf("Bitwise AND: %d\n", num1 & num2); 
}

void bitwise_Or(int num1, int num2) 
{ 
    printf("Bitwise OR: %d\n", num1 | num2); 
} 

void bitwise_Xor(int num1, int num2) 
{ 
    printf("Bitwise XOR: %d\n", num1 ^ num2);
}

void bitwise_Rightshift(int num1, int num2)
 { 
    printf("Bitwise Right Shift: %d\n", num1 >> num2);
 }

void bitwise_Leftshift(int num1, int num2) 
{ 
    printf("Bitwise Left Shift: %d\n", num1 << num2); 
}

void bitwise_Not(int num1) 
{ 
    printf("Bitwise NOT: %d\n", ~num1); 
}

void decimal_to_binary(int number)
{ 

    while(number != 0)
    {
        int quotient = number / 2;
        int remainder = number % 2;

        printf("%d\n", remainder);

        number = quotient;
    }
    
}

