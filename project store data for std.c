#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,k=0,j,del,id_delete,data_delete,x,m,redo,cnt=1;
    printf("Enter the number of students:");
    scanf("%d",&n);
    char name[100],N[100][100],section[100];
    int id[100],age[100],class[100],symbol[100],name_length[100];
    for(i=0;i<n;i++)
    {
        printf("\nFor Student %d\n",i+1);
        
        char name[100]={""};
        
        printf("ID: ");
        scanf("%d",&id[i]);

        getchar();
        printf("Name: ");
        scanf("%[^\n]",&name);

        printf("Age: ");
        scanf("%d",&age[i]);

        printf("Class: ");
        scanf("%d",&class[i]);

        printf("Symbol Number: ");
        scanf("%d",&symbol[i]);

        getchar();
        printf("Section: ");
        scanf("%c",&section[i]);
           
    name_length[i]=strlen(name);

    for(j=0;j<name_length[i];j++)
    {
    N[k][j]=name[j];
    }    
    k++;
    }
//data sorting as per the section
    for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    {
        if(section[i] < section[j])
        {
            x=id[i];
            id[i]=id[j];
            id[j]=x;

            x=age[i];
            age[i]=age[j];
            age[j]=x;

            x=class[i];
            class[i]=class[j];
            class[j]=x;

            x=symbol[i];
            symbol[i]=symbol[j];
            symbol[j]=x;

            x=section[i];
            section[i]=section[j];
            section[j]=x;

        for(m=0;m<name_length[i];m++){
            x=N[i][m];
            N[i][m]=N[j][m];
            N[j][m]=x;
        }
        x=name_length[i];
        name_length[i]=name_length[j];
        name_length[j]=x;
        }
        }
    }
    k=0;
    printf("\n\nData as per the  Section:\n");
    for(i=0;i<n;i++){
        
        printf("\n\nStored data of Student %d\n",i+1);
        
    	printf("\nID:%d",id[i]);
    	
    	printf("\nName: ");
	    for(j=0;j<name_length[i];j++)
        {
        printf("%c",N[k][j]);
        }
        
	    printf("\nAge: %d",age[i]);
	    
	    printf("\nClass: %d",class[i]);
	    
	    printf("\nSymbol number: %d",symbol[i]);
	    
	    printf("\nSection: %c",section[i]);
	    k++;
	}
    printf("\n\nDo you want to delete Data of any student??\n(Enter 1 for  yes and otherwise 0) ");
    scanf("%d",&del);
    if(del==1)
    {
    do{
        printf("\nEnter the ID of the student that you wanna delete the data: ");
        scanf("%d",&id_delete);
        for(i=0;i<n;i++)
        {
            if(id[i]==id_delete)
            {
                printf("\nYou are deleting the data of student: ");
                for(j=0;j<name_length[i];j++)
                {
                     printf("%c",N[i][j]);
                }
                k=0;
                for(j=0;j<n;j++)
                {
                    k=1;
                    for(j=0 ;j<n;j++)
                    {
                    id[i+j]=id[i+k];
                   
                    class[i+j]=class[i+k];
                    
                    age[i+j]=age[i+k];
                   
                    symbol[i+j]=symbol[i+k];
                   
                    section[i+j]=section[i+k];
                    
                    for(m=0;m<name_length[i];m++)
                    {
                    N[i+j][m]=N[i+k][m];
                    }
                    name_length[i+j]=name_length[i+k];
                    k++;
                    }
                }
            }
        }
            k=0;
    printf("\n\nData after Deletation");
    for(i=0;i<n-cnt;i++){
        
        printf("\n\nStored data of Student %d\n",i+1);
        
    	printf("\nID:%d",id[i]);
    	
    	printf("\nName: ");
	    for(j=0;j<name_length[i];j++)
        {
        printf("%c",N[k][j]);
        }
        
	    printf("\nAge: %d",age[i]);
	    
	    printf("\nClass: %d",class[i]);
	    
	    printf("\nSymbol number: %d",symbol[i]);
	    
	    printf("\nSection: %c",section[i]);
	    k++;
	}
    printf("\n\nDo you want to delete more Student data?\n(Enter '1' if yes otherwise '0')");
    scanf("%d",&redo);
    cnt++;
    }
    while(redo==1);
    }
    return 0;
}