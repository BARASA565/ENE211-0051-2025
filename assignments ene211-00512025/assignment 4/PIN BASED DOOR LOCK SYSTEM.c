#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int correctpin=1234;
    int attempts=3;
    int pin;
    int choice;

   do
   {
    printf("\nPLEASE ENTER YOUR PIN:");
    scanf("%d", &pin);

    if (pin > 9999)
    {
        printf("PIN IS TOO LONG (PIN IS EXACTLY 4 DIGITS)");
    }
    else if (pin < 999)
    {
        printf("PIN IS TOO SHORT (PIN IS EXACTLY 4 DIGITS)");
    }
    else
    {
       printf("PIN IS EXACTLY 4 DIGITS\n");
       if(pin!=correctpin)
       {
           attempts--;
           printf("%d attempts remaining",attempts);
       }
    }
   }

   while(pin!=correctpin&&attempts>0);

   if(pin!=correctpin)
{
    printf("\nToo many attempts.system locked,wait for 5 secs...");
    for(int i=5;i>0;i--)
        printf("\n%d\n",i);
}

else
{
     printf("ACCESS GRANTED");
     printf("\n===DEVICE MENU===\n");
     printf("1.OPEN DOOR\n");
     printf("2.CHANGE USERNAME\n");
     printf("3.CHANGE PIN\n");
     printf("4.EXIT\n");
     printf("CHOOSE YOUR OPTION:");
     scanf("%d",&choice);
    }
    switch(choice)
    {
    case 1:
        printf("DOOR IS ALREADY OPEN.\n");
        break;
    case 2:
        printf("COMING SOON.\n");
        break;
    case 3:
        printf("COMING SOON.\n");
        break;
    case 4:
        printf("EXITING SYSTEM.\n");
        break;
    default:
        printf("INVALID OPTION!PLEASE TRY AGAIN.");
    }

    return 0;
}
