#include <stdio.h>
#include <math.h>

int hp,i,j,k,variable[100];
float a,b,f,sum,avg;

void initial_data_storing()
{
    printf("Enter the greatest power in the equation: ");
    scanf("%d",&hp);
    j=0;
    for(i=hp;i>-1;i--)
    {
        printf("Cofficient of x^%d: ",i);
        scanf("%d",&variable[j]);
        j++;
    }
    printf("\nEnter the first initail guess: ");
    scanf("%f",&a);

    printf("\nEnter the second initail guess: ");
    scanf("%f",&b);
}

float suma,sumb,fa,fb;
void checking()
{
    j=0;
    suma=0;
    for(i=hp;i>=0;i--)
    {
        fa= variable[j]* pow(a,i);
        suma=fa+suma;
        j++;
    }
    j=0;
    sumb=0;
    for(i=hp;i>=0;i--)
    {
        fb= variable[j]* pow(b,i);
        sumb=fb+sumb;
        j++;
    }
}

void table()
{
    printf("\n%.12f ",a);
    printf("%.12f ",b);
    printf("%.12f ",avg);
    printf("%.12f ",sum);

}

void calculation()
{
    for(k=1;k<=30;k++){
    avg=(a+b)/2;
    //for f(avg)
    j=0;
    sum=0;
    for(i=hp;i>=0;i--)
    {
        f= variable[j]* pow(avg,i);
        sum=f+sum;
        j++;
    }
    table();
    if(sum>0)
    {
        b=avg;
    }
    else if(sum<0)
    {
        a=avg;
    }
    }
}

int main()
{
    initial_data_storing();
    checking();
    printf("\nf(a)= %f",suma);
    printf("\nf(b)= %f",sumb);
    printf("\nf(a)*f(b)= %f",suma*sumb);
    if(suma*sumb<0)
    {
    printf("\na");
    for(i=1;i<=14;i++)
    {
    printf(" ");
    }

     printf("b");
    for(i=1;i<=14;i++)
    {
    printf(" ");
    }

    printf("avg");
    for(i=1;i<=14;i++)
    {
    printf(" ");
    }

     printf("f(avg)");
    for(i=1;i<=10;i++)
    {
    printf(" ");
    }

    calculation();
    printf("\nYour Required toot is : %f",avg);
    }
    else{
        printf("\n\nRoot doesn't lie between %f & %f",a,b);
    }
    return 0;
}