//whether the given number is perfect number
#include <stdio.h>
 int main(){
    int number, rem, sum = 0, i;
    printf("Enter a Number: ");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++){
        rem = number % i;
	if (rem == 0){
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("%d is perfect number", number);
    else
        printf("%d is not a perfect number", number);
}
