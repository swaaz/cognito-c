int module_3()
{
    int o;
    while(1)
    {
        printf("\n----------MODULE-4----------\n");
        printf("1.ARRAY AND STRINGS\n2.BACK TO MAIN MENU\n3.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:array_&_strings(); break;
            case 2:return 0;
            case 3:exit(0);
            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}