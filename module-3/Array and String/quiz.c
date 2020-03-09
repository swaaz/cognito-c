quiz q7[10]={3,1,3,3,3,1,1,2,1,4};
int quiz7()//arrays
{

   int x;

    l7.1:   printf("\n1. What does the following function check for? (all necessary headers to be included and function is called from main) \n");
            printf("#define MAX 10\ntypedef struct stack\n{\n        int top;\n	int item[MAX];\n   }stack;\n   int function(stack *s)\n   {\n   if(s->top == -1)\n	    return 1;\n	 else return 0;\n   }\n");
            printf("1. full stack\n2. invalid index\n 3.  empty stack\n 4.infinite stack\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.1)
        {
            printf("Correct\n");
            goto l7.2;
        }
        else
        {
            printf("Wrong\n");
            goto l7.1;
        }
    l7.2:  printf("\n2. Arrays are best data structures");
        printf("1. for relatively permanent collections of data\n2. for the size of the structure and the data in the structure are constantly changing\n 3.   for both of above situation\n 4.for non of above situation\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.2)
        {
            printf("Correct\n");
            goto l7.3;
        }
        else
        {
            printf("wrong\n");
            goto l7.2;
        }
    l7.3:  printf("\n3. A …………………… does not keep track of address of every element in the list.")
        printf("1. Stack\n2. String\n 3. Linear array\n 4.Queue\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.3)
        {
            printf("Correct\n");
            goto l7.4;
        }
        else
        {
            printf("wrong\n");
            goto l7.3;
        }
    l7.4:  printf("4. Each array declaration need not give, implicitly or explicitly, the information about");
        printf("1. the name of array\n2. the data type of array\n 3. the first data from the set to be stored\n 4.the index set of the array\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.4)
        {
            printf("Correct\n");
            goto l7.5;
        }
        else
        {
            printf("wrong\n");
            goto l7.4;
        }
    l7.5:  printf("5. What does ‘stack underflow’ refer to?\n1. accessing item from an undefined stack\n2. adding items to a full stack\n3. removing items from an empty stack\n4. index out of bounds exception\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.5)
        {
            printf("Correct\n");
            goto l7.6;
        }
        else
        {
            printf("wrong\n");
            goto l7.5;
        }
    l7.6:  printf("6. Which of the following real world scenarios would you associate with a stack data structure?\n1. piling up of chairs one above the other\n2. people standing in a line to be serviced at a counter\n3. offer services based on the priority of the customer\n4. tatkal Ticket Booking in IRCTC\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.6)
        {
            printf("Correct\n");
            goto l7.7;
        }
        else
        {
            printf("wrong\n");
            goto l7.6;
        }
    l7.7: printf("7. What is the time complexity of pop() operation when the stack is implemented using an array?\n1. O(1)\n2. O(n)\n3. (logn)\n4. O(nlogn)\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.7)
        {
            printf("Correct\n");
            goto l7.8;
        }
        else
        {
            printf("wrong\n");
            goto l7.7;
        }
    l7.8: printf("8. Which of the following array position will be occupied by a new element being pushed for a stack of size N elements(capacity of stack > N).\n1. S[N-1]\n2.  S[N]\n3. S[1]\n4. S[0]\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q6.8)
        {
            printf("Correct\n");
            goto 17.9;
        }
        else
        {
            printf("wrong\n");
            goto l7.8;
       }
    l7.9:  printf("9. Which of the following data structure can’t store the non-homogeneous data elements?\n1. Arrays\n2.	Records\n3. Pointers\n4. Stacks\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.9)
        {
            printf("Correct\n");
            goto l2.10;
        }
        else
        {
            printf("wrong\n");
            goto l7.9;
        }
    l7.10: printf("10. The memory address of the first element of an array is called\n1. floor address\n2. foundation address\n3. first address\n4. base address\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q7.10)
        {
            printf("Correct\n");
            module_2();
        }
        else
        {
            printf("wrong\n");
            goto l7.10;
        }

}
