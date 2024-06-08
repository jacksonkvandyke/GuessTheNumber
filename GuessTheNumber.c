#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    //Get random value
    srand(time(NULL));
    int randomValue = rand() % 100;

    //Prompt user
    printf("%s", "Hello, welcome to my little game, please enter a random number between 0 and 100 to get started! :) ");
    printf("%s", "\n Enter a value: ");
    
    //Get user value
    int userValue;
    scanf("%d", &userValue);
    
    //Check if it is equal to the random value
    while (userValue != randomValue){
        if (userValue < randomValue){
            if (randomValue - userValue > 10)
                printf("%s", "\n That was not the right value, try a larger value: ");
            else{
                printf("%s", "\n That was close, just a bit larger: ");

            }
            
            scanf("%d", &userValue);

        }

        if (userValue > randomValue){
            if (userValue - randomValue > 10){
                printf("%s", "\n That was not the right value, try a smaller value: ");

            }else {
                printf("%s", "\n That was close, just a bit smaller: ");

            }
            scanf("%d", &userValue);

        }

    }

    //Congratulate the user for finding the correct value
    printf("%s%d%s", "\n Great job, you found the correct value of ", userValue, ", thanks for playing!");
    _getch();
    
    return 0;

}