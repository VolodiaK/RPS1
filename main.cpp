#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a=0;
    int player, bot;
    while(a!=2)
    {
        system("cls");
        cout << "Rock -- 1" << endl;
        cout << "Paper - 2" << endl;
        cout << "Scissors - 3" << endl;
        cout << "Your choice: ";
        cin >> player;
        bot = rand() % 3+1;
        cout << "Bot -        " << bot << endl;
        if(player == 1)
        {
            if(bot == 2)
            {
                cout << endl << "LOSER!!!!";
            }
            else
            {
                if(bot == 3)
                {
                    cout << endl << "WIN !!!";
                }
                else
                {
                    cout << "Try again";
                }
            }
        }
        else
        {
            if(player == 2)
            {
                if(bot == 3)
                {
                    cout << endl << "LOSER!!!!";
                }
                else
                {
                    if(bot == 1)
                    {
                        cout << endl << "WIN !!!";
                    }
                    else
                    {
                        cout << "Try again";
                    }
                }
            }
            else
            {
                if(bot == 1)
                {
                    cout << endl << "LOSER!!!!";
                }
                else
                {
                    if(bot == 2)
                    {
                        cout << endl << "WIN !!!";
                    }
                    else
                    {
                        cout << "Try again";
                    }
                }
            }
        }
        getch();
        system("cls");
        cout << "New game -- 1" << endl;
        cout << "Exit ------ 2" << endl;
        cin >> a;
    }
    return 0;
}

