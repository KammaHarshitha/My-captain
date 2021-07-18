#include <stdio.h>
int main() {
    int number;
    double n1, n2;

    printf("Enter an number: ");
    scanf("%c", &number);
    switch(number)
    {
        case '1':
            printf("Food item - Pasta \n Price - Rs 179");
            break;

        case '2':
            printf("Food item - Burger \n Price - Rs 129");
            break;

        case '3':
            printf("Food item - Pasta \n Price - Rs 179");
            break;

        case '4':
            printf("Food item - French \n Price - Rs 99");
            break;
        case '5':
            printf("Food item - Sandwich \n Price - Rs 149");
            break;
			default:
            printf("Error! operator is not correct");
    }

    return 0;
}
