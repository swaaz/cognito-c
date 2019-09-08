quiz q5={1,1,2,3,4,2,3,2,3,3,2};

int quiz5() // stringhs
{
    int x;

   l1.1:   printf("\n1.include <stdio.h>\n
            #include <stdlib.h>\n

            int main()\n
            {\n
            char str1[] = "GeeksQuiz";\n
            char str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};\n
            int n1 = sizeof(str1)/sizeof(str1[0]);\n
            int n2 = sizeof(str2)/sizeof(str2[0]);\n
            printf("n1 = %d, n2 = %d", n1, n2);\n
            return 0;\n
            }\n

            options\n
            1. n1=10,n2=9 \n
            2. n1=10,n2=10\n
            3. n1=9,n2=10\n
            4. n1=9,n2=9\n");
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
    l1.2:  printf("2. #include<stdio.h>\n
            void swap(char *str1, char *str2)\n
            {\n
            char *temp = str1;\n
            str1 = str2;\n
            str2 = temp;\n
            }\n
            \n
            int main()\n
            {\n
            char *str1 = "Geeks";\n
            char *str2 = "Quiz";\n
            swap(str1, str2);\n
            printf("str1 is %s, str2 is %s", str1, str2);\n
            return 0;\n
            }\n

            options\n
            1.srt1 is Geeks, str2 is Quiz \n
            2.srt1 is quiz, str2 is Geeks\n
            3.str1 is Geeks,str2 is Geeks\n
            4.str1 is quiz,str2 is quiz\n");
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
    l1.3:  printf("3. #include <stdio.h>\n
            int fun(char *str1)\n
            {\n
            char *str2 = str1;\n
            while(*++str1);\n
            return (str1-str2);\n
            }\n

            int main()\n
            {\n
            char *str = "GeeksQuiz";\n
            printf("%d", fun(str));\n
            return 0;\n
            }\n

            options\n
            1.10\n
            2.9 \n
            3.8\n
                4.random numbers\n");
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
    l1.4:  printf("4. char c[] = "GATE2011";\n
            char *p =c;\n
            printf("%s", p + p[3] - p[1]) ;\n

            options\n
            1.GATE2011\n
            2.E2011\n
            3.2011\n
            4.011\n");
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
    l1.5:  printf("5. #include<stdio.h>\n
            int main()\n
            {\n
                char str[] = "GeeksQuiz";\n
                printf("%s %s %sn", &str[5], &5[str], str+5);\n
                printf("%c %c %cn", *(str+6), str[6], 6[str]);\n
                return 0;\n
            }\n

            options\n
            1.RUNTIME ERROR\n
            2.COMPILER error\n
            3.uiz uiz uiz u u u\n
4.Quiz Quiz Quiz u u u \n");
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
    l1.6:  printf("6. #include <stdio.h>\n
            int main()\n
            {\n
            char arr[] = "GeeksQuiz";\n
            printf("%s", ?);\n
            return 0;\n
            }\n

            options\n
            1.arr\n
            2.(arr+5) \n
            3.(arr+4)\n
            4.Notpossible\n");
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
    l1.7: printf("7. #include<stdio.h>\n
            int main()\n
            {\n
                char a[2][3][3] = {'g','e','e','k','s','q','u','i','z'};\n
                printf("%s ", **a);\n
                return 0;\n
            }\n

            options\n
            1.compiler error_category\n
            2.geeksquiz \n
                3.runtime error\n"); 
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
    l1.8: printf("8. #include <stdio.h>\n

            void my_toUpper(char* str, int index)\n
            {\n
                *(str + index) &= ~32;\n
            }\n

            int main()\n
            {\n
                char* arr = "geeksquiz";\n
                my_toUpper(arr, 0);\n
                my_toUpper(arr, 5);\n
                printf("%s", arr);\n
                return 0;\n
            }\n

            options\n
            1.Geeksquiz\n
            2.geeksquiz\n
            3.compiler dependent \n");
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
    l1.9:  printf("9. #include <stdio.h>\n
            int main()\n
            {\n
                char str[] = "%d %c", arr[] = "GeeksQuiz";\n
                printf(str, 0[arr], 2[arr + 3]);\n
                return 0;\n
            }\n

            options\n
            1. G Q\n
            2.71 81\n
            3.71 Q \n
            4.compiler time error\n");
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
    l1.10: printf("10 .#include<stdio.h>\n
            int main()\n
            {\n
                char str[20] = "GeeksQuiz";\n
                printf ("%d", sizeof(str));\n
                return 0;\n
            }\n

            options\n
            1.10\n
            2.20 \n
                3.Garbage value\n");
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
