
int module_1()
{
    int o;
    while(1)
    {
        printf("\n----------MODULE-1----------\n");
        printf("1.C TOKENS\n2.VARIABLES\n3.CONSTANTS\n4.BACK TO MAIN MENU\n5.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:structure(); break;
            case 2:pointer(); break;
            case 4:return 0;
            case 5:exit(0);


            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}
