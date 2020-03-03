int preprocessor_directives()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn11();
        for(j=0;j<150;j++)  //delay  in sec
        delay();
        quiz11();
    }
    else
    {
    while (1)
    {
        printf("\n----------PREPROCESSOR DIRECTIVES-----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn11();break;
            case 2:quiz11(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
