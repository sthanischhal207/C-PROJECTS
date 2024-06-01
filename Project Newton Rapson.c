#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int i,j,hp,variable[100],k;
float a,b,da,db,ig;

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
    printf("\nEnter the initail guess: ");
    scanf("%f",&ig);
}

void mathmatical_operation()
{
    for(k=1;k<=20;k++){
    //for f(x)
    j=0;
    b=0;
    for(i=hp;i>=0;i--)
    {
        a= variable[j]* pow(ig,i);
        b=a+b;
        j++;
    }

    //for df(x)
    j=0;
    db=0;
    for(i=hp;i>=0;i--)
    {
        da= i*variable[j]* pow(ig,i-1);
        db=da+db;
        j++;
    }
if (db != 0) {
    ig=ig-(b/db);

    printf("x%d = %.15f\n", k, ig);
    }
    else{
        printf("Error");
    }
    }
}

int main()
{
    initial_data_storing();
    mathmatical_operation();
    return 0;
}