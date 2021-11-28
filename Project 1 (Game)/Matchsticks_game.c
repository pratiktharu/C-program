/* C program for a matchsticks game being played between the computer and a user. your program should ensure that the computer always wins */

#include<stdio.h>

int main(){
    int match_sticks = 21, user_choice, computer_choice;
    while(match_sticks>=1)
    {
        printf("Total match sticks: %d\n", match_sticks);
        printf("pick up the match sticks between (1 to 4):");
        scanf("%d", &user_choice);

        if(user_choice>4)
        {
            printf("Invalid Entry");
            break;
        }

        /* for computer choice we are taking maximum value by which we can get the max possible value of sticks which is 5 */
        computer_choice = 5 - user_choice;
        //with the help of this code we will take only 4 rounds to decide the match.
        printf("computer picks up the %d match sticks.\n", computer_choice);
        match_sticks = match_sticks-user_choice-computer_choice;
        if(match_sticks==1)
        {
            printf("\n You have been lost via computer.");
            break;
        }
    }
    return 0;
}