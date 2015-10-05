#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void RSP(string choise)
{
    srand(NULL);
    srand(time(0));
    int bot = rand()%3;
    if (choise == "Rock")
    {
        switch (bot)
        {
        case (0):
            cout << endl << "Rock: " << "Draw!" << endl;
            break;
        case (1):
            cout << endl << "Scissors: " << "Win!" << endl;
            break;
        case (2):
            cout << endl << "Paper: " << "Loss!" << endl ;
            break;
        }
    }
    else
    {
        if (choise == "Scissors")
        {
            switch (bot)
            {
            case (1):
                cout << endl << "Scissors: " << "Draw!" << endl;
                break;
            case (2):
                cout << endl << "Paper: " << "Win!" << endl;
                break;
            case (0):
                cout << endl << "Rock: " << "Loss!" << endl;
                break;
            }
        }
        else
        {
            switch (bot)
            {
            case (2):
                cout << endl << "Paper: " << "Draw!" << endl;
                break;
            case (0):
                cout << endl << "Rock: " << "Win!" << endl;
                break;
            case (1):
                cout << endl << "Scissors: " << "Loss!" << endl;
                break;
            }
        }
    }
}

int number(int a, char *b[])
{
    for(int i=0; i<a; i++)
    {
        if(b[i][0] == '-' && b[i][1] == 't')
        {
            int t = atoi(b[i+1]);
            return t;
        }
    }
}

int main(int argc, char *argv[])
{
    string choise;

    int num = number(argc, argv);
    for (int i=0; i<num;i++)
    {
        cout << "Enter Rock, Scissors or Paper: ";
        cin >> choise;
        RSP(choise);
        system("pause");
        system("cls");
    }
    return 0;
}

