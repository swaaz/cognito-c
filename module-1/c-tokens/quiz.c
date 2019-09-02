struct quiz q1={4,}
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
    2:
        

}