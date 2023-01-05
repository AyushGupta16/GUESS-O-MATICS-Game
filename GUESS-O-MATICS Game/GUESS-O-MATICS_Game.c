#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses = 1;
    char try;
    srand(time(0));
    number = rand()%100 +1; //Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep looping until the number is guessed
    
    do
    {
        printf("\nInstructions:\n1.Computer(OS) has generated a random number.\n2.Guess the number in between given range and press Enter.\n");
        printf("\nGuess The Number between 1 & 100\n");
        do
        {
            scanf("%d", &guess);
            if (guess>number)
            {
                printf("Lower number please!\n");
            }
            
            else if (guess<number)
            {
                printf("Higher number please!\n");
            }
            else
            {
                printf("\nCONGRATS!!!\nYou Guessed It In %d Attempts\n", nguesses);
            }       
            nguesses++;
        } while (guess!=number);
        
        printf("\nTRY AGAIN (Y/N)\t");
        scanf("%s",&try);
        if(try == 78)
            {
                printf("\nThank you!! Come again Later :)\n");
                break;
            }
    } while (try == 89);

    system("pause"); // this syntax causes the prompt to pause.
    /* system("pause") is a Windows-specific command, which tells the OS to run the pause program.
    This program waits to be terminated, and halts the exceution of the parent C++ program. 
    Only after the pause program is terminated, will the original program continue.*/
    return 1;
}