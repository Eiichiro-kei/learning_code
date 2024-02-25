#include <stdio.h>

int main(){

    int numbersToSum[] = {1,2,3,4,5,6};
    int sumValue = 0;

    for (int i = 0; i <= 5; i++)
    {
        sumValue += numbersToSum[i];
    }
    
    printf("The sum value of the array is :  %d\n" , sumValue);

    return 0;
}