#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void RSP(int choice)
{
    srand(NULL);
    srand(time(0));
    int bot{rand()%3};
    if (choice == 1)
    {
        switch (bot)
        {
        case (0):
            cout << endl << "Bot: Rock: " << "Draw!" << endl;
            break;
        case (1):
            cout << endl << "Bot: Scissors: " << "Win!" << endl;
            break;
        case (2):
            cout << endl << "Bot: Paper: " << "Loss!" << endl ;
            break;
        }
    }
    else
    {
        if (choice == 2)
        {
            switch (bot)
            {
            case (1):
                cout << endl << "Bot: Scissors: " << "Draw!" << endl;
                break;
            case (2):
                cout << endl << "Bot: Paper: " << "Win!" << endl;
                break;
            case (0):
                cout << endl << "Bot: Rock: " << "Loss!" << endl;
                break;
            }
        }
        else
        {
            switch (bot)
            {
            case (2):
                cout << endl << "Bot: Paper: " << "Draw!" << endl;
                break;
            case (0):
                cout << endl << "Bot: Rock: " << "Win!" << endl;
                break;
            case (1):
                cout << endl << "Bot: Scissors: " << "Loss!" << endl;
                break;
            }
        }
    }
}

int number(int a,char *b[])
{
    for (int i = 0 ;i<a; i++)
    {
        char *temp;
        temp = b[i];
        if((temp[0] == '-')&&(temp[1] == 't'))
        {
            return atoi(b[i+1]);
        }

    }

}

void message()
{
    cout << "Enter choice" << endl;
    cout << "1-Rock" << endl;
    cout << "2-Scissors" << endl;
    cout << "3-Paper" << endl;
    cout << "Your choice: ";
}

int main(int argc, char *argv[])
{
   enum class Choise{Rock = 1, Scissors, Paper};
    int choice;
    int num = number(argc, argv);
    for (int i=0; i<num;i++)
    {
        message();
        cin >> choice;
        RSP(choice);
        system("pause");
        system("cls");
    }
    return 0;
}

