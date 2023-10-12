/* Develop a console application in which a number will be set by the computer
randomly between 0 to 100 and the user has to guess and input the number. The
user will be given 5 chances to guess the number.
During these 5 chances if the user can guess the correct number, then print
statements like this:
"Congrats!!! You got 83 on the 3rd try...";

If the user fails to guess the correct number during the 5 chances, print like this
"Game Over!!! Better luck next time... ";*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <conio.h>

int ran_num, Guess_num, i = 0;

int main ()
{
    srand (time(NULL));

    ran_num = rand() % 100;

    system("cls");

    do

    {
        printf ("Guess Number  = ");
        scanf ("%d", &Guess_num);

        if (Guess_num == ran_num)
        {
             printf ("\nCongrats!!! You got %d on the %d try...\n", ran_num, i+1);

             break;

        }

        i++;

        }while (i != 5);

        if (Guess_num != ran_num)
        {
             printf ("\nGame Over!!! Better luck next time...\n");

        }

        printf ("\nThe Random Number is : %d\n", ran_num);

        getch();

    return 0;
}
