#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <stdlib.h> ///system() is a library function of stdlib.
#include <conio.h>
#include <time.h>

struct Album /// ITS A STRUCT DATATYPE.
{
    char year[20];
    char name[30];
    char artist[30];
    float price;
} s; /// S IS GLOBAL VARIABLE OF STRUCT DATATYPE.

/// HERE CALLING ALL THE FUNCTION.

void welcome();

void login();

void menu(); /// AUTHOR: YASMIN SULTANA EMU

void addnewalbum(); /// AUTHOR: ARIFUL ISLAM MOHSIN

void editalbum(); /// AUTHOR: ARNOB HALDER

void viewalbum(); /// AUTHOR: ARNOB HALDER

void searchalbum(); /// AUTHOR: YASMIN SULTANA EMU

void deletealbum(); /// AUTHOR: ARIFUL ISLAM MOHSIN

int main()
{
    /// printf("Hello world!\n");

    system("color D");

    welcome(); /// HERE WE ARE CALLING WELCOME AND LOGIN THE FUNCTION TO THE MAIN FUNCTION
    login();

    return 0;
}

void welcome()
{
    int i;
    time_t t;          /// not a primitive datatype
    time(&t);          /// save the adress  of t
    system("color D"); /// cng the color for consol

    printf("\n");
    printf("\n");
    printf("\n");

    printf("\n               ***********************************************          ");
    printf("\n               *                                             *          ");
    printf("\n               *             HELLO DEAR LISTENERS            *          ");
    printf("\n               *                                             *          ");
    printf("\n               *                                             *          ");
    printf("\n               *                 WELCOME TO                  *          ");
    printf("\n               *                                             *          ");
    printf("\n               *          | THE MELODY ENCHANTMENT |         *          ");
    printf("\n               *                                             *          ");
    printf("\n               *                                             *          ");
    printf("\n               *                                             *          ");
    printf("\n               *     YOUR EVERYDAY MUSIC TRACKING COMPANION  *          ");
    printf("\n               *                                             *          ");
    printf("\n               *                                             *          ");
    printf("\n               *         PRESS ENTER KEY TO CONTINUE.        *          ");
    printf("\n               *                                             *          ");
    printf("\n               ***********************************************          ");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Current Date & Time : %s", ctime(&t)); // ctime() predefine  function

    getchar(); /// getchar() is can read from any input stream.
               /// getchar() reads from standard input.

    system("cls"); /// system() is a library function of stdlib. h header file. This function is used to run system/
                   /// command prompt commands and here cls is a command to clear the output screen
}

void login()
{
    char name[20];
    char pass[20];
    char username[20] = "SNS1";
    char password[20] = "CSE115";
    system("color D");

    int i, j;

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n               ***********************************************     ");
    printf("\n               *          | THE MELODY ENCHANTMENT |         *     ");
    printf("\n               *                                             *     ");
    printf("\n               *                   LOGIN MENU                *     ");
    printf("\n               *                                             *     ");
    printf("\n               ***********************************************  \n ");
    printf("\n  Username  :");
    scanf("%s", &name);
    printf("\n");
    printf("\n  Password  :");
    scanf("%s", &pass);

    if (strcmp(name, username) == 0 && strcmp(pass, password) == 0)
    {
        system("cls");
        printf("\n");
        printf("\n");

        printf("\n");

        printf("\n               ***********************************************          ");
        printf("\n               *                                             *          ");
        printf("\n               *                                             *          ");
        printf("                 *        WELCOME ENJOYER !                    *           ");
        printf("\n               *                                             *          ");
        printf("\n               *       YOU HAVE JUST  ENTERED THE BEUTIFUL   *           ");
        printf("\n               *                                             *          ");
        printf("\n               *          MELODY WORLD.                      *          ");
        printf("\n               *                                             *          ");
        printf("\n               *                                             *          ");
        printf("\n               *        PRESS ENTER Key to CONTINUE.         *          ");
        printf("\n               *                                             *          ");
        printf("\n               ***********************************************          ");

        printf("\n");

        printf("\n");
    }
    else
    {

        printf("\n               *************************************************          ");
        printf("\n               *                                               *          ");
        printf("\n               *             APOLOGISE FOR THE INCONVENIENT ,  *          ");
        printf("\n               *                                               *          ");
        printf("\n               *  THE USERNAME AND PASSWORD YOU ENTERED        *          ");
        printf("\n               *                                               *          ");
        printf("\n               *                   DON'T MATCH.                *          ");
        printf("\n               *                                               *          ");
        printf("\n               *             PLEASE GIVE ANOTHER TRY!!!        *          ");
        printf("\n               *                                               *          ");
        printf("\n               *************************************************          ");

        getch(); /// getch() is a nonstandard function and is present in conio.h header file
                 /// it reads also a single character from keyboard.
                 ///  But it does not use any buffer,
                 /// so the entered character is immediately returned without waiting for the enter key.

        system("cls");
        /// system() is a library function of stdlib. h header file. This function is used to run system/
        /// command prompt commands and here cls is a command to clear the output screen

        login();
    }

    void menu();
    {
        time_t t;
        time(&t);
        int Password;
        char choice;
        system("cls");
        while (1)
        {
            system("COLOR D");
            system("cls");
            printf("\n");
            printf("\n               *************************************************                ");
            printf("\n");
            printf("\n                           ||  THE MELODY ENCHANTMENT    ||                     ");
            printf("\n");
            printf("\n                                 *MENU*                                         ");

            printf("\n\n                       PRESS  1 :  >> ADD NEW ALBUM                           ");

            printf("\n\n                       PRESS  2 :  >> EDIT EXISTING ALBUM                     ");

            printf("\n\n                       PRESS  3 :  >> VIEW ALBUMS                             ");

            printf("\n\n                       PRESS  4 :  >> SEARCH ALBUMS                           ");

            printf("\n\n                       PRESS  5 :  >> DELETE ALBUM                            ");

            printf("\n\n                       PRESS  6 :  >> EXIT.                                   ");

            printf("\n               *************************************************                ");

            printf("\n\n");

            choice = getch(); /// getch() is a nonstandard function and is present in conio.h header file
                              /// it reads also a single character from keyboard.
                              ///  But it does not use any buffer,
                              /// so the entered character is immediately returned without waiting for the enter key.
            choice = toupper(choice);
            switch (choice)

            {
            case '1':
                addnewalbum();
                break;
            case '2':
                editalbum();
                break;
            case '3':
                viewalbum();
                break;
            case '4':
                searchalbum();
                break;
            case '5':
                deletealbum();
                break;
            case '6':

                system("cls");

                printf("\n               ***********************************************     ");
                printf("\n               *          | THE MELODY ENCHANTMENT |         *     ");
                printf("\n               *                                             *     ");
                printf("\n               *            :-)  THANK YOU !!                *     ");
                printf("\n               *                                             *     ");
                printf("\n               ***********************************************  \n ");

                printf("\n\n                                                         ");

                Sleep(2000); /// function in order to wait for a current thread for a specified time(2000 SEC).

                exit(0); /// Exit Success is indicated by exit(0) statement which means successful termination of the program
                break;
            default:
                system("cls");

                printf("INVALID KEYWORD. PLEASE ENTER A VALID KEYWORD TO CHOOSE. ");

                printf("\nPRESS ANY KEY TO CONTINUE..........");

                getch(); /// getch() is a nonstandard function and is present in conio.h header file
                         /// it reads also a single character from keyboard.
                         ///  But it does not use any buffer,
                         /// so the entered character is immediately returned without waiting for the enter key.
            }
        }
    }
}

void addnewalbum()
{
    FILE *Album;

    char test;

    Album = fopen("Album.txt", "a");
    if (Album == 0)
    {
        Album = fopen("Album.txt", "w");
        system("cls");
        getch(); /// getch() is a nonstandard function and is present in conio.h header file
                 /// it reads also a single character from keyboard.
                 ///  But it does not use any buffer,
                 /// so the entered character is immediately returned without waiting for the enter key.
    }
    while (1)
    {
        system("cls");

        printf("\n ENTER THE ALBUM NAME: ");
        fflush(stdin);
        scanf("%[^\n]", &s.name); /// string can get with spaces using scanf only,
                                  /// print the whole string using printf,
                                  /// but in scanf in format specifier we place �Scansets�([^\n]).

        printf("\nENTER THE ALBUM YEAR: ");
        scanf("%s", &s.year);

        printf("\nENTER THE ALBUM ARTIST NAME: ");
        fflush(stdin);
        scanf("%[^\n]", &s.artist);

        printf("\nENTER THE ALBUM PRICE COSTING: ");
        scanf("%f", &s.price);

        fwrite(&s, sizeof(s), 1, Album);
        fflush(stdin);

        system("cls");

        printf("\n\n");

        printf("   * THE ENTERED ALBUM IS SUCCEESSFULLY DOCUMANTED. \n\n");

        printf("\n     * PRESS any KEY to CONTINUE........ ");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                PRESS ESC TO RETURN BACK TO THE MENU .........");

        test = getche();

        if (test == 27) /// 27 IS THE ASCII VALUE OF ESC.

            break;
    }
    fclose(Album);
}

void editalbum()
{
    FILE *Album;

    char test;

    char year[20];

    long int size = sizeof(s);

    if ((Album = fopen("Album.txt", "r+")) == NULL) /// Opens a text file for both reading and writing
    {
        exit(0);
    }

    system("cls");

    printf("ENTER THE EXISTING ALBUM YEAR TO EDIT AS YOUR WISH :");

    scanf("%[^\n]", year);

    fflush(stdin);

    while (fread(&s, sizeof(s), 1, Album) == 1)

    {
        if (strcmp(s.year, year) == 00)
        {
            system("cls");

            printf("\n ENTER YOUR WISHING ALBUM YEAR: ");

            scanf("%s", &s.year);

            printf("\n ENTER THE NEW ALBUM NAME: ");

            fflush(stdin);

            scanf("%[^\n]", &s.name);

            printf("\n ENTER THE NEW ALBUM ARTIST NAME : ");

            fflush(stdin);

            scanf("%[^\n]", &s.artist);

            printf("\n ENTER THE NEW ALBUM PRICE COSTING: ");

            scanf("%f", &s.price);

            fseek(Album, -size, SEEK_CUR); /// identifying the cursor position

            fwrite(&s, sizeof(s), 1, Album);

            fflush(stdin);

            system("cls");

            // break;

            printf("\n\n");

            printf("   *ALBUM IS SUCCESSFULLY EDITED AND CHANGED AS YOUR WISHES. \n\n");

            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                           PRESS ESC TO RETURN BACK TO THE MENU .........");

            test = getche(); /// this is also a non-standard function present in conio.h.
                             /// It reads a single character from the keyboard and displays immediately
            /// on output screen without waiting for enter key.

            if (test == 27)
                break;
        }
    }
    fclose(Album);
}

void viewalbum()
{
    FILE *Album;
    int i, j;
    if ((Album = fopen("Album.txt", "r")) == NULL)
        exit(0);
    system("cls");
    printf("  ALBUM YEAR\t  ALBUM NAME\t                    ALBUM ARTIST\t          ALBUM PRICE COSTING\n");
    printf("---------------------------------------------------------------------------------------------------------");
    while (fread(&s, sizeof(s), 1, Album) == 1)
    {
        printf("\n %-10s        %-20s           %-15s               MRP. %.2f/-", s.year, s.name, s.artist, s.price);
    }
    printf("\n");
    printf("---------------------------------------------------------------------------------------------------------");

    printf("\n\n\n\n\n\n\n\n\n\nPRESS ANY KEY TO RETURN BACK TO MAIN MENU .......");

    fclose(Album);

    getch(); /// getch() is a nonstandard function and is present in conio.h header file
             /// it reads also a single character from keyboard.
    /// But it does not use any buffer,
    /// so the entered character is immediately returned without waiting for the enter key.
}

void searchalbum()
{
    FILE *Album;

    char year[20];

    int flag = 1;

    Album = fopen("Album.txt", "r+");

    if (Album == 0)

    {
        exit(0);
    }
    fflush(stdin);

    system("cls");

    printf("\nSEARCH FOR THE ALBUM YOU DESIRE  ");

    printf("\nENTER THE ALBUM YEAR :");

    scanf("%s", year);

    while (fread(&s, sizeof(s), 1, Album) == 1)

    {
        if (strcmp(s.year, year) == 0)

        {
            system("cls");

            printf("SEARCH RESULT FOR YOUR DESIRED ALBUM  ");

            printf("\n-----------------------------------");

            printf("\n\n\n ALBUM YEAR: %s\n\n ALBUM NAME: %s\n\n ARTIST NAME: %s\n\n PRICE COSTING: Rs.%0.2f\n-----------------------------------", s.year, s.name, s.artist, s.price);

            printf("\n\n\n\n\n\n\n\n\n\nPRESS ANY KEY TO RETURN BACK TO MAIN MENU < MAIN MENU >");
            flag = 0;
            break;
        }
        else if (flag == 1)
        {
            system("cls");
            printf("OOPS! NO RESULTS FOUND ACCORDING TO YOUR WISH .");

            printf("PLEASE TRY AGAIN . ");
        }
    }
    getch(); /// getch() is a nonstandard function and is present in conio.h header file
             /// it reads also a single character from keyboard.
             ///  But it does not use any buffer,
             /// so the entered character is immediately returned without waiting for the enter key.
    fclose(Album);
}

void deletealbum()
{
    system("cls");
    FILE *Album;
    FILE *ftemp;
    ftemp = fopen("temp.txt", "w");
    Album = fopen("Album.txt", "r");
    int i = 1;
    char year[20];

    if (ftemp == NULL)

    {
        exit(0);
    }
    if (Album == NULL)
    {
        exit(0);
    }
    system("cls");

    printf("ENTER THE ALBUM YEAR YOU WISH TO VANISH: ");

    fflush(stdin);

    scanf("%s", year);

    while (fread(&s, sizeof(s), 1, Album) == 1)
    {
        if (strcmp(s.year, year) == 0)
        {
            i = 0;
            continue;
        }
        else
        {
            fwrite(&s, sizeof(s), 1, ftemp);
        }
    }
    if (i == 1)
    {
        system("cls");

        printf("ENTERED ALBUM  \"%s\" NOT AVAILABLE", year);

        getch(); /// getch() is a nonstandard function and is present in conio.h header file
                 /// it reads also a single character from keyboard.
                 ///  But it does not use any buffer,
                 /// so the entered character is immediately returned without waiting for the enter key.

        fclose(ftemp);

        fclose(Album);

        main();
    }
    fclose(Album);
    fclose(ftemp);

    remove("Album.txt"); /// deletes the given filename

    rename("temp.txt", "Album.txt"); /// The C library function int rename(const char *old_filename, const char *new_filename)
                                     /// causes the filename referred to by old_filename to be changed to new_filename

    system("cls");

    printf("ENTERED ALBUM : %s WAS SUCCESSFULLY DELETED.", year);

    printf("\n\n\n\n\n\n\n\n\n\nPRESS ANY KEY TO RETURN BACK TO MAIN MENU .....");

    fclose(Album);

    fclose(ftemp);

    getch(); /// getch() is a nonstandard function and is present in conio.h header file
             /// it reads also a single character from keyboard.
             ///  But it does not use any buffer,
             /// so the entered character is immediately returned without waiting for the enter key.
}
