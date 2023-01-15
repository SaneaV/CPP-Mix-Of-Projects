#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

int Numbers;

int Rewrite ()
{
    Numbers = 100;
}

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

int Array100(int A[])
{
    int Pozition = 0 + rand() % Numbers;
    int Number = 0;
    int i=0;
    bool NumberF=1;

    while (i<Numbers and NumberF)
    {
        if (Pozition==i)
        {
            Number=A[i];

            for (int j=i; j<Numbers; j++)
            {
                A[j]=A[j+1];
                NumberF=0;
            }
            Numbers--;
        }
        else
            i++;
    }

    return Number;

}


float Money=100.0;

void Game ()
{
    bool GameOver = true;
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int One, Two, Three, Four, Five;
    int PlayerNumberSelect;
    int Bet;
    bool PlayerSelect = true;
    bool Win = true;
    int Rules = 1;
    float GameMoney = 0;
    int Array[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
    bool Rules19 = false;

    //Ставка и счёт
    cout<<"Счёт: ";
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
    cout<<Money<<"$"<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

    cout<<"\nВыберите число от 1 до 100."<<endl;
    cout<<"Ввод: ";
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));

    while (!(cin>>PlayerNumberSelect) or PlayerNumberSelect>100 or PlayerNumberSelect<1)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
        cout<<"Ошибка, вы ввели что-то не то. "<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cin.clear();
        cin.sync();
        cout<<"\nПовторите ввод: ";
    }
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));


    cout<<"\nСделайте ставку."<<endl;
    cout<<"Ввод: ";
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));

    while (!(cin>>Bet) or Bet>Money or Bet<1)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
        cout<<"Ошибка, вы ввели что-то не то. "<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cin.clear();
        cin.sync();
        cout<<"\nПовторите ввод: ";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
    }
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

    system("cls");
    Sleep(200);



    while(GameOver)
    {
        while (PlayerSelect)
        {
            cout<<"Игра номер: "<<Rules<<endl<<endl;
            One = Array100(Array);
            cout<<"Первое число: ";
            if (PlayerNumberSelect==One)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                PlayerSelect = 0;
                Win = 0;
            }
            else
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<One<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Sleep(1000);
            Two = Array100(Array);
            cout<<"Второе число: ";
            if (PlayerNumberSelect==Two)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                PlayerSelect = 0;
                Win = 0;
            }
            else
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Two<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Sleep(1000);
            Three = Array100(Array);
            cout<<"Третье число: ";
            if (PlayerNumberSelect==Three)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                PlayerSelect = 0;
                Win = 0;
            }
            else
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Three<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Sleep(1000);
            Four = Array100(Array);
            cout<<"Четвёртое число: ";
            if (PlayerNumberSelect==Four)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                PlayerSelect = 0;
                Win = 0;
            }
            else
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Four<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Sleep(1000);
            Five = Array100(Array);
            cout<<"Пятое число: ";
            if (PlayerNumberSelect==Five)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                PlayerSelect = 0;
                Win = 0;
            }
            else
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Five<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Sleep(1000);
            PlayerSelect = 0;
        }

        if (Rules==19 and Win)
        {
            Win=0;
            Rules19 = true;
            system("cls");
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<"ПОЗДРАВЛЯЕМ! ВЫ ВЫИГРАЛИ!"<<endl<<endl;
            cout<<"ВЫ ВЫИГРАЛИ 1000$ + ВАШ ВЫИГРЫШ"<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            GameMoney += (Bet/100.0)*(14.0+Rules);
            Money += GameMoney + 1000;
            cout<<endl<<"Ваш общий счёт: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Money<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            system("PAUSE");

            GameOver = false;
            PlayerSelect = false;

        }

        if (Win)
        {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<endl<<endl<<"Ваше число не выпало!"<<endl<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cout<<"Вы выиграли: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<(Bet/100.0)*(14.0+Rules)<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            GameMoney += (Bet/100.0)*(14.0+Rules);
            cout<<"Ваш выигрыш: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<GameMoney<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

            cout<<endl<<endl<<"Вы выбираете: ";
            cout<<endl<<"1. Продолжить игру. ";
            cout<<endl<<"2. Увеличить ставку.";
            cout<<endl<<"3. Забрать деньги и закончить игру.";
            cout<<endl<<"Ваш выбор: ";
            int Select;

            while (!(cin>>Select) or Select>3 or Select<1)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"Ошибка, вы ввели что-то не то. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();
                cin.sync();
                cout<<"\nПовторите ввод: ";
            }

            switch (Select)
            {
            case 1:
            {
                PlayerSelect = 1;
                break;
            }
            case 2:
            {
                int FirstBet = Bet;
                cout<<"\nСделайте ставку."<<endl;
                cout<<"Ввод: ";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));

                while (!(cin>>Bet) or Bet>Money or Bet<1 or FirstBet>Bet)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"Ошибка, вы ввели что-то не то. (Ваша ставка больше налички, меньше 1 доллара или меньше предыдущей ставки) "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\nПовторите ввод: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                }
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                PlayerSelect = 1;
                break;

            }
            case 3:
            {
                system("cls");
                cout<<"Вы закончили игру!"<<endl;
                cout<<"Ваш выигрыш: ";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                cout<<GameMoney<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                Money += GameMoney;
                cout<<"Ваш общий счёт: ";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                cout<<Money<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                GameOver = 0;
                break;
                system("PAUSE");

            }
            }

        }
        else if (Win==0 and Rules19==0)
        {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<endl<<endl<<"К сожалению, вы проиграли."<<endl<<endl;

            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            Money -= Bet;
            cout<<"Ваш счёт: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<Money<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cout<<endl<<endl;
            GameOver = false;
            PlayerSelect = false;
            system("PAUSE");
        }
        Rules++;
        system("cls");
    }


}


