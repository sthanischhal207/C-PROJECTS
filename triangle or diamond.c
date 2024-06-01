#include<stdio.h>
int main()
{
	int shape,n,way,a,N,i,X,yes=1,j;
    while(yes==1)
    {
	printf("What shape do u want?\n1)Triangle\n2)Diamond");
	scanf("%d",&shape);
	
	printf("How many do u want?:");
	scanf("%d",&n);
	
	printf("do u want?\n1)Sideways\n2)Downward");
	scanf("%d",&way);
	
	if(shape==1)
	{
		if(way==1)
		{
		N=5;
			for(i=1;i<=5;i++)
			{
				for(a=1;a<=n;a++)
				{
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
						printf("* ");
					}
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
				}
				N=N-1;
				printf("\n");
			}
		}
	
		else if(way==2)
			{
				for(a=1;a<=n;a++)
				{
					N=5;
				for(i=1;i<=5;i++)
				{
			
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
						printf("* ");
					}
					N=N-1;
				printf("\n");
				}
				printf("\n");
			}
			
			
	}
}
	if(shape==2)
	{
		if(way==1)
		{
		N=5;
			for(i=1;i<=5;i++)
			{
				for(a=1;a<=n;a++)
				{
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
						printf("* ");
					}
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
				}
				N=N-1;
				printf("\n");
			}
            X=1;
            for(i=4;i>0;i--)
            {
            for(a=1;a<=n;a++)
				{
                for(j=1;j<=X;j++)
                {
						printf(" ");
					}
                for(j=1;j<=i;j++)  
                {
						printf("* ");
					}  
                for(j=1;j<=X;j++)
                {
						printf(" ");
					}    
		    }
            X=X+1;
		    printf("\n");
            }
	    }
		else if(way==2)
			{
				for(a=1;a<=n;a++)
				{
					N=5;
				for(i=1;i<=5;i++)
				{
			
					for(j=1;j<N;j++)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
						printf("* ");
					}
					N=N-1;
				printf("\n");
                 X=1;
                 }
            for(i=4;i>0;i--)
            {
                for(j=1;j<=X;j++)
                {
						printf(" ");
					}
                for(j=1;j<=i;j++)  
                {
						printf("* ");
					}  
                for(j=1;j<=X;j++)
                {
						printf(" ");
					}    
		    
            X=X+1;
		    printf("\n");
            }
			}
            }
            else{
            printf("\nEnter eithr 1 or 2");}
				printf("\n");
			}
            else{
            printf("\nEnter either 1 or 2");}
            
            printf("\nDo u wanna continue?\n(Enter 1 if yes otherwise 0)");
            scanf("%d",&yes);
	}
}