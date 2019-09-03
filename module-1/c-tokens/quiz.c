struct quiz q1={4,2,2,4,}

int quiz1() //c-tokens
{
    int x;

   1:   printf("\n1.Which of the following is not a valid declaration in C? \n");
        printf("a.short int x;\nb.short int x;\nc.short x;\nd.unsigned short x;\n");
        printf("Options\n");
        printf("1.c & d\n2.b\n3.a\n4.all are valid\n");
        printtf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.1) 
        {
            printf("Correct\n");
            goto 2;
        }
        else 
        {
            printf("Wrong\n");
            goto 1;
        }
    2:  printf("2. The format identifier ‘%i’ is also used for _____ data type.\n1) char\n2) int\n3) float\n4) double"\n);
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.2)
        {
            printf("Correct\n");
            goto 3;
        }
        else
        {
            printtf("wrong\n");
            goto 2;
        }
    3:  printf("3. Which data type is most suitable for storing a number 65000 in a 32-bit system?\n1) signed short\n2) unsigned short\n3) long\n4) int");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.3)
        {
            printf("Correct\n");
            goto 4;
        }
        else
        {
            printtf("wrong\n");
            goto 3;
        }
    4:  printf("Which of the following is a User-defined data type?\n1) typedef int Boolean;\n2) typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n3) struct {char name[10], int age};\n4) all of the mentioned");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.4)
        {
            printf("Correct\n");
            goto 5;
        }
        else
        {
            printtf("wrong\n");
            goto 4;
        }
    5:  printf("What is the size of an int data type?\n1) 4 Bytes\n2) 8 Bytes\n3) Depends on the system/compiler\n4) Cannot be determined");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.5)
        {
            printf("Correct\n");
            goto 6;
        }
        else
        {
            printtf("wrong\n");
            goto 5;
        }
    6:  
}