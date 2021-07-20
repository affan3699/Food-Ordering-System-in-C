#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int total = 0;
int numberOfItems = 0;
int count = 1;
void welcome();
void pakistanMenu();
void chineseMenu();
void continentalMenu();
void loginSystem();
void mainMenu();
void cuisineMenu();
void contactUS();
int valid1to9(int x);
void previousRecord();
int orderDetails(int option, int quantity, int menuOption);
int serving(int option, int numberOfItems);
void filing(int menuOption,int option,int quantity,int currentTotal);
void changeCount (char name[], int size);
void azeemBhai();

int main()
{
    azeemBhai();
    //loginSystem();
    return 0;
}

void azeemBhai ()
{
system("COLOR B0");
printf("   __________           _____________        _______________        ________________       ___              ___ \n");
printf("  /          \\         |             /      |               |      |                |     |   \\            /   |\n");
printf(" /    ____    \\        |_______     /       |     __________|      |      __________|     |    \\          /    |\n");
printf("/    |    |    \\              /    /        |    |_________        |     |_________       |     \\        /     |\n");
printf("|    |____|    |             /    /         |              |       |               |      |      \\      /      |\n");
printf("|              |            /    /          |     _________|       |     __________|      |       \\    /       |\n") ;
printf("|      __      |           /    /           |    |                 |    |                 |   |\\   \\__/   /|   | \n") ;
printf("|     /  \\     |          /    /_____       |    |__________       |    |___________      |   | \\        / |   | \n") ;
printf("|    /    \\    |         /           |      |               |      |                |     |   |  \\      /  |   | \n");
printf("|___/      \\___|        /____________|      |_______________|      |________________|     |___|   \\____/   |___|  \n") ;

printf("\t\t\t   _____________       ____        ____       __________       ____ \n");
printf("\t\t\t  |   _____     |     |    |      |    |     /          \\     |    |\n");
printf("\t\t\t  |  |     |    /     |    |      |    |    /    ____    \\    |    |\n");
printf("\t\t\t  |  |     |    /     |    |______|    |   /    |    |    \\   |    |\n");
printf("\t\t\t  |  |_____|   /      |                |   |    |____|    |   |    |\n");
printf("\t\t\t  |   _____    \\      |                |   |              |   |    |\n");
printf("\t\t\t  |  |     |    \\     |     ______     |   |      ___     |   |    |\n");
printf("\t\t\t  |  |     |     \\    |    |      |    |   |     /   \\    |   |    |\n");
printf("\t\t\t  |  |_____|     |    |    |      |    |   |    /     \\   |   |    |\n");
printf("\t\t\t  |______________|    |____|      |____|   |___/       \\__|   |____|\n");

getch();
loginSystem();

}

int serving(int option, int numberOfItems)
{
    int phoneNumber = 0;
    FILE *fptr;
    FILE *fptr2;
    char name[41];
    int servingOption = -1;
    char address[31];

    printf("\nPlease Enter Your Name : ");
    getchar();
    gets(name);
    system("cls");

    printf("\n");
    printf("************************************ Select Serving **************************************\n");
    printf("************* We Offer Varieties Of Serving-Options.That You Can Choose From *************\n");
    printf("[1]Take Away\n");
    printf("[2]Dine In\n");
    printf("[3]Free-Delivery\n");
    printf("[0]Go Back\n");
    printf("\nEnter Option : ");
    scanf("%d",&servingOption);

    if(servingOption == 0)
    {
        cuisineMenu();
    }

    else if(servingOption == 1 || servingOption == 2)
    {
        system("cls");
        printf("*********************************** RECIEPT ***********************************\n");
        printf("\nCurrent Total : %d\n",total);
        changeCount(name,41);
    }

    else if(servingOption == 3)
    {
        system("cls");
        printf("*********************************** RECIEPT ***********************************\n");
        printf("\nEnter Your Phone Number : ");
        scanf("%d",&phoneNumber);
        printf("\nEnter Address : ");
        getchar();
        gets(address);
        printf("\nCurrent Total : %d\n",total);
        changeCount(name,41);

    }


}

int orderDetails(int option, int quantity, int menuOption)
{

    char temp;
    char name[41];
    int currentTotal = 0;

    if(option == 1)
    {
        total = total + (quantity * 180);
        currentTotal = quantity * 180;
    }

    else if(option == 2)
    {
          total = total + (quantity * 1000);
          currentTotal = quantity * 1000;
    }

    else if(option == 3)
    {
         total = total + (quantity * 790);
         currentTotal = quantity * 790;
    }

    else if(option == 4)
    {
         total = total + (quantity * 250);
         currentTotal = quantity * 250;
    }

    else if(option == 5)
    {
         total = total + (quantity * 500);
         currentTotal = quantity * 500;
    }

    else if(option == 6)
    {
          total = total + (quantity * 240);
          currentTotal = quantity * 240;
    }

    else if(option == 7)
    {
         total = total + (quantity * 180);
         currentTotal = quantity * 180;

    }

    else if(option == 8)
    {
          total = total + (quantity * 65);
          currentTotal = quantity * 65;
    }

    else if(option == 9)
    {
          total = total + (quantity * 70);
          currentTotal = quantity * 70;
    }

    else if(option == 10)
    {
          total = total + (quantity * 590);
          currentTotal = quantity * 590;
    }

    filing(menuOption,option,quantity,currentTotal);
    
    numberOfItems = numberOfItems + quantity;

    printf("Do you want to order anything else?(y/n) :  ");
    scanf(" %c", &temp);

    if (temp == 'y' || temp == 'Y')
    {
        cuisineMenu() ;
    }

    else if (temp == 'n' || temp == 'N')
    {
        serving(option, numberOfItems);
    }

    else
    {
        printf("Invalid Input!");
        orderDetails(option, quantity,menuOption);
    }

}

void loginSystem()
{
    system("COLOR FC");
    int validPass = 1;
    int validUser = 1;

    char userName[12];
    char passWord[12];
    int i = 0;
    char savedUser[12] = "affan";
    char savedPass[12] = "hasan";
    char yesORno;
    char c;

    printf("\n\t\t\t========================  LOGIN   ========================  ");
    printf("\n\t\t\t            USERNAME:-");
    scanf("%s", userName);
    printf("\n\t\t\t            PASSWORD:-");

    while(i<12)
    {
        passWord[i] = getch();
        c = passWord[i];
        if(c == 13)
        {
           break;
        }
        else
        {
            printf("*");
        }
        i++;
    }
    passWord[i]='\0';
    i = 0;
    while(userName[i] != '\0')
    {
        if (userName[i] != savedUser[i])
        {
            validUser = 0;
        }
        i++;
    }
    i = 0;
    while(passWord[i] != '\0')
    {
        if(passWord[i] != savedPass[i])
        {
            validPass = 0;
        }
        i++;
    }

    if(validPass == 1 && validUser == 1)
    {
        void azeemBhai();
        welcome();
    }

    else
    {
        printf("\nUsername or Password Incorrect.\n");
        printf("Do you want to re-enter? (y/n): ");
        scanf(" %c",&yesORno);
        if(yesORno == 'y' || yesORno == 'Y')
        {
            system("cls");
            loginSystem();
        }
        else if (yesORno == 'n' || yesORno == 'N')
        {
            printf("program will terminate.");
            getch();
        }
    }
}

void welcome()
{
    system("cls");
    system("COLOR B0");
    time_t t;
    time(&t);
    printf("                                                                                                         \n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t%s",ctime(&t));
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t==================================\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t|   ***AZEEM BHAI RESTAURANT***\t |\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t==================================\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t      \"WE BELIEVE IN QUALITY\"\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|Press key...                      \t\t\t\t\t\t\t\t\t\t|\n");

    printf("-----------------------------------------------------------------------------------------------------------------\n");
    getch();
    mainMenu();

}

void pakistanMenu()
{
    int menuOption = 1;
    int option = -1;
    int valid = 0;
    int quantity = 0;
    char yesOrNo;
    system("cls");
    printf("\n");
    printf("\t\t***********************************PAKISTANI MENU***********************************\n");
    printf("\n");
    printf("\t\t\tItem Code#..........Description---------------------Price(RS)\n");
    printf("\t\t\t[1]-----------------Burger---------------------------180\n");
    printf("\t\t\t[2]-----------------Chicken Karahi-------------------1000\n");
    printf("\t\t\t[3]-----------------Fried Chicken--------------------790\n");
    printf("\t\t\t[4]-----------------Chicken Nihari-------------------250\n");
    printf("\t\t\t[5]-----------------Chicken Tikka--------------------500\n");
    printf("\t\t\t[6]-----------------Halwa Puri-----------------------240\n");
    printf("\t\t\t[7]-----------------Biryani--------------------------180\n");
    printf("\t\t\t[8]-----------------Haleem---------------------------65\n");
    printf("\t\t\t[9]-----------------Pulao----------------------------70\n");
    printf("\t\t\t[10]----------------Zinger Burger--------------------590\n\n");
    printf("\t\t\t[0]-----------------GO BACK -------------------------\n");

    printf("Enter Item Code : ");
    scanf("%d",&option);

    valid = valid1to9(option); //---------------------------------------------------------------------Validation

    if(valid == 1)
    {
        pakistanMenu();
    }
        if(option > 0 || option < 11 )
        {
            if (option == 0)
            {
                cuisineMenu();
            }
            else
            {
                printf("Enter Quantity: ");
                scanf("%d",&quantity);
                orderDetails(option,quantity, menuOption);
            }
        }

}
void chineseMenu()
{
    int menuOption = 2;
    int option = -1;
    int valid = 0;
    int quantity = 0 ;
    system("cls");
    printf("\t\t***********************************CHINESE MENU***********************************\n");
    printf("\n");
    printf("\t\t\tItem Code#..........Description---------------------Price(RS)\n");
    printf("\t\t\t[1]-----------------Kung Pao Chicken----------------180\n");
    printf("\t\t\t[2]-----------------ChowMein------------------------1000\n");
    printf("\t\t\t[3]-----------------Dumplings-----------------------790\n");
    printf("\t\t\t[4]-----------------Ma Po Tofu----------------------250\n");
    printf("\t\t\t[5]-----------------Wontons-------------------------500\n");
    printf("\t\t\t[6]-----------------Spring Rolls--------------------240\n");
    printf("\t\t\t[7]-----------------Quick Noodles-------------------180\n");
    printf("\t\t\t[8]-----------------Chicken Fried Rice--------------65\n");
    printf("\t\t\t[9]-----------------Hot and Sour Soup---------------70\n");
    printf("\t\t\t[10]----------------Chicken Manchuriun--------------590\n\n");
    printf("\t\t\t[0]-----------------GO BACK --------------------------\n");

    printf("Enter Item Code : ");
    scanf("%d",&option);

    valid = valid1to9(option); //---------------------------------------------------------------------Validation--------

        if(valid == 1)
        {
            chineseMenu();
        }
          if(option > 0 || option < 11 )
        {
            if (option == 0)
            {
                cuisineMenu();
            }
            else
            {
                printf("Enter Quantity: ");
                scanf("%d",&quantity);
                orderDetails(option,quantity, menuOption);
            }
        }
}

void continentalMenu()
{
    int menuOption = 3;
    int option = -1;
    int valid = 0;
    int quantity = 0;
    system("cls");
    printf("\t\t***********************************CONTINENTAL MENU***********************************\n");
    printf("\n");
    printf("\t\t\tItem Code#..........Description---------------------Price(RS)\n");
    printf("\t\t\t[1]-----------------Yorkshire Lamb Patties----------180\n");
    printf("\t\t\t[2]-----------------Chicken And Cheese Salad--------1000\n");
    printf("\t\t\t[3]-----------------Baked Potato And Aubergines-----790\n");
    printf("\t\t\t[4]-----------------Apple Sausage Plait-------------250\n");
    printf("\t\t\t[5]-----------------Paneer Steak--------------------500\n");
    printf("\t\t\t[6]-----------------Batter Fried Fish---------------240\n");
    printf("\t\t\t[7]-----------------BLT Eggy Bread------------------180\n");
    printf("\t\t\t[8]-----------------Rosemary Chicken----------------65\n");
    printf("\t\t\t[9]-----------------Grilled Chicken-----------------70\n");
    printf("\t\t\t[10]----------------Coronation Chicken--------------590\n\n");
    printf("\t\t\t[0]-----------------GO BACK --------------------------\n");


     printf("Enter Item Code : ");
     scanf("%d",&option);

        valid = valid1to9(option); //---------------------------------------------------------------------Validation

        if(valid == 1)
        {
            continentalMenu();
        }
          if(option > 0 || option < 11 )
        {
            if (option == 0)
            {
                cuisineMenu();
            }
            else
            {
                printf("Enter Quantity: ");
                scanf("%d",&quantity);
                orderDetails(option,quantity, menuOption);
            }
        }
}


void mainMenu()
{
    int option = -1;

    system("cls");
    printf("\n");
    printf("*********************************** MAIN MENU ***********************************\n");
    printf("[1]Place Order-------------------------------\n");
    printf("[2]Contact Us--------------------------------\n");
    printf("[3]Previous Orders---------------------------\n");
    printf("[0]Exit--------------------------------------\n");
    printf("\nSelect Option: ");

    scanf("%d", &option);

    while(option > 3 || option < 0)
    {
        printf("Invalid Input, Please re-enter! : ");
        scanf("%d", &option);
    }

    if(option == 1)
    {
        cuisineMenu();
    }

    else if(option == 2)
    {
        contactUS();
    }

    else if(option == 3)
    {
        previousRecord();
    }
    else if(option == 0)
    {
        printf("Program will terminate.");
    }

}

void cuisineMenu()
{
    int option = -1;

    system("cls");
    printf("\n");
    printf("*********************************** Select Cusine ***********************************\n");
    printf("   ************* We Offer varieties of food.That you can choose from *************\n");
    printf("[1]Pakistani\n");
    printf("[2]Chinese\n");
    printf("[3]Continental\n");
    printf("[0]Go Back\n");
    printf("\nEnter Option : ");

    scanf("%d", &option);

    while(option > 3 || option < 0)
    {
        printf("Invalid Input, Please re-enter! : ");
        scanf("%d", &option);
    }


    if(option == 1)
    {
        pakistanMenu();
    }

    else if(option == 2)
    {
        chineseMenu();
    }

    else if(option == 3)
    {
        continentalMenu();
    }

    else if(option == 0)
    {
        mainMenu();
    }

}
void contactUS()
{
    system("cls");
    printf("\t\t\t************** OUR PLAN****************\n\n");
    printf("Our founder, AZEEM BHAI , had an idea to create a restaurant that was more than a place that served great food.\n");
    printf("AZEEM wanted to give locals a place where they'd always feel at home.\n");
    printf("A place where they could get no-nonsense food at down-to-earth prices, and where they'd be treated right by people who had a passion to serve.\n");
    printf("The culture at the AZEEM BHAI Restaurants was instilled by AZEEM BHAI long before a mission statement was ever written down on paper and is still evident today.\n");
    printf("At the AZEEM BHAI, guests, team members and community are all treated with respect.\n\n\n\n");
    printf("\t\t\t************* Credits ****************\n");
    printf("This program is made by the following people:\n");
    printf("Muhammad Shayan Frooqui      CS-181106\n");
    printf("Muhammad Faiz Naveed         CS-181098\n");
    printf("Mohammad Affan Murtaza       CS-181099\n");
    printf("\nPress any key to go back");
    getch();
    mainMenu();
}

int valid1to9(int x)
{
    int valid = 0;
    if(x > 10 || x < 0)
    {
        printf("Invalid Input, Please re-enter!\n");
        valid = 1;
        getch();
    }
    return valid;
}

void previousRecord()
{
    system("cls");
    FILE *fptr;
    char ch;

    fptr = fopen("record.txt","r");

    if(fptr == NULL)
    {
        printf("\nError: File Does Not Exist");
    }

    while((ch = getc(fptr)) != EOF)
    {
        printf("%c",ch);
    }


    printf("\n\nPress any key to go back..\n");

    getch();

    mainMenu();

    fclose(fptr);
}

void filing(int menuOption,int option,int quantity, int currentTotal)
{

        time_t t;
        time(&t);
        FILE *fptr;
        FILE *fptr2;
        char product[30];
        int characterFFILE = 0;
        int i = 0 ;


    if (menuOption == 1 )
    {

        fptr = fopen("pakistaniMenu.txt","r");
        fptr2 = fopen("record.txt","a");

        if(fptr == NULL)
        {
            printf("Null");
        }

        for(i = 0 ; i< 10 ; i++ )
        {
            fscanf(fptr,"%d",&characterFFILE);
            fscanf(fptr,"%s",product);
            if( characterFFILE == option)
            {
                fprintf(fptr2,"\n%d\t",count);
                fprintf(fptr2,"%s",product);
                fprintf(fptr2,"\t\t%d",quantity);
                fprintf(fptr2,"\t%d$",currentTotal);
                fprintf(fptr2,"\t%s",ctime(&t));
            }

        }
    }
    else if (menuOption == 2 )
    {

        fptr = fopen("chineseMenu.txt","r");
        fptr2 = fopen("record.txt","a");

        if(fptr == NULL)
        {
            printf("Null");
        }

        for(i = 0 ; i< 10 ; i++ )
        {
            fscanf(fptr,"%d",&characterFFILE);
            fscanf(fptr,"%s",product);
            if( characterFFILE == option)
            {
                fprintf(fptr2,"\n%d\t",count);
                fprintf(fptr2,"%s",product);
                fprintf(fptr2,"\t\t%d",quantity);
                fprintf(fptr2,"\t%d$",currentTotal);
                fprintf(fptr2,"\t%s",ctime(&t));
            }

        }
    }

    else if (menuOption == 3 )
    {

        fptr = fopen("continentalMenu.txt","r");
        fptr2 = fopen("record.txt","a");

        if(fptr == NULL)
        {
            printf("Null");
        }

        for(i = 0 ; i< 10 ; i++ )
        {
            fscanf(fptr,"%d",&characterFFILE);
            fscanf(fptr,"%s",product);
            if( characterFFILE == option)
            {
                fprintf(fptr2,"\n%d\t",count);
                fprintf(fptr2,"%s",product);
                fprintf(fptr2,"\t\t%d",quantity);
                fprintf(fptr2,"\t%d$",currentTotal);
                fprintf(fptr2,"\t%s",ctime(&t));
            }

        }
    }


    count++;
    fclose(fptr);
    fclose(fptr2);
}

void endingMsg()
{
    char yesORno;
    system("cls");
    printf("*******Thank you for choosing us*******\n");
    printf("************ENJOY YOUR MEAL************\n\n\n");
    printf("This program is made by the following people:\n");
    printf("Muhammad Shayan Frooqui      CS-181106\n");
    printf("Muhammad Faiz Naveed         CS-181098\n");
    printf("Mohammad Affan Murtaza       CS-181099\n\n\n\n");


    printf("Make New Order (y/n): ");
    scanf(" %c",&yesORno);

    if(yesORno == 'y' || yesORno == 'Y')
        {
            mainMenu();
        }
        else if (yesORno == 'n' || yesORno == 'N')
        {
            printf("Program will terminate.\n");
        }


}
void changeCount (char name[], int size)
{


    int customerPays = 0;
    int change = 0;
    int rs500 = 0;
    int rs1000 = 0;
    int rs01 = 0;
    int rs100 = 0;
    int rs50 = 0;
    int rs10 = 0;
    int rs05 = 0;
    int rs02 = 0;
    int totalNumberOfRupeeNotes = 0;

    level:
    printf("Enter Amount : ");
    scanf("%d",&customerPays);
    if(customerPays < total)
    {
        printf("Amount less than total bill.\n\n");
        goto level;
    }
        change = customerPays - total;

        rs1000 = change / 1000;
        change = change % 1000;

        rs500 = change / 500;
        change = change % 500;

        rs100 = change / 100;
        change = change % 100;

        rs50 = change / 50;
        change = change % 50;

        rs10 = change / 10;
        change = change % 10;

        rs05 = change / 5;
        change = change % 5;

        rs02 = change / 2;
        change = change % 2;

        rs01 = change / 1;
        change = change % 1;

        totalNumberOfRupeeNotes = rs01 + rs02 + rs05 + rs10 + rs50 + rs100 + rs500 + rs1000;

        printf("OrderNo : %d",count);
        printf ("\nNumber of food ordered %d\n",numberOfItems);
        printf ("\nThank you %s for your order. Your Total Bill is %dRs.\n",name, total);
        printf("\nRs 1 Notes : %d ",rs01);
        printf("\nRs 2 Notes : %d ",rs02);
        printf("\nRs 5 Notes : %d ",rs05);
        printf("\nRs 10 Notes : %d ",rs10);
        printf("\nRs 50 Notes : %d ",rs50);
        printf("\nRs 100 Notes : %d ",rs100);
        printf("\nRs 500 Notes : %d ",rs500);
        printf("\nRs 1000 Notes : %d ",rs1000);
        getch();
        endingMsg();
}