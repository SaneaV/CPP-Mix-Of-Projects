#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include "30.05.2018.1.cpp"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    bool MainMenu = true;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    cout<<"Введите ваше имя: ";
    float Money=100.0;
    char PlayerName[50];
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
    gets(PlayerName);
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    system("cls");


    while (MainMenu)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
        cout<<setw(40)<<"Добро пожаловать, "<<PlayerName<<"!"<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

        cout<<"1. Начать игру."<<endl;
        cout<<"2. Правила игры."<<endl;
        cout<<"3. О программе."<<endl;
        cout<<"4. О разработчике."<<endl;
        cout<<endl<<"Ваш выбор: ";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
        int Select;


        while (!(cin>>Select) or Select>4 or Select<1)
        {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<"Ошибка, вы ввели что-то не то. "<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cin.clear();
            cin.sync();
            cout<<"\nПовторите ввод: ";
        }
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

        bool Main = true;
        bool GameOver = true;

        while (Main)
        {
            switch(Select)
            {
            case 1:
            {
                Rewrite();
                Game();

                system("cls");
                cout<<"1. Продолжить игру."<<endl;
                cout<<"2. Выйти в меню."<<endl;
                cout<<"3. Выйти из программы."<<endl;
                cout<<endl<<"Ваш выбор: ";
                int Answer;

                while (!(cin>>Answer) or Answer>3 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"Ошибка, вы ввели что-то не то. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\nПовторите ввод: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                }

                switch (Answer)
                {
                case 1:
                {
                    GameOver = true;
                    break;
                }
                case 2:
                {
                    Main=0;
                    break;
                }
                case 3:
                {
                    Main=0;
                    MainMenu=0;
                    break;
                }
                }
                system("cls");

                break;
            }

            case 2:
            {
                system("cls");
                cout<<"Правила игры очень просты: "<<endl<<endl;
                cout<<"1. Выбираем любое число от 1 до 100"<<endl;
                cout<<"2. Делаем ставку"<<endl;
                cout<<"3. Бот выбирает рандомное число"<<endl;
                cout<<"4. Если число не выпало - получаем 15% от ставки, иначе ставка не прошла"<<endl;
                cout<<endl<<endl;

                cout<<"1. Выйти в меню."<<endl;
                cout<<"2. Выйти из программы."<<endl;
                cout<<endl<<"Ваш выбор: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"Ошибка, вы ввели что-то не то. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\nПовторите ввод: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                }

                switch (Answer)
                {
                case 1:
                {
                    Main=0;
                    break;
                }
                case 2:
                {
                    Main=0;
                    MainMenu=0;
                    break;
                }
                }
                system("cls");

                break;


            }

            case 3:
            {
                system("cls");
                cout<<"Дата начала написания программы: 20.05.2018"<<endl;
                cout<<"Последнее обновление программы: 30.05.2018"<<endl;
                cout<<"Обновление ожидается: --- "<<endl<<endl<<endl;

                cout<<"1. Выйти в меню."<<endl;
                cout<<"2. Выйти из программы."<<endl;
                cout<<endl<<"Ваш выбор: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"Ошибка, вы ввели что-то не то. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\nПовторите ввод: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                }

                switch (Answer)
                {
                case 1:
                {
                    Main=0;
                    break;
                }
                case 2:
                {
                    Main=0;
                    MainMenu=0;
                    break;
                }
                }
                system("cls");

                break;
            }
            case 4:
            {
                system("cls");
                cout<<"Главный разработчик: Вичев Александр"<<endl;
                cout<<"Связаться: SaneaVicev@mail.ru"<<endl;
                cout<<"Комментарий: Идея о создании данной игры пришла внезапно. Также внезапно и пропала."<<endl<<endl<<endl;

                cout<<"1. Выйти в меню."<<endl;
                cout<<"2. Выйти из программы."<<endl;
                cout<<endl<<"Ваш выбор: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"Ошибка, вы ввели что-то не то. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\nПовторите ввод: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                }

                switch (Answer)
                {
                case 1:
                {
                    Main=0;
                    break;
                }
                case 2:
                {
                    Main=0;
                    MainMenu=0;
                    break;
                }
                }
                system("cls");

                break;
            }
            }
        }
    }

    system("cls");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
    cout<<"Программа успешно закончила работу!"<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
}
