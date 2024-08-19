#include <stdio.h>
#include <string.h>

int main() {
  char alphabet[0],c;
  int i,j,k,N,a,n,l;
  printf("Enter a Sentence You want to print: ");
  scanf("%[^\n]s", alphabet);
  for(l=0;l<strlen(alphabet);l++) 
  {
    c=alphabet[l];
    switch(c){
    case 'a':
	case 'A':
    k=4;
	N=20;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	k=k+1;
	n=n-1;
	printf("\n");
	}
    for(i=1;i<=4;i++)
	{
	for(j=1;j<n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=i;j++)
	{
	printf(" ");
	}
        for(j=1;j<=i;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        
	k=k+1;
	n=n-1;
	printf("\n");
	}
    for(i=1;i<=3;i++)
	{
	for(j=1;j<n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	k=k+1;
	n=n-1;
	printf("\n");
	}
    for(i=1;i<=6;i++)
	{
	for(j=1;j<n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=i+14;j++)
	{
	printf(" ");
	}
        for(j=1;j<=i;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        
	k=k+1;
	n=n-1;
	printf("\n");
	}
	printf("\n");
        break;




        
        case 'b':
	case 'B':
        
    k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k++;
	}
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=2*i+3;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=9;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
             k=7;
    for(i=1;i<=3;i++)
	{  

	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
        }
        for(i=1;i<=4;i++)
	{  

	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
        }
        for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=9;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    k=7;
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	}
    k=8;
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
        k=k-1;
	printf("\n");
	}
	printf("\n");
        break;





	case'c':
	case'C':
	k=12;
	N=6;
	n=N;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-2;
        }
	k=19;
	n=1;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-1;
        }
	k=16;
	for(i=1;i<=13;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        
	printf("\n");
       
        }
	n=0;
	k=21;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=16;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
	printf("\n");
        break;






	case 'd':
	case 'D':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k++;
	}
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=2*i+3;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=6;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=9;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
        for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=9;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    k=7;
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	}
    k=8;
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
        k=k-1;
	printf("\n");
	}
	printf("\n");
	break;





	case 'e':
	case 'E':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=10;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
    for(i=1;i<=4;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
	printf("\n");
	}
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=10;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
    for(i=1;i<=4;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
	printf("\n");
	}
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=10;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
	printf("\n");
	break;






	case 'f':
	case 'F':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=10;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
    for(i=1;i<=4;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
	printf("\n");
	}
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=10;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
    for(i=1;i<=8;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
	printf("\n");
	}
	printf("\n");
	break;






	case'g':
	case'G':
	 k=10;
	N=6;
	n=N;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-2;
        }
	k=15;
	n=1;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-1;
        }
	k=16;
	for(i=1;i<=9;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        
	printf("\n");
       
        }
        for(i=1;i<=3;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=17;j++)
	{
	printf(" ");
	}
        for(j=1;j<=9;j++)
	{
	printf("* ");
	}
	printf("\n");
       
        }
	n=0;
	k=17;
    a=6;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=6;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-1;
	n=n+1;
        
        }
	k=14;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
        for(j=1;j<=a+1;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        a+=2;
        }
	printf("\n");
	break;





	case 'h':
	case'H':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=10;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=20;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=16;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	for(i=1;i<=10;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=20;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	printf("\n");
	break;



    


	case 'i':
	case 'I':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=14;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=14;i++)
	{
        for(j=1;j<=10;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=14;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	printf("\n");
	break;



	case 'j':
	case 'J':
	k=8;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<5;j++)
	{
	printf(" ");
	}
	for(j=1;j<=20;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=15;i++)
	{
	for(j=1;j<5;j++)
	{
	printf(" ");
	}
        for(j=1;j<17;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	k=k+2;
	printf("\n");
	}
	n=1;
	k=12;
	for(i=1;i<=2;i++)
	{  
	for(j=1;j<2;j++)
	{
	printf(" ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<2;j++)
	{
	printf(" ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k+3;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
	printf("\n");
	break;




case 'k':
case 'K':
k=18;
	N=16;
	n=N;
	for(i=1;i<=10;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	k=k-2;
	printf("\n");
	}
	k=0;
    for(i=1;i<=10;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	k=k+2;
	printf("\n");
	}
	printf("\n");
	break;







	case 'l':
	case 'L':
    for(i=1;i<=15;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
	printf("\n");
	}
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=12;j++)
	{
	printf("* ");
	}
	printf("\n");
       
	}
	printf("\n");
	break;









	case'm':
	case'M':
	k=5;
	n=30;
	N=5;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=N;j++)
	{
	printf("* ");
	}
	printf("\n");
	N++;
	n=n-4;
	k++;
        }
	n=1;
	N=20;
	k=1;
	for(i=1;i<=6;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	for(j=1;j<=N;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	N=N-4;
	n=n+2;
	k=k+2;
        }
	n=13;
	k=6;
	N=13;
	for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	for(j=1;j<=N;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	N=N+2;
	n=n+2;
	k=k-2;
        }
	for(i=1;i<=10;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=38;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
        }
	printf("\n");
	break;










	case'n':
	case 'N':
	k=4;
	N=28;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	k=k+1;
	n=n-2;
	printf("\n");
	}
	k=0;
    for(i=1;i<=12;i++)
	{
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	 for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	n=n-2;
	k=k+2;
	printf("\n");
	}
	n=6;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	for(j=1;j<=n;j++)
	{
	printf("* ");
	}
	k=k+2;
	n=n-1;
	printf("\n");
	}
	printf("\n");
	break;






case 'o':
case 'O':
k=12;
	N=6;
	n=N;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-2;
        }
	k=19;
	n=1;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-1;
        }
	k=16;
	for(i=1;i<=13;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
       
        }
	n=0;
	k=21;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=16;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
	printf("\n");
    break;





    case 'p':
	case 'P':
   k=8;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k++;
	}
	k=8;
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	k=k+2;
	printf("\n");
	}
    for(i=1;i<=5;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
      k=10;
    for(i=1;i<=2;i++)
	{  

	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
        }
        k=10;
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
        k=k-1;
	printf("\n");
	}
    k=8;
    for(i=1;i<=11;i++)
	{   
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        k=k-1;
	printf("\n");
	}
	printf("\n");
    break;




	case'q':
	case'Q':
	k=12;
	N=6;
	n=N;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-2;
        }
	k=19;
	n=1;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-1;
        }
	k=16;
	for(i=1;i<=11;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
       
        }
	n=0;
	k=21;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=17;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        
	n=n+2;
        }
	n=32;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=5;j++)
	{
	printf("* ");
	}
	printf("\n");
        
	n=n+2;
        }
	printf("\n");
	break;



	case'r':
	case 'R':
	k=8;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k++;
	}
	k=8;
    for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	k=k+2;
	printf("\n");
	}
    for(i=1;i<=5;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=12;j++)
	{
	printf(" ");
	}
        for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
      k=10;
    for(i=1;i<=2;i++)
	{  

	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
        }
        k=10;
    for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
        k=k-1;
	printf("\n");
	}
    k=1;
    for(i=1;i<=12;i++)
	{   
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        k=k+1;
	printf("\n");
	}
	printf("\n");
	break;







case's':
case'S':
k=12;
	N=6;
	n=N;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-2;
        }
	k=19;
	n=1;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k-1;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+2;
	n=n-1;
        }
	k=16;
	for(i=1;i<=4;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        
	printf("\n");
       
        }
	n=0;
	k=21;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=16;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=14;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
	k=27;
	for(i=1;i<=2;i++)
	{ 
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k+1;
        }
	for(i=1;i<=4;i++)
	{ 
	for(j=1;j<=28;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
       
        }
	k=20;
	n=0;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=16;
	n=2;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
printf("\n");
	break;






	case 't':
	case 'T':
	k=6;
	N=16;
	n=N;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=20;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    for(i=1;i<=18;i++)
	{
        for(j=1;j<=16;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
	}
    
	printf("\n");
	break;






	case'u':
	case 'U':
	k=8;
	N=16;
	n=N;
	for(i=1;i<=16;i++)
	{ 
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=21;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
       
        }
	n=0;
	k=21;
	for(i=1;i<=2;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
        for(j=1;j<=k;j++)
	{
	printf(" ");
	}
        for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+1;
        }
	k=16;
	for(i=1;i<=3;i++)
	{  
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	printf("\n");
        k=k-2;
	n=n+2;
        }
	printf("\n");
	break;






	case 'v':
	case 'V':
	N=25;
	n=N;
    k=0;
	for(i=1;i<=13;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    for(j=1;j<=n;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    n=n-2;
    k=k+1;
    printf("\n");
    }
    n=5;
    for(i=1;i<=3;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=n;j++)
    {
    printf("* ");
    }
    n--;
    k++;
    printf("\n");
    }
	printf("\n");
	break;
	case 'w':
	case 'W':
	for(i=1;i<=13;i++)
    {
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    for(j=1;j<=32;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    printf("\n");
    }
    	n=10;
	k=6;
	N=10;
	for(i=1;i<=2;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	for(j=1;j<=N;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	N--;
	n--;
	k=k+1;
       } 
       n=8;
	N=0;
	k=8;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	for(j=1;j<=N;j++)
	{
	printf(" ");
	}
	for(j=1;j<=4;j++)
	{
	printf("* ");
	}
	for(j=1;j<=k;j++)
	{
	printf(" ");
	}
	for(j=1;j<=3;j++)
	{
	printf("* ");
	}
	printf("\n");
	N=N+2;
	n=n-1;
	k=k-1;
        }
        k=5;
	n=20;
	N=6;
    k=6;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=k;j++)
	{
	printf("* ");
	}
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=N;j++)
	{
	printf("* ");
	}
	printf("\n");
	N--;
	n=n+4;
	k--;
        }
        printf("\n");
        break;





	case 'x':
	case 'X':
	N=14;
	n=N;
    k=0;
	for(i=1;i<=8;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    for(j=1;j<=n;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    n=n-2;
    k=k+1;
    printf("\n");
    }
    for(i=1;i<=2;i++)
    {
     printf("        * * * * *");
     printf("\n");
    }
    k=7;
    n=0;
    for(i=1;i<=8;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    for(j=1;j<=n;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    n=n+2;
    k=k-1;
    printf("\n");
    }
	printf("\n");
	break;





	case 'y':
	case 'Y':
	N=14;
	n=N;
    k=0;
	for(i=1;i<=8;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    for(j=1;j<=n;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    n=n-2;
    k=k+1;
    printf("\n");
    }
    n=5;
    for(i=1;i<=3;i++)
    {
    for(j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(j=1;j<=n;j++)
    {
    printf("* ");
    }
    n--;
    k++;
    printf("\n");
    }
    for(i=1;i<=8;i++)
    {
    for(j=1;j<=10;j++)
    {
    printf(" ");
    }
    for(j=1;j<=3;j++)
    {
    printf("* ");
    }
    printf("\n");
    }
	printf("\n");
	break;





	case'z':
	case'Z':
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=21;j++)
	{
	printf("* ");
	}
	printf("\n");
        }
	n=32;
	for(i=1;i<=17;i++)
	{ 
	for(j=1;j<=n;j++)
	{
	printf(" ");
	}
	for(j=1;j<=5;j++)
	{
	printf("* ");
	}
	printf("\n");
	n=n-2;
        }
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=21;j++)
	{
	printf("* ");
	}
	printf("\n");
        }
	printf("\n");
	break;




case' ':
for(i=1;i<=4;i++)
{
	printf("\n");
}


        default:
        break;
    }
  }
  return 0;
}