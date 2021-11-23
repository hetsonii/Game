#include <conio.h>
#include <stdio.h>

void main()
{
    printf("Hello there! Welcome and I believe you are here to play a Game!\n\n");
    sleep(2);
    printf("Let me introduce myself, I am a very Intelligent Script made by Het Soni.\n\n");
    sleep(2);
    printf("So the Rules are Simple.\nWe will play a game with 20 Numbers and we will pick a number from 1,3 or 4 taking turns.\n");
    sleep(2);
    printf("Whoever has no numbers to pick from will lose the Game.");
    sleep(4);
    printf("So let's Start\n\nYou go first Good Luck!\n\n");


    int a=20, b;

    START:

    sleep(2);
    printf("\nPick Your Number : ");
    scanf("%d", &b);
    a = a-b;

    if(b==1 && (b==1 || b==3 || b==4))
    {
        printf("\nGood! I choose 3");
        a = a-3;
        printf("\nThe remaining Number is %d", a);
    }

    if(b==3 && (b==1 || b==3 || b==4))
    {
        printf("Off to a Great Start I see..");
        sleep(2);
        printf("\nI'll choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(b==4 && (b==1 || b==3 || b==4))
    {
        printf("That is a wise choice.");
        sleep(2);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

     if(b!=1 && b!=3 && b!=4) {goto INVALID;}

    sleep(2);
    printf("\n\nEnter Your Number : ");
    scanf("%d", &b);
    a = a-b;

    if(a==11 && (b==1 || b==3 || b==4))
    {
        printf("This Game is Fun isn't it?\n I wonder who made this..");
        sleep(2);
        printf("\nI choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==12 && (b==1 || b==3 || b==4))
    {
        printf("You're Playing pretty good! Keep Going");
        sleep(2);
        printf("\nI choose 3");
        a = a-3;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==13 && (b==1 || b==3 || b==4))
    {
        printf("Hmm.. Let me think. I have a good feeling about this.");
        sleep(3);
        printf("\nOkay, I choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==14 && (b==1 || b==3 || b==4))
    {
        printf("I think you will be tough to beat.");
        sleep(2);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==15 && (b==1 || b==3 || b==4))
    {
        printf("Going Slow is a Great strategy for many Games.");
        sleep(2);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(b!=1 && b!=3 && b!=4) {goto INVALID;}

    sleep(2);
    printf("\n\nEnter Your Number : ");
    scanf("%d", &b);
    a = a-b;


    if(a==3 && (b==1 || b==3 || b==4))
    {
        printf("That was a bad choice! What were You Thinking?");
        sleep(1);
        printf("\nI choose 3");
        printf("\n\nYou lost! I'm too Good I Guess.");
        goto END;
    }

    if(a==4 && (b==1 || b==3 || b==4))
    {
        printf("That was a really bad choice!");
        sleep(1);
        printf("\nI choose 4");
        printf("\n\nYou lost! Maybe Try Again?");
        goto END;
    }

    if(a==5 && (b==1 || b==3 || b==4))
    {
        printf("You do see where this Game is going, don't You?");
        sleep(2);
        printf("\nI choose 3");
        a = a-3;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==6 && (b==1 || b==3 || b==4))
    {
        printf("\nOkay, I choose 4. Let's end this next turn, Shall we?");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==8 && (b==1 || b==3 || b==4))
    {
        printf("You are Playing well! Keep Going.");
        sleep(1);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==9 && (b==1 || b==3 || b==4))
    {
        printf("You are giving me a tough time..");
        sleep(2);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==10 && (b==1 || b==3 || b==4))
    {
        printf("You are Playing well! Keep Going.");
        sleep(1);
        printf("\nI choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==11 && (b==1 || b==3 || b==4))
    {
        printf("\nAnd I choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==13 && (b==1 || b==3 || b==4))
    {
        printf("You are playing pretty Good! I'll still beat you.");
        sleep(2);
        printf("\nI choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(b!=1 && b!=3 && b!=4) {goto INVALID;}


    sleep(2);
    printf("\n\nEnter Your Number : ");
    scanf("%d", &b);
    a = a-b;

    if(a==1 && (b==1 || b==3 || b==4))
    {
        printf("It was really fun playing with you! Thanks for playing.");
        sleep(1);
        printf("\nI choose 1");
        printf("\n\nYou lost! Maybe Try Again?");
        goto END;
    }

    if(a==3 && (b==1 || b==3 || b==4))
    {
        printf("That was a bad choice! What were You Thinking?");
        sleep(1);
        printf("\nAnd I choose 3");
        printf("\n\nYou lost! I'm too Good I Guess.");
        goto END;
    }

    if(a==4 && (b==1 || b==3 || b==4))
    {
        printf("That was a bad choice! What were You Thinking?");
        sleep(1);
        printf("\nI choose 4");
        printf("\n\nYou lost! Maybe Try Again?");

        goto END;
    }

    if(a==5 && (b==1 || b==3 || b==4))
    {
        printf("You do see where this Game is going, don't You?");
        sleep(2);
        printf("\nI choose 3");
        a = a-3;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==6 && (b==1 || b==3 || b==4))
    {
        printf("You do see where this Game is going, don't You?");
        sleep(2);
        printf("\nI choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==7 && (b==1 || b==3 || b==4))
    {
        printf("\nOkay, I choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==8 && (b==1 || b==3 || b==4))
    {
        printf("\nVery well then, I choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(b!=1 && b!=3 && b!=4) {goto INVALID;}

    sleep(2);
    printf("\n\nEnter Your Number : ");
    scanf("%d", &b);
    a = a-b;

    if(a==1 && (b==1 || b==3 || b==4))
    {
        printf("It was really fun playing with you! Thanks for playing.");
        sleep(1);
        printf("\nI choose 1");
        printf("\n\nYou lost! Maybe Try Again?");
        goto END;
    }

    if(a==2 && (b==1 || b==3 || b==4))
    {
        printf("\nUh OH.. I don't feel so good about this..");
        sleep(2);
        printf(" Anyways, I choose 1");
        a = a-1;
        printf("\nThe remaining Number is %d", a);
    }

    if(a==3 && (b==1 || b==3 || b==4))
    {
        printf("That was a bad choice! What were You Thinking?");
        sleep(1);
        printf("\nI choose 3");
        printf("\n\nYou lost! I'm too Good I Guess.");
        goto END;
    }

    if(a==4 && (b==1 || b==3 || b==4))
    {
        printf("That was a bad choice! What were You Thinking?");
        sleep(1);
        printf("\nI choose 4");
        printf("\n\nYou lost! Maybe Try Again?");

        goto END;
    }

    if(a==6 && (b==1 || b==3 || b==4))
    {
        printf("\nOkay, so I choose 4");
        a = a-4;
        printf("\nThe remaining Number is %d", a);
    }

    if(b!=1 && b!=3 && b!=4) {goto INVALID;}


    sleep(2);
    printf("\n\nEnter Your Number : ");
    scanf("%d", &b);
    a = a-b;

    if(a==0 && (b==1 || b==3 || b==4))
    {
        printf("\nWow! Congratulations! You actually managed to pull this victory of!\n");
        sleep(1);
        printf("You must be pretty intelligent to defeat me!\nHere you go this is your Reward.\n\n");
        sleep(0.5);
        printf("Open this link and Claim Your REWARD - https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    }

    if(a==1 && (b==1 || b==3 || b==4))
    {
        printf("It was really fun playing with you! Thanks for playing.");
        sleep(1);
        printf("\nI choose 1");
        printf("\n\nYou lost! Maybe Try Again?");
        goto END;
    }


    INVALID:

    if(b!=1 && b!=3 && b!=4)
    {
        printf("\nPlease Enter Valid Choice.");
        goto START;
    }

    END:
    getch();
}
