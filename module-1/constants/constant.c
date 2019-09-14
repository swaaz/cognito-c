int constants()
{
    int o;
    while (1)
    {
        printf("\n----------VARIABLES----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn3();break;
            case 2:quiz3(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
