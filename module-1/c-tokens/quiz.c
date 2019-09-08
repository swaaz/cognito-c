quiz q1={4,2,2,4,3,3,4,2,4,1};

int quiz1() //c-tokens
{
    int x;

   l1.1:   printf("\n1.Which of the following is not a valid declaration in C? \n");
        printf("a.short int x;\nb.short int x;\nc.short x;\nd.unsigned short x;\n");
        printf("Options\n");
        printf("1.c & d\n2.b\n3.a\n4.all are valid\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.1) 
        {
            printf("Correct\n");
            goto l1.2;
        }
        else 
        {
            printf("Wrong\n");
            goto l1.1;
        }
    l1.2:  printf("2. The format identifier ‘%i’ is also used for _____ data type.\n1) char\n2) int\n3) float\n4) double\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.2)
        {
            printf("Correct\n");
            goto l1.3;
        }
        else
        {
            printf("wrong\n");
            goto l1.2;
        }
    l1.3:  printf("3. Which data type is most suitable for storing a number 65000 in a 32-bit system?\n1) signed short\n2) unsigned short\n3) long\n4) int\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.3)
        {
            printf("Correct\n");
            goto l1.4;
        }
        else
        {
            printf("wrong\n");
            goto l1.3;
        }
    l1.4:  printf("4. Which of the following is a User-defined data type?\n1) typedef int Boolean;\n2) typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n3) struct {char name[10], int age};\n4) all of the mentioned\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.4)
        {
            printf("Correct\n");
            goto l1.5;
        }
        else
        {
            printf("wrong\n");
            goto l1.4;
        }
    l1.5:  printf("5. What is the size of an int data type?\n1) 4 Bytes\n2) 8 Bytes\n3) Depends on the system/compiler\n4) Cannot be determined\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.5)
        {
            printf("Correct\n");
            goto l1.6;
        }
        else
        {
            printf("wrong\n");
            goto l1.5;
        }
    l1.6:  printf("6. What is short int in C programming?\n 1) The basic data type of C\n2) Qualifier\n3) Short is the qualifier and int is the basic data type\n4) All of the mentioned\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.6)
        {
            printf("Correct\n");
            goto l1.7;
        }
        else
        {
            printf("wrong\n");
            goto l1.6;
        }
    l1.7: printf("7.What is C Tokens?\n1. The smallest individual units of c program\n2. The basic element recognized by the compiler\n3. The largest individual units of program\n4. A & B Both\n"); 
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.7)
        {
            printf("Correct\n");
            goto l1.8;
        }
        else
        {
            printf("wrong\n");
            goto l1.7;
        } 
    l1.8: printf("8. If 'a' is an integer variable, then a=5/2 will return a value\n1. 2.5\n2. 2\n3. 2.000000\n4. 2.500000\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.8)
        {
            printf("Correct\n");
            goto l1.9;
        }
        else
        {
            printf("wrong\n");
            goto l1.8;
        }
    l1.9:  printf("9. The words if, else, auto, float etc. hasve predefined meaning and users cannot use them as variables. These words are called\n1. constant\n2. identifier\n3. data types\n4. keywords\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.9)
        {
            printf("Correct\n");
            goto l1.10;
        }
        else
        {
            printf("wrong\n");
            goto l1.9;
        }
    l1.10: printf("10 .By default a real number is treated as a\n1. float\n2. double\n3. long double\n4. integer\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.10)
        {
            printf("Correct\n");
            c_tokens();
        }
        else
        {
            printf("wrong\n");
            goto l1.10;
        }
}
