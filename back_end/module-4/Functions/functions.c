int functions()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn8();
        for(j=0;j<150;j++)  //delay  in sec
        delay();
        quiz8();
    }
    else
    {
    while (1)
    {
        printf("\n----------FUNCTIONS-----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn8();break;
            case 2:quiz8(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}