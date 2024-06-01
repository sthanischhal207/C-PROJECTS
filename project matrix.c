#include <stdio.h>

int main () 
{
    int re=1,a11,a12,a13,a21,a22,a23,a31,a32,a33,b11,b12,b13,b21,b22,b23,b31,b32,b33,condition,c,s,detA=0,detB=0,A11,A12,A13,A21,A22,A23,A31,A32,A33,B11,B12,B13,B21,B22,B23,B31,B32,B33;
    printf("Only Valid for 3 by 3 Matrix\n");
    printf("For Matrix A:\n");
    printf("Enter the value of ROW 1: ");
    scanf("%d%d%d",&a11,&a12,&a13);
    printf("Enter the value of ROW 2: ");
    scanf("%d%d%d",&a21,&a22,&a23);
    printf("Enter the value of ROW 3: ");
    scanf("%d%d%d",&a31,&a32,&a33);

    printf("For Matrix B:\n");
    printf("(Enter '1' if necessary and '0' if not necessary)");
    scanf("%d",&c);
    if(c==1) 
    {
    printf("Enter the value of ROW 1: ");
    scanf("%d%d%d",&b11,&b12,&b13);
    printf("Enter the value of ROW 2: ");
    scanf("%d%d%d",&b21,&b22,&b23);
    printf("Enter the value of ROW 3: ");
    scanf("%d%d%d",&b31,&b32,&b33);
    }
    else if(c!=1)
    {
        printf("");
    }
    else{
        printf("Invalid");
    }
    do
    {
    if(c==1){
    printf("\nCHOOSE:\n1)Deterinant\n2)Transpose\n3)Multiplication\n4)Addition\n5)Subtraction\n6)Cofactors\n7)Adjoint\n8)Inverse\n");
    scanf("%d",&condition);
    switch (condition)
    {
        case 1:
        printf("\n1)Determinant of A\n2)Determinant of B\n");
        scanf("%d",&s);
        if(s==1)
        {
            detA=a11*(a22*a33-a32*a23)-a12*(a21*a33-a23*a31)+a13*(a21*a32-a22*a31);
            printf("The determinant of matrix A is %d.",detA);
        }
        else if(s==2)
        {
            detB=b11*(b22*b33-b32*b23)-b12*(b21*b33-b23*b31)+b13*(b21*b32-b22*b31);
            printf("The determinant of matrix A is %d.",detB);
        }
        break;
        case 2:
        printf("\n1)Transpose of A\n2)Transpose of B\n");
        scanf("%d",&s);
        if(s==1)
        {
            printf("\n%d  %d  %d\n",a11,a21,a31);
            printf("%d  %d  %d\n",a12,a22,a32);
            printf("%d  %d  %d\n",a13,a23,a33);

        }
        else if(s==2)
        {
            
            printf("\n%d  %d  %d\n",b11,b21,b31);
            printf("%d  %d  %d\n",b12,b22,b32);
            printf("%d  %d  %d\n",b13,b23,b33);
        }
        break;
        case 3:
        printf("\n1)AB \n2)BA\n");
        scanf("%d",&s);
        if(s==1)
        {
            printf("\n%d  %d  %d\n",a11*b11+a12*b21+a13*b31,a11*b12+a12*b22+a13*b32,a11*b13+a12*b23+a13*b33);
            printf("%d  %d  %d\n",a21*b11+a22*b21+a23*b31,a21*b12+a22*b22+a23*b32,a21*b13+a22*b23+a23*b33);
            printf("%d  %d  %d\n",a31*b11+a32*b21+a33*b31,a31*b12+a32*b22+a33*b32,a31*b13+a32*b23+a33*b33);

        }
        else if(s==2)
        {
            printf("\n%d  %d  %d\n",b11*a11+b12*a21+b13*a31,b11*a12+b12*a22+b13*a32,b11*a13+b12*a23+b13*a33);
            printf("%d  %d  %d\n",b21*a11+b22*a21+b23*a31,b21*a12+b22*a22+b23*a32,b21*a13+b22*a23+b23*a33);
            printf("%d  %d  %d\n",b31*a11+b32*a21+b33*a31,b31*a12+b32*a22+b33*a32,b31*a13+b32*a23+b33*a33);
        }
        break;
         case 4:
        printf("\nA+B or B+A\n");
            printf("\n%d  %d  %d\n",a11+b11,a12+b12,a13+b13);
            printf("%d  %d  %d\n",a21+b21,a22+b22,a23+b23);
            printf("%d  %d  %d\n",a31+b31,a32+b32,a33+b33);
        
        break;
        case 5:
        printf("\n1)A-B \n2)B-A\n");
        scanf("%d",&s);
        if(s==1)
        {
        printf("\n%d  %d  %d\n",a11-b11,a12-b12,a13-b13);
        printf("%d  %d  %d\n",a21-b21,a22-b22,a23-b23);
        printf("%d  %d  %d\n",a31-b31,a32-b32,a33-b33);
        }
        else if(s==2)
        {
        printf("\n%d  %d  %d\n",b11-a11,b12-a12,b13-a13);
        printf("%d  %d  %d\n",b21-a21,b22-a22,b23-a23);
        printf("%d  %d  %d\n",b31-a31,b32-a32,b33-a33);   
         }
        break;
        case 6:
        printf("\n1)Cofactor of A\n2) Cofactor of B\n");
        scanf("%d",&s);
        if(s==1)
        {
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n%d  %d  %d\n",A11,A12,A13);
        printf("%d  %d  %d\n",A21,A22,A23);
        printf("%d  %d  %d\n",A31,A32,A33);
        }
        else if(s==2)
        {  B11=b22*b33-b23*b32;
            B12=-b21*b33+b23*b31;
            B13=b21*b32-b22*b31;
            B21=-b12*b33+b13*b23;
            B22=b11*b33-b13*b31;
            B23=-b11*b32+b12*b31;
            B31=b12*b23-b22*b13;
            B32=-b11*b23+b21*b13;
            B33=b22*b11-b21*b12;
        printf("\n%d  %d  %d\n",B11,B12,B13);
        printf("%d  %d  %d\n",B21,B22,B23);
        printf("%d  %d  %d\n",B31,B32,B33);  
         }
        break;
        case 7:
        printf("\n1)Adjoint of A\n2)Adjoint of B\n");
        scanf("%d",&s);
        if(s==1)
        {
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n%d  %d  %d\n",A11,A21,A31);
        printf("%d  %d  %d\n",A12,A22,A32);
        printf("%d  %d  %d\n",A13,A23,A33);
        }
        else if(s==2)
        {  B11=b22*b33-b23*b32;
            B12=-b21*b33+b23*b31;
            B13=b21*b32-b22*b31;
            B21=-b12*b33+b13*b23;
            B22=b11*b33-b13*b31;
            B23=-b11*b32+b12*b31;
            B31=b12*b23-b22*b13;
            B32=-b11*b23+b21*b13;
            B33=b22*b11-b21*b12;
        printf("\n%d  %d  %d\n",B11,B21,B31);
        printf("%d  %d  %d\n",B12,B22,B32);
        printf("%d  %d  %d\n",B13,B23,B33);  
         }
        break;
         case 8:
        printf("\n1)Inverse of A\n2)Inverse of B\n");
        scanf("%d",&s);
        detA=a11*(a22*a33-a32*a23)-a12*(a21*a33-a23*a31)+a13*(a21*a32-a22*a31);
        detB=b11*(b22*b33-b32*b23)-b12*(b21*b33-b23*b31)+b13*(b21*b32-b22*b31);
        if(s==1 && detA!=0)
        {
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A11,detA,A21,detA,A31);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A12,detA,A22,detA,A32);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A13,detA,A23,detA,A33);
        }
        else if(s==2 && detB!=0)
        {  B11=b22*b33-b23*b32;
            B12=-b21*b33+b23*b31;
            B13=b21*b32-b22*b31;
            B21=-b12*b33+b13*b23;
            B22=b11*b33-b13*b31;
            B23=-b11*b32+b12*b31;
            B31=b12*b23-b22*b13;
            B32=-b11*b23+b21*b13;
            B33=b22*b11-b21*b12;
       printf("\n(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detB,B11,detB,B21,detB,B31);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detB,B12,detB,B22,detB,B32);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detB,B13,detB,B23,detB,B33);

         }
         else{
             printf("Error due to determinant=0");
         }
        break;
         default:
        printf("Enter Number 1-8");
       
    }
    }
    else{
            printf("\nCHOOSE:\n1)Deterinant\n2)Transpose\n3)Cofactors\n4)Adjoint\n5)Inverse\n");
    scanf("%d",&condition);
    switch (condition)
    {
         case 1:
            detA=a11*(a22*a33-a32*a23)-a12*(a21*a33-a23*a31)+a13*(a21*a32-a22*a31);
            printf("The determinant of matrix A is %d.",detA);
        break;
        case 2:
        printf("\nTranspose of A");
            printf("\n%d  %d  %d\n",a11,a21,a31);
            printf("%d  %d  %d\n",a12,a22,a32);
            printf("%d  %d  %d\n",a13,a23,a33);
        break;
        case 3:
        printf("\n1)Cofactor of A");
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n%d  %d  %d\n",A11,A12,A13);
        printf("%d  %d  %d\n",A21,A22,A23);
        printf("%d  %d  %d\n",A31,A32,A33);
        break;
        case 4:
        printf("\nAdjoint of A");
       
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n%d  %d  %d\n",A11,A21,A31);
        printf("%d  %d  %d\n",A12,A22,A32);
        printf("%d  %d  %d\n",A13,A23,A33);
        
        break;
        case 5:
        printf("\nInverse of A");
        detA=a11*(a22*a33-a32*a23)-a12*(a21*a33-a23*a31)+a13*(a21*a32-a22*a31);
        if(detA!=0)
        {
            A11=a22*a33-a23*a32;
            A12=-a21*a33+a23*a31;
            A13=a21*a32-a22*a31;
            A21=-a12*a33+a13*a32;
            A22=a11*a33-a13*a31;
            A23=-a11*a32+a12*a31;
            A31=a12*a23-a22*a13;
            A32=-a11*a23+a21*a13;
            A33=a22*a11-a21*a12;
        printf("\n(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A11,detA,A21,detA,A31);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A12,detA,A22,detA,A32);
        printf("(1/%d)*%d  (1/%d)*%d  (1/%d)*%d\n",detA,A13,detA,A23,detA,A33);
        }
         else{
             printf("Error due to determinant=0");
         }
        break;
        default:
        printf("Enter Number 1-5");
    }
    }
    printf("\nDo u want to continue\n Enter 1 for Yes 0 for No\n");
    scanf("%d",&re);
}
while(re==1);
}