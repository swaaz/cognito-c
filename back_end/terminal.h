void reset()
{
    printf("\033[0m");
}

void color(int code)
{
    printf("\033[%d;1m", code);
}

void heading()
{
    color(96);
    printf("\n\n\n");
    printf("      _______      ________        ________    _____         ___ ____________  ___________    _________                 _______ \n");
    printf("     /  ___  \\    /  ____  \\      /  ____  \\  |     \\       |  ||____    ____||____   ____|  /  _____  \\               /  ___  \\\n");
    printf("    /  /   \\__\\  /  /    \\  \\    /  /    \\__\\ |  |\\  \\      |  |     |  |          |  |     /  /     \\  \\             /  /   \\__\\\n");
    printf("   /  /         /  /      \\  \\  /  /          |  | \\  \\     |  |     |  |          |  |    /  /       \\  \\   _____   /  /    \n");
    printf("  |  |         |  |       |  | |  |           |  |  \\  \\    |  |     |  |          |  |    |  |       |  |  |_____|  |  |     \n");
    printf("  |  |         |  |       |  | |  |   ______  |  |   \\  \\   |  |     |  |          |  |    |  |       |  |           |  |     \n");
    printf("  \\  \\         \\  \\       /  / \\  \\   |__   | |  |    \\  \\  |  |     |  |          |  |    \\  \\       /  /           \\  \\    \n");
    printf("   \\  \\    ___  \\  \\     /  /   \\  \\     /  / |  |     \\  \\ |  |     |  |          |  |     \\  \\     /  /             \\  \\    ___\n");
    printf("    \\  \\__/  /   \\  \\___/  /     \\  \\___/  /  |  |      \\  \\|  | ____|  |____      |  |      \\  \\___/  /               \\  \\__/  /  \n");
    printf("     \\______/     \\_______/       \\_______/   |__|       \\_____||____________|     |__|       \\_______/                 \\______/\n");
    printf("\n\n\n");
    reset();
}

void welcome()
{   
    print("\n\n");
    printf("  ____		    ____   _________   _____	      _________       _________      ________        _________    _________\n");
    printf("  \\   \\	    	   /   /  |   ______|  |   |  	     /   ___   \\     /   ___   \\    |        \\      /        |   |    _____|\n");
    printf("   \\   \\    /\\    /   /   |   |	       |   |        /   /   \\__/    /   /   \\   \\   |   |\\    \\    /    /|   |   |   |\n");
    printf("    \\   \\  /  \\  /   /	  |   |___     |   |	    |   |          |   |    |   |   |   | \\    \\  /    / |   |   |   |___\n");
    printf("     \\   \\/    \\/   /	  |    ___|    |   |        |   |          |   |    |   |   |   |  \\    \\/    /  |   |   |    ___|\n");
    printf("      \\     /\\     /      |   |        |   |        |   |    __    |   |    |   |   |   |   \\        /   |   |   |   |\n");
    printf("       \\   /  \\   /       |   |_____   |   |_____   \\   \\___/  \\   \\   \\____/   /   |   |    \\      /    |   |   |   |_____\n");
    printf("        \\_/    \\_/        |_________|  |_________|   \\_________/    \\__________/    |___|     \\____/     |___|   |_________|\n");
    print("\n\n");
}

void mod_1()
{
    print("\n\n");
    printf("  _______     ______     _______     ________    ____    ____   ____         _________        _______\n");
    printf("  |     \\    /     |    /  ___  \\   |   ___  \\   |  |    |  |   |  |         |  _____|       /___   |\n");
    printf("  |  |\\  \\  /  /|  |   /  /   \\  \\  |   |  \\  \\  |  |    |  |   |  |         |  |__      __      |  |\n");
    printf("  |  | \\  \\/  / |  |   |  |   |  |  |   |  |  |  |  |    |  |   |  |         |   __|    |__|     |  |\n");
    printf("  |  |  \\    /  |  |   |  \\___/  |  |   |__/  /  |  \\____/  |   |  |_____    |  |____        ____|  |__\n");
    printf("  |__|   \\__/   |__|    \\_______/   |________/   \\__________/   |________|   |_______|      |_________|\n");
    print("\n\n");
}

void mod_2()
{
    print("\n\n");
    printf("  _______     ______     _______     ________    ____    ____   ____         _________         _______\n"); 
    printf("  |     \\    /     |    /  ___  \\   |   ___  \\   |  |    |  |   |  |         |  _____|        /______ \\\n");
    printf("  |  |\\  \\  /  /|  |   /  /   \\  \\  |   |  \\  \\  |  |    |  |   |  |         |  |__      __    _____| |\n");
    printf("  |  | \\  \\/  / |  |   |  |   |  |  |   |  |  |  |  |    |  |   |  |         |   __|    |__|  /  _____/\n");
    printf("  |  |  \\    /  |  |   |  \\___/  |  |   |__/  /  |  \\____/  |   |  |_____    |  |____         | |_____\n");
    printf("  |__|   \\__/   |__|    \\_______/   |________/   \\__________/   |________|   |_______|        |_______|\n");
    print("\n\n");
}

void mod_3()
{
    print("\n\n"); 
    printf("  _______     ______     _______     ________    ____    ____   ____         _________         _______\n");
    printf("  |     \\    /     |    /  ___  \\   |   ___  \\   |  |    |  |   |  |         |  _____|        |______ |\n");
    printf("  |  |\\  \\  /  /|  |   /  /   \\  \\  |   |  \\  \\  |  |    |  |   |  |         |  |__      __       __| |\n");
    printf("  |  | \\  \\/  / |  |   |  |   |  |  |   |  |  |  |  |    |  |   |  |         |   __|    |__|     |__  |\n");
    printf("  |  |  \\    /  |  |   |  \\___/  |  |   |__/  /  |  \\____/  |   |  |_____    |  |____          _____| |\n");
    printf("  |__|   \\__/   |__|    \\_______/   |________/   \\__________/   |________|   |_______|        |_______|\n");
    print("\n\n"); 
}

void mod_4()
{
    print("\n\n");
    printf("  _______     ______     _______     ________    ____    ____   ____         _________           ____\n");
    printf("  |     \\    /     |    /  ___  \\   |   ___  \\   |  |    |  |   |  |         |  _____|          / _  |\n");
    printf("  |  |\\  \\  /  /|  |   /  /   \\  \\  |   |  \\  \\  |  |    |  |   |  |         |  |__      __    / /_| |__\n");
    printf("  |  | \\  \\/  / |  |   |  |   |  |  |   |  |  |  |  |    |  |   |  |         |   __|    |__|  /____   __|\n");
    printf("  |  |  \\    /  |  |   |  \\___/  |  |   |__/  /  |  \\____/  |   |  |_____    |  |____              | |\n");
    printf("  |__|   \\__/   |__|    \\_______/   |________/   \\__________/   |________|   |_______|             |_|\n");
    print("\n\n");

}

void mod_5()
{
    print("\n\n");
    printf("  _______     ______     _______     ________    ____    ____   ____         _________         _______\n");
    printf("  |     \\    /     |    /  ___  \\   |   ___  \\   |  |    |  |   |  |         |  _____|        |  _____|\n");
    printf("  |  |\\  \\  /  /|  |   /  /   \\  \\  |   |  \\  \\  |  |    |  |   |  |         |  |__      __   | |_____\n");
    printf("  |  | \\  \\/  / |  |   |  |   |  |  |   |  |  |  |  |    |  |   |  |         |   __|    |__|  |_____  \\\n");
    printf("  |  |  \\    /  |  |   |  \\___/  |  |   |__/  /  |  \\____/  |   |  |_____    |  |____          _____| |\n");
    printf("  |__|   \\__/   |__|    \\_______/   |________/   \\__________/   |________|   |_______|        |_______/\n");
    print("\n\n");
}