quiz q5={1,1,2,3,4,2,3,2,3,3,2};

int quiz5() // stringhs
{
    int x;

   l5_1:   printf("\n1.include <stdio.h>\n#include <stdlib.h>\nint main()\n{\nchar str1[] = \"GeeksQuiz\";\nchar str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};\nint n1 = sizeof(str1)/sizeof(str1[0]);\nint n2 = sizeof(str2)/sizeof(str2[0]);\nprintf(\"n1 = %d, n2 = %d\", n1, n2)\;\nreturn 0;\n}\noptions\n1. n1=10,n2=9 \n2. n1=10,n2=10\n3. n1=9,n2=10\n4. n1=9,n2=9\n\");printf(\"a.short int x\;\nb.short int x\;\nc.short x\;\nd.unsigned short x\;\n\")\;printf(\"Options\n\")\;printf(\"1.c & d\n2.b\n3.a\n4.all are valid\n\")\;\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[0])
            {
                printf("Correct\n");
                goto l5_2;
            }
            else
            {
                printf("Wrong\n");
                goto l5_1;
            }
    l5_2:  printf("2. #include<stdio.h>\nvoid swap(char *str1, char *str2)\n{\nchar *temp = str1;\nstr1 = str2;\nstr2 = temp;\n}\n\nint main()\n{\nchar *str1 = \"Geeks\";\nchar *str2 = \"Quiz\";\nswap(str1, str2);\nprintf(\"str1 is %s, str2 is %s\", str1, str2)\;\nreturn 0;\n}\noptions\n1.srt1 is Geeks, str2 is Quiz \n2.srt1 is quiz, str2 is Geeks\n3.str1 is Geeks,str2 is Geeks\n4.str1 is quiz,str2 is quiz\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[1])
            {
                printf("Correct\n");
                goto l5_3;
            }
            else
            {
                printf("wrong\n");
                goto l5_2;
            }
    l5_3:  printf("3. #include <stdio.h>\nint fun(char *str1)\n{\nchar *str2 = str1;\nwhile(*++str1);\nreturn (str1-str2);\n}\nint main()\n{\nchar *str = \"GeeksQuiz\";\nprintf(\"%d\", fun(str));\nreturn 0;\n}\noptions\n1.10\n2.9 \n3.8\n4.random numbers\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[2])
            {
                printf("Correct\n");
                goto l5_4;
            }
            else
            {
                printf("wrong\n");
                goto l5_3;
            }
    l5_4:  printf("4. char c[] = \"GATE2011\";\nchar *p =c;\nprintf(\"%s\", p + p[3] - p[1]) ;\noptions\n1.GATE2011\n2.E2011\n3.2011\n4.011\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[3])
            {
                printf("Correct\n");
                goto l5_5;
            }
            else
            {
                printf("wrong\n");
                goto l5_4;
            }
    l5_5:  printf("5. #include<stdio.h>\nint main()\n{\nchar str[] = \"GeeksQuiz\";\nprintf(\"%s %s %sn\", &str[5], &5[str], str+5);\nprintf(\"%c %c %cn\", *(str+6), str[6], 6[str]);\nreturn 0;\n}\noptions\n1.RUNTIME ERROR\n2.COMPILER error\n3.uiz uiz uiz u u u\n4.Quiz Quiz Quiz u u u \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[4])
            {
                printf("Correct\n");
                goto l5_6;
            }
            else
            {
                printf("wrong\n");
                goto l5_5;
            }
    l5_6:  printf("6. #include <stdio.h>\nint main()\n{\nchar arr[] = \"GeeksQuiz\";\nprintf(\"%s\", ?);\nreturn 0;\n}\noptions\n1.arr\n2.(arr+5) \n3.(arr+4)\n4.Not possible\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[5])
            {
                printf("Correct\n");
                goto l5_7;
            }
            else
            {
                printf("wrong\n");
                goto l5_6;
            }
    l5_7: printf("7. #include<stdio.h>\nint main()\n{\nchar a[2][3][3] = {'g','e','e','k','s','q','u','i','z'};\nprintf(\"%s \", **a);\nreturn 0;\n}\noptions\n1.compiler error_category\n2.geeksquiz \n3.runtime error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[6])
            {
                printf("Correct\n");
                goto l5_8;
            }
            else
            {
                printf("wrong\n");
                goto l5_7;
            }
    l5_8: printf("8. #include <stdio.h>\nvoid my_toUpper(char* str, int index)\n{\n*(str + index) &= ~32;\n}\nint main()\n{\nchar* arr = \"geeksquiz\";\nmy_toUpper(arr, 0);\nmy_toUpper(arr, 5);\nprintf(\"%s\", arr);\nreturn 0;\n}\noptions\n1.Geeksquiz\n2.geeksquiz\n3.compiler dependent \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[7])
            {
                printf("Correct\n");
                goto l5_9;
            }
            else
            {
                printf("wrong\n");
                goto l5_8;
            }
    l5_9:  printf("9. #include <stdio.h>\nint main()\n{\nchar str[] = \"%d %c\", arr[] = \"GeeksQuiz\";\nprintf(str, 0[arr], 2[arr + 3]);\nreturn 0;\n}\noptions\n1. G Q\n2.71 81\n3.71 Q \n4.compiler time error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[8])
            {
                printf("Correct\n");
                goto l5_10;
            }
            else
            {
                printf("wrong\n");
                goto l5_9;
            }
    l5_10: printf("10 .#include<stdio.h>\nint main()\n{\nchar str[20] = \"GeeksQuiz\";\nprintf (\"%d\", sizeof(str));\nreturn 0;\n}\noptions\n1.10\n2.20 \n3.Garbage value\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[9])
            {
                printf("Correct\n");
                c_tokens();
            }
            else
            {
                printf("wrong\n");
                goto l5_10;
            }
}
