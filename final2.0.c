#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char string1,char string2[],int l ,char z[])
{
    int ip=0,j=0,k;
    int flag=0;
    ip=0;
    int ki=sizeof(z);
    while(ip<l)
    {
        if(string1==string2[ip]||(string2[ip]+32)==string1||(string1+32)==(string2[ip]))
        {
            j++;
            z[ip]=string2[ip];
            printf("%c ",z[ip]);
        }
        else
        {
            printf("%c ",z[ip]);
        }
        ip++;
        if(strcmp(string2,z)==0)
        {
            printf("\n You Have Won The Game!!!");
            exit(0);
        }
    }

    return j;
}

int main ()
{
    char ans,y[100];
    char real[100];
    int b,o,i,n,m,h,ia,ic=0;
    printf("Enter a Word to guess ");
    printf("\n If it is a sentences use '/' instead of 'spaces'");
    scanf("%s", &real);
    system("cls");
    o=strlen(real);
    int x=o;
    for(i=0;i<o;i++)
     {
        y[i]='__';
        y[i+1] = '\0';
     }
    printf("\n No. of letters :%d\n",o);
    for(h=0;h<o;h++)
    {
        printf(" __ ");
    }
    printf("\n \nIf you think it is an Paragraph try '\' first guess word\n");

    for(i=10;i>0&&o>0;)
    {
        printf("\n\nEnter One letter of Your guess ");
        scanf("%s",&ans);
        b=check(ans,real,x,y);
        if(b==0)
        {
            printf("\n Wrong Guess");
            i--;
            printf("\n No. of tries exist :%d ",i);
        }
        else
        {
            printf("\n\n Correct");
            o--;
        }
        if(i==0)
        {
            printf("\n You have lost the game");
            printf("\n The answer is :");
            puts(real);
        }
    }
    return 0;
}
