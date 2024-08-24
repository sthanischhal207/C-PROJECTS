#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void store_data();
void results(int C);
void update(int i,int C);

char equation[100],symbols[100];
float num[100];
int main()
{
    int i=0;
    char ch;
    printf("NOTE: DONT FORGET TO ENTER = SIGN AT THE END OF EXPRESSION\n");
    printf("Enter the expression: ");
    while((ch=getchar()))
    {
        if(ch == '=')
        {
            break;
        }
        equation[i]=ch;
        i++;
    }
    equation[i]='=';
    store_data();
    return 0;
}

void store_data()
{
    int i,n=0,temp=1,N=0,C=0;
    for(i=0;i<strlen(equation);i++)
    {
        if(isdigit(equation[i]))
        {
           n = n*temp + (equation[i] - '0');
           temp*=10;
        }
        else if(ispunct(equation[i]))
        {
            num[N]= n;
            N++;
            n=0;
            temp=1;
            symbols[C] = equation[i];
            C++;
        }
    }
    results(C);
}

float result;

void results(int C)
{
    int i,N;
    for(i=0;i<C;i++)
    {
        if(symbols[i] == '/')
        {
            if(num[i+1]==0)
            {
                printf("----zero division error----");
                exit(1);
            }
            result = num[i]/num[i+1];
            update(i,C);
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '*')
        {
            result = num[i]*num[i+1];
            update(i,C);
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '+')
        {
            result = num[i]+num[i+1];
            update(i,C);
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '-')
        {
            result = num[i]-num[i+1];
            update(i,C);
        }
    }
}

void update(int i,int C)
{
    int j,k;
    num[i]=result;
    for(j=i+1;j<C;j++)
    {
        num[j]=num[j+1];
    }
    for(j=i;j<=C;j++)
    {
        symbols[j]=symbols[j+1];
    }
    for(k=0;k<C-1;k++)
    {
        printf("%g ",num[k]);
        if(symbols[k]!='=')
        {
            printf("%c ",symbols[k]);
        }
    }
    printf("\n");
    results(C-1);
    
}
