#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


static char A[14][50]=
{
    "             **                ",
    "            ****               ",
    "           ******              ",
    "          ***  ***             ",
    "         ***    ***            ",
    "        ***      ***           ",
    "       ***        ***          ",
    "      ****************         ",
    "     ******************        ",
    "    ***              ***       ",
    "   ***                ***      ",
    "  ***                  ***     ",
    " ***                    ***    ",
    "***                      ***   "
};

static char B[14][50] = {
    "*****************      ",
    "*******************    ",
    "***            *****   ",
    "***             ****   ",
    "***             ****   ",
    "***            *****   ",
    "*******************    ",
    "*******************    ",
    "***            *****   ",
    "***             ****   ",
    "***             ****   ",
    "***            *****   ",
    "*******************    ",
    "******************     "
};
static char C[14][50] = {
    "      **************   ",
    "    ****************   ",
    "  ****                 ",
    " ***                   ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    " ***                   ",
    "  ****                 ",
    "    ****************   ",
    "      **************   "
};

static char D[14][50] = {
    "**************        ",
    "****************      ",
    "***          ****     ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***           ***     ",
    "****************      ",
    "**************        "
};

static char E[14][50] = {
    "********************  ",
    "********************  ",
    "***                   ",
    "***                   ",
    "***                   ",
    "***                   ",
    "********************  ",
    "********************  ",
    "***                   ",
    "***                   ",
    "***                   ",
    "***                   ",
    "********************  ",
    "********************  ",
};

static char F[14][50] = {
    "********************   ",
    "********************   ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "********************   ",
    "********************   ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    "
};


static char G[14][50] = {
    "      **************              ",
    "    ******************            ",
    "  ****              ****          ",
    " ***                 ***          ",
    "***                               ",
    "***                               ",
    "***                               ",
    "***                               ",
    "***                               ",
    "***                ********       ",
    " ***              ***********     ",
    "  ****           ***      ***     ",
    "    ****************      ***     ",
    "      **************      ***     "
};

static char H[14][50] = {
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "********************      ",
    "********************      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      ",
    "***              ***      "
};

static char I[14][50] = {
    "********************   ",
    "********************   ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "        ***            ",
    "********************   ",
    "********************   "
};

static char J[14][50] = {
    " **********************   ",
    " **********************   ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "           ***            ",
    "***       ****            ",
    " ************              ",
    "  **********             "
};


static char K[14][50] = {
    "***           ***      ",
    "***         ***        ",
    "***       ***          ",
    "***     ***            ",
    "***   ***              ",
    "*** ***                ",
    "******                 ",
    "******                 ",
    "*** ***                ",
    "***    ***             ",
    "***      ***           ",
    "***        ***         ",
    "***          ***       ",
    "***            ***     "
};

static char L[14][50] = {
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "********************   ",
    "********************   "
};

static char M[14][50] = {
    "***                 ***     ",
    "****               ****     ",
    "*****             *****     ",
    "*** ***         *** ***     ",
    "***   ***     ***   ***     ",
    "***     *** ***     ***     ",
    "***       ***       ***     ",
    "***                 ***     ",
    "***                 ***     ",
    "***                 ***     ",
    "***                 ***     ",
    "***                 ***     ",
    "***                 ***     ",
    "***                 ***     "
};

static char N[14][50] = {
    "****           ***       ",
    "*****          ***       ",
    "******         ***       ",
    "*** ***        ***       ",
    "***  ***       ***       ",
    "***   ***      ***       ",
    "***    ***     ***       ",
    "***     ***    ***       ",
    "***      ***   ***       ",
    "***       ***  ***       ",
    "***        *** ***       ",
    "***         ******       ",
    "***          *****       ",
    "***           ****       "
};

static char O[14][50] = {
    "   *************       ",
    " *****************     ",
    "****           ****    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "****           ****    ",
    " *****************     ",
    "   *************       "
};

static char P[14][50] = {
    "*****************      ",
    "*******************    ",
    "***           *****    ",
    "***            ****    ",
    "***            ****    ",
    "***           *****    ",
    "******************     ",
    "****************       ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    ",
    "***                    "
};
static char Q[14][50] = {
    "   *************              ",
    " *****************            ",
    "****           ****           ",
    "***             ***           ",
    "***             ***           ",
    "***             ***           ",
    "***             ***           ",
    "***             ***           ",
    "***             ***           ",
    "***             ****          ",
    "***             ******        ",
    "****           ***  ***       ",
    " ****************    ****     ",
    "   *************      ****    "
};
static char R[14][50] = {
    "*****************      ",
    "*******************    ",
    "***           *****    ",
    "***            ****    ",
    "***            ****    ",
    "***           *****    ",
    "******************     ",
    "****************       ",
    "*** ****               ",
    "***   ****             ",
    "***     ****           ",
    "***       ****         ",
    "***         ****       ",
    "***           ****     "
};

static char S[14][50] = {
    "   *****************        ",
    " *********************      ",
    "****               ****     ",
    "***                  ***    ",
    "***                         ",
    "***                         ",
    " *******************        ",
    "   *******************      ",
    "                    ***     ",
    "                    ***     ",
    "***                 ***     ",
    "****               ****     ",
    " *********************      ",
    "   *****************        "
};

static char T[14][50] = {
    "***********************  ",
    "***********************  ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            ",
    "          ***            "
};


static char U[14][50] = {
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "***                ***     ",
    "****              ****     ",
    " ********************      ",
    "   ****************        "
};

static char V[14][50] =
{
    "***                      ***   ",
    " ***                    ***    ",
    "  ***                  ***     ",
    "   ***                ***      ",
    "    ***              ***       ",
    "     ***            ***        ",
    "      ***          ***         ",
    "       ***        ***          ",
    "        ***      ***           ",
    "         ***    ***            ",
    "          ***  ***             ",
    "           ******              ",
    "            ****               ",
    "             **                "
};
static char W[14][50] = {
    "***                ***  ",
    "***                ***  ",
    "***                ***  ",
    "***                ***  ",
    "***                ***  ",
    "***                ***  ",
    "***                ***  ",
    "***      ****      ***  ",
    "***     ******     ***  ",
    "***    ***  ***    ***  ",
    "***  ***      ***  ***  ",
    "*** ***        *** ***  ",
    "******          ******  ",
    "*****            *****  "
};
static char X[14][50] = {
    "***          ***  ",
    " ***        ***   ",
    "  ***      ***    ",
    "   ***    ***     ",
    "    ***  ***      ",
    "     ******       ",
    "      ****        ",
    "      ****        ",
    "     ******       ",
    "    ***  ***      ",
    "   ***    ***     ",
    "  ***      ***    ",
    " ***        ***   ",
    "***          ***  "
};
static char Y[14][50] = {
    "***          ***  ",
    " ***        ***   ",
    "  ***      ***    ",
    "   ***    ***     ",
    "    ***  ***      ",
    "     ******       ",
    "      ****        ",
    "      ****        ",
    "      ****        ",
    "      ****        ",
    "      ****        ",
    "      ****        ",
    "      ****        ",
    "      ****        "
};
static char Z[14][50] = {
        "**************",
        "**************",
        "          ***",
        "         *** ",
        "        ***  ",
        "       ***   ",
        "      ***    ",
        "     ***     ",
        "    ***      ",
        "   ***       ",
        "  ***        ",
        " ***          ",
        "**************",
        "**************"
 };

 static char one[14][50]=
{
    "           **           ",
    "         ****           ",
    "       ******           ",
    "     ***  ***           ",
    "   ***    ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "          ***           ",
    "  *******************   "
};
static char two[14][50] = {
    "      ************         ",
    "    ***          ***       ",
    "   **              **      ",
    "  **               ***     ",
    " **               ***      ",
    "                ***        ",
    "              ***          ",
    "            ***            ",
    "          ***              ",
    "        ***                ",
    "      ***                  ",
    "    ***                    ",
    "   ********************    ",
    "   ********************    "
    };
static char three[14][50] = {
    "      ************         ",
    "    ***          ***       ",
    "   **              **      ",
    "                   **     ",
    "                  ***      ",
    "                ***        ",
    "          ********         ",
    "          ********         ",
    "                ***        ",
    "                  ***      ",
    "                   **      ",
    "   **              **      ",
    "    ***          ***       ",
    "      ************         "
};
static char four[14][50] = {
    "                ***    ",
    "              *****    ",
    "            *** ***    ",
    "          ***   ***    ",
    "        ***     ***    ",
    "      ***       ***    ",
    "    ***         ***    ",
    "   ******************  ",
    "   ******************  ",
    "                ***    ",
    "                ***    ",
    "                ***    ",
    "                ***    ",
    "                ***    "
};
static char five[14][50] = {
    "   ******************    ",
    "   ******************    ",
    "   ***                   ",
    "   ***                   ",
    "   ***                   ",
    "   ***************       ",
    "   *****************     ",
    "                  ***    ",
    "                   ***   ",
    "                    ***  ",
    "  ***               ***  ",
    "   ***             ***   ",
    "     ****************    ",
    "      *************      "
};
static char six[14][50] = {
    "      ************       ",
    "    ***          ***     ",
    "   ***             ***   ",
    "  ***                    ",
    " ***                     ",
    " ***                     ",
    " ********************    ",
    " *********************   ",
    " ***                ***  ",
    " ***                ***  ",
    "  ***              ***   ",
    "   ***            ***    ",
    "    ****        ****     ",
    "      ************       "
};
static char seven[14][50] = {
    " ********************    ",
    " ********************    ",
    "                ***      ",
    "               ***       ",
    "              ***        ",
    "             ***         ",
    "            ***          ",
    "           ***           ",
    "          ***            ",
    "         ***             ",
    "        ***              ",
    "       ***               ",
    "      ***                ",
    "     ***                 "
};
static char eight[14][50] = {
    "      ************         ",
    "    ***          ***       ",
    "  ***             ***      ",
    "  ***             ***     ",
    "  ***             ***      ",
    "    ***          ***       ",
    "      ************         ",
    "      ************         ",
    "    ***          ***       ",
    "  ***             ***      ",
    "  ***             ***     ",
    "  ***             ***      ",
    "    ***          ***       ",
    "      ************         "
};
static char nine[14][50] = {
    "  ***************     ",
    " *****************    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    "***            ***    ",
    " *****************    ",
    "  ****************    ",
    "               ***    ",
    "               ***    ",
    "               ***    ",
    "               ***    ",   
    " *****************    ",
    " ****************     "
};
static char zero[14][50] = {
    "   *************       ",
    " *****************     ",
    "****           ****    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "*******************    ",
    "*******************    ",
    "***             ***    ",
    "***             ***    ",
    "***             ***    ",
    "****           ****    ",
    " *****************     ",
    "   *************       "
};





void print_data(char word,int row);

void print_data(char word,int row)
{
    switch(word)
    {
        int i;
        case 'a':
        case 'A':
            for(i=0;i<30;i++)
            {
                printf("%c",A[row][i]);
            }
            break;
        case 'b':
        case 'B':
            for(i=0;i<23;i++)
            {
                printf("%c",B[row][i]);
            }
            break;
        case 'C':
        case 'c':
            for(i=0;i<23;i++)
            {
                printf("%c",C[row][i]);
            }
            break;
        case 'D':
        case 'd':
            for(i=0;i<22;i++)
            {
                printf("%c",D[row][i]);
            }
            break;
        case 'E':
        case 'e':
            for(i=0;i<23;i++)
            {
                printf("%c",E[row][i]);
            }
            break;
        case 'F':
        case 'f':
            for(i=0;i<23;i++)
            {
                printf("%c",F[row][i]);
            }
            break;
        case 'G':
        case 'g':
            for(i=0;i<33;i++)
            {
                printf("%c",G[row][i]);
            }
            break;
        case 'H':
        case 'h':
        for(i=0;i<23;i++)
        {
            printf("%c", H[row][i]);
        }
        break;

        case 'I':
        case 'i':
            for(i=0;i<23;i++)
            {
                printf("%c", I[row][i]);
            }
            break;

        case 'J':
        case 'j':
            for(i=0;i<26;i++)
            {
                printf("%c", J[row][i]);
            }
            break;

        case 'K':
        case 'k':
            for(i=0;i<22;i++)
            {
                printf("%c", K[row][i]);
            }
            break;

        case 'L':
        case 'l':
            for(i=0;i<23;i++)
            {
                printf("%c", L[row][i]);
            }
            break;

        case 'M':
        case 'm':
            for(i=0;i<27;i++)
            {
                printf("%c", M[row][i]);
            }
            break;

        case 'N':
        case 'n':
            for(i=0;i<22;i++)
            {
                printf("%c", N[row][i]);
            }
            break;

        case 'O':
        case 'o':
            for(i=0;i<23;i++)
            {
                printf("%c", O[row][i]);
            }
            break;

        case 'P':
        case 'p':
            for(i=0;i<23;i++)
            {
                printf("%c", P[row][i]);
            }
            break;

        case 'Q':
        case 'q':
            for(i=0;i<29;i++)
            {
                printf("%c", Q[row][i]);
            }
            break;

        case 'R':
        case 'r':
            for(i=0;i<23;i++)
            {
                printf("%c", R[row][i]);
            }
            break;

        case 'S':
        case 's':
            for(i=0;i<27;i++)
            {
                printf("%c", S[row][i]);
            }
            break;

        case 'T':
        case 't':
            for(i=0;i<27;i++)
            {
                printf("%c", T[row][i]);
            }
            break;

        case 'U':
        case 'u':
            for(i=0;i<26;i++)
            {
                printf("%c", U[row][i]);
            }
            break;

        case 'V':
        case 'v':
            for(i=0;i<32;i++)
            {
                printf("%c", V[row][i]);
            }
            break;

        case 'W':
        case 'w':
            for(i=0;i<26;i++)
            {
                printf("%c", W[row][i]);
            }
            break;

        case 'X':
        case 'x':
            for(i=0;i<20;i++)
            {
                printf("%c", X[row][i]);
            }
            break;

        case 'Y':
        case 'y':
            for(i=0;i<20;i++)
            {
                printf("%c", Y[row][i]);
            }
            break;

        case 'Z':
        case 'z':
            for(i=0;i<20;i++)
            {
                printf("%c", Z[row][i]);
            }
            break;
        case '0':
            for(i=0;i<22;i++)
            {
                printf("%c", zero[row][i]);
            }
            break;
        case '1':
            for(i=0;i<22;i++)
            {
                printf("%c", one[row][i]);
            }
            break;
        case '2':
            for(i=0;i<23;i++)
            {
                printf("%c", two[row][i]);
            }
            break; 
        case '3':
            for(i=0;i<21;i++)
            {
                printf("%c", three[row][i]);
            }
            break; 
        case '4':
            for(i=0;i<20;i++)
            {
                printf("%c", four[row][i]);
            }
            break;
        case '5':
            for(i=0;i<25;i++)
            {
                printf("%c", five[row][i]);
            }
            break;
        case '6':
            for(i=0;i<23;i++)
            {
                printf("%c", six[row][i]);
            }
            break;
        case '7':
            for(i=0;i<22;i++)
            {
                printf("%c", seven[row][i]);
            }
            break;
        case '8':
            for(i=0;i<23;i++)
            {
                printf("%c", eight[row][i]);
            }
            break;
        case '9':
            for(i=0;i<20;i++)
            {
                printf("%c", nine[row][i]);
            }
            break;
        default:
            break;
    }
}

int main()
{
    char str[1000],arr[1000][8];
    int i=0,j=0,row=0,r=0,len=0,k=0,le[1000];
    printf("ENTER ANY SENTENCE OR WORD: ");
    scanf("%[^\n]s", str);
    fflush(stdin);
    le[0]=8;
    str[strlen(str)]= ' ';
    for(i=0;i<strlen(str);i++)
    {
        if(len/8==1 || str[i] == ' ')
        {
            le[r]=len;
            r++;
            len=0;
            j=0;
        }
        arr[r][j]=str[i];
        len++;
        j++;
    }
    printf("\n");
    for(k=0;k<=r;k++)
    {
        for(i=0;i<14;i++)
        {
            for(j=0;j<le[k];j++)
            {
                print_data(arr[k][j],row);
            }
            printf("\n");
            row++;
        }
        printf("\n");
        row=0;
    }
}

    