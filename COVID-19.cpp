#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

void login();
void registr();
void forgot();
void start();
void Help();
void Exit();
void test();
void Decesion1();
void Decesion2();
void Decesion3();

int main() 
{
    char c = ' ';
    string pass = "";
    cout << "Hello!\nWe are happy to use our program.\nPlease enter the password: ";
    while (c != 13) /* ENTER KEY */
    {
        c = getch();
        if (c != 13)
        {
            pass += c;
            cout << "*";
        }
    }
    if (pass == "Venom") 
    {
        cout << "\nAccess Denied!!\n";
    }
    else 
    {
        cout << "\nCan't access :(\n";
    }
    getch();
}

void start()
{
    int choice;
    cout << "****************************************************\n\n";
    cout << "                 Welcome to login page\n\n";
    cout << "****************************************************\n\n";
    cout << "********************   MENU   **********************\n\n";
    cout << "1. Login\n\n";
    cout << "2. Sign Up\n\n";
    cout << "3. Forgot Password or Username\n\n";
    cout << "4. Back\n\n";
    cout << "5. Exit\n\n";
    cout << "Enter Number: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        login();
        break;

    case 2:
        registr();
        break;

    case 3:
        forgot();
        break;

    case 4:
        main();
        break;

    case 5:
        Exit();
        break;

    default:
        cout << "Warning: You've made a mistake, please try again.\n";
        start();
    }
}

void login()
{
    int count = 0;
    string user, pass, u, p;
    cout << "Please enter the following details:\n\n";
    cout << "USERNAME: ";
    cin >> user;
    cout << "PASSWORD: ";
    cin >> pass;

    ifstream input("database.txt");
    while (input >> u >> p)
    {
        if (u == user && p == pass)
        {
            count = 1;
            break;
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "\nLogin Success!\n";
        cout << "\nWelcome to the Covid-19 test.\nHello " << user << "!\n";
        test();
    }
    else
    {
        cout << "\nLogin Failed\nPlease check your username and password\n";
        start();
    }
}

void registr()
{
    string reguser, regpass;
    cout << "Enter the username: ";
    cin >> reguser;
    cout << "Enter the password: ";
    cin >> regpass;

    ofstream reg("database.txt", ios::app);
    reg << reguser << ' ' << regpass << endl;
    cout << "\nRegistration Successful\n";
    reg.close();
    start();
}

void forgot()
{
    int ch;
    cout << "Forgotten? We are here to help.\n\n";
    cout << "1. Search your id by username\n\n";
    cout << "2. Search your id by password\n\n";
    cout << "3. Back\n\n";
    cout << "4. Main menu\n\n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        // Code for searching by username
        break;

    case 2:
        // Code for searching by password
        break;

    case 3:
        start();
        break;

    case 4:
        main();
        break;

    default:
        cout << "\nSorry, you entered the wrong choice. Please try again.\n";
        forgot();
    }
}

void Help()
{
    cout << "Venom XD is an Egyptian team who developed this program.\n";
    cout << "Warning: The program is only suitable for those aged 12 or over and no one has the right to sell the program.\n\n";
    cout << "The Program Has 3 Steps:\n";
    cout << "1. Type 1 to start the program, every user must create his profile and then you can check yourself.\n";
    cout << "2. Type 2 for help.\n";
    cout << "3. Type 3 to exit.\n\n";
    main();
}

void Exit()
{
    cout << "Venom xD, thank you for using the program.\n\n";
    exit(0);
}

void test()
{
    int choice;
    string arr[6] = {"Fever and chills", "Loss of the sense of smell and taste", "A headache", "Shortness of breath", "Back", "Exit"};
    cout << "1." << arr[0] << endl;
    cout << "2." << arr[1] << endl;
    cout << "3." << arr[2] << endl;
    cout << "4." << arr[3] << endl;
    cout << "5." << arr[4] << endl;
    cout << "6." << arr[5] << endl;
    cout << "Enter Number: ";
    cin >> choice;

    switch (choice)
    {
     case 1:
        Decesion1();
        break;

    case 2:
        Decesion1();
        break;

    case 3:
        Decesion1();
        break;
        Decesion1();
   
    case 4:
        Decesion1();
        break;

	case 5:
		start();
		break;
		
	case 6:
		Exit();
		break;
		
    case 12:
        Decesion2();
        break;

    case 21:
        Decesion2();
        break;

    case 13:
        Decesion2();
        break;

    case 31:
        Decesion2();
        break;

    case 14:
        Decesion2();
        break;

    case 41:
        Decesion1();
        break;

    case 23:
        Decesion2();
        break;

    case 24:
        Decesion2();
        break;

    case 32:
        Decesion2();
        break;

    case 34:
        Decesion1();
        break;

    case 42:
        Decesion2();
        break;

    case 43:
        Decesion2();
        break;

    case 123:
        Decesion2();
        break;

    case 132:
        Decesion2();
        break;

    case 124:
        Decesion2();
        break;

    case 142:
        Decesion2();
        break;

    case 214:
        Decesion2();
        break;

    case 213:
        Decesion2();
        break;

    case 241:
        Decesion2();
        break;

    case 243:
        Decesion2();
        break;

    case 234:
        Decesion2();
        break;

    case 231:
        Decesion2();
        break;

    case 314:
        Decesion2();
        break;

    case 312:
        Decesion2();
        break;

    case 341:
        Decesion2();
        break;

    case 342:
        Decesion2();
        break;

    case 321:
        Decesion2();
        break;

    case 324:
        Decesion2();
        break;

    case 412:
        Decesion2();
        break;

    case 413:
        Decesion2();
        break;

    case 421:
        Decesion2();
        break;

    case 423:
        Decesion2();
        break;

    case 431:
        Decesion2();
        break;

    case 432:
        Decesion2();
        break;

    case 1234:
        Decesion3();
        break;

    default:
        cout << "Warning: You've made a mistake, please try again.\n";
        start();
    }
}

void Decesion1()
{
    char ans;
    cout << "\nDon't worry, you are Okay. You can go to the pharmacy and buy some medicine.\n";
    cout << "Do you want to exit? (Y/N) ";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        cout << "\nVenom xD, thank you for using the program.\n\n";
        exit(0);
    }
    else
    {
        start();
    }
}

void Decesion2()
{
    char ans;
    cout << "\nYou have the flu. It's preferable to commit to staying at home.\n";
    cout << "Do you want to exit? (Y/N) ";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        cout << "\nVenom xD, thank you for using the program.\n\n";
        exit(0);
    }
    else
    {
        start();
    }
}

void Decesion3()
{
    char ans;
    cout << "\nUnfortunately, you have COVID-19, and the following steps must be taken:\n";
    cout << "\t- You must stay at home and not contact anyone.\n";
    cout << "\t- You should contact your doctor as soon as possible.\n";
    cout << "\nGet well soon!\n\n";
    cout << "Do you want to exit? (Y/N) ";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        cout << "\nVenom xD, thank you for using the program.\n\n";
        exit(0);
    }
    else
    {
        start();
    }
}
