#include <stdio.h>

char name[0],filename[0],date[0],history[0],reason[0];
int room_no,choice1,choice2,amount,ans,choice,retreat;

void initial_data_storing()
{
    printf("Enter name: ");
    getchar();
    gets(name);
    printf("Enter the room No: ");
    scanf("%d",&room_no);
}

void create_new_file()
{
    snprintf(filename, sizeof(filename), "%d.txt", room_no);
    FILE*file = fopen(filename,"w");
    fprintf(file, "Room No:%d\n", room_no);
    fprintf(file, "Name:%s", name);
    fclose(file);
}

void payment_history()
{
    snprintf(filename, sizeof(filename), "%d.txt", room_no);
    FILE*file = fopen(filename,"r");
    while(fgets(history,1000000,file))
    {
        printf("%s",history);
    }
    fclose(file);
}

void preset_payment()
{
    snprintf(filename, sizeof(filename), "%d.txt", room_no);
    FILE*file = fopen(filename,"a");
    do{
    printf("\n\nDate: ");
    getchar();
    gets(date);
    printf("Amount: ");
    scanf("%d",&amount);
    printf("Reason: ");
    getchar();
    gets(reason);
    fprintf(file, "\nDate: %s", date);
    fprintf(file, "\nAmount: %d", amount);
    fprintf(file, "\nReason: %s\n", reason);
    printf("Do You want to Add more payments?\n(Enter '1' for yes otherwise '0')" );
    scanf("%d",&choice2);
    }
    while(choice2==1);
    fclose(file);
}

int main(){
retreat:
    printf("CHOOSE:\n1)Add New Member\n2)Add New Payment");
    scanf("%d",&ans);
    if(ans==1){
    do{
    initial_data_storing();
    create_new_file();
    printf("Do You want to add More datas?\n(Enter '1' for yes otherwise '0')" );
    scanf("%d",&choice);
    }
    while(choice==1);
    }
    else if(ans==2){
    do{
    printf("Enter the room No: ");
    scanf("%d",&room_no);
    payment_history();
    preset_payment();
    printf("\nDo You want Data of Other People?\n(Enter '1' for yes otherwise '0')" );
    scanf("%d",&choice1);
    }
    while(choice1==1);
    }
    else{
        printf("Invalid Choice\n");
        goto retreat;
    }
    return 0;
}