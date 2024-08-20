#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>

float store_data();
float result(int C);

char equation[100],symbols[100];
float num[100];
int main()
{
    int i=0;
    char ch;
    printf("Enter the expression: ");
    //scanf("%[^\n]s", equation);
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
    printf(" %f ",store_data());
    return 0;
}

float store_data()
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
    return result(C);
}

float result(int C)
{
    int i,N;
    float result=0;
    for(i=0;i<C;i++)
    {
        if(symbols[i] == '/')
        {
            result = num[i]/num[i+1];
            num[i]=result;
            num[i+1]=result;
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '*')
        {
            result = num[i]*num[i+1];
            num[i]=result;
            num[i+1]=result;
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '+')
        {
            result = num[i]+num[i+1];
            num[i]=result;
            num[i+1]=result;
        }
    }

    for(i=0;i<C;i++)
    {
        if(symbols[i] == '-')
        {
            result = num[i]-num[i+1];
            num[i]=result;
            num[i+1]=result;
        }
    }
    return result;
}