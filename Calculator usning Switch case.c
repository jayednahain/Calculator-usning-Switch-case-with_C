# include <stdio.h>
int main() {
    char operator;
    double number_one,number_two;
    printf("addition +\n");
    printf("substruction -\n");
    printf("multiplication *\n");
    printf("Divishion /\n");

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("enter number one: \n");
    scanf("%lf",&number_one);

    printf("enter number two: \n");
    scanf("%lf",&number_two);


    switch(operator)
    {
        case '+':
            printf("addition of two number: %.1lf + %.1lf = %.1lf",number_one, number_two, number_one + number_two);
            break;
        case '-':
            printf("substruction of two number: %.1lf - %.1lf = %.1lf",number_one, number_two, number_one - number_two);
            break;
        case '*':
            printf("multiplication of two number: %.1lf * %.1lf = %.1lf",number_one, number_two, number_one * number_two);
            break;
        case '/':
            printf("divishion of two number: %.1lf / %.1lf = %.1lf",number_one, number_two, number_one / number_two);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

