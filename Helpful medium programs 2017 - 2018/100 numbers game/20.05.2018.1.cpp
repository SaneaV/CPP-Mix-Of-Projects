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
    cout<<"������� ���� ���: ";
    float Money=100.0;
    char PlayerName[50];
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
    gets(PlayerName);
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    system("cls");


    while (MainMenu)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
        cout<<setw(40)<<"����� ����������, "<<PlayerName<<"!"<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

        cout<<"1. ������ ����."<<endl;
        cout<<"2. ������� ����."<<endl;
        cout<<"3. � ���������."<<endl;
        cout<<"4. � ������������."<<endl;
        cout<<endl<<"��� �����: ";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
        int Select;


        while (!(cin>>Select) or Select>4 or Select<1)
        {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<"������, �� ����� ���-�� �� ��. "<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cin.clear();
            cin.sync();
            cout<<"\n��������� ����: ";
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
                cout<<"1. ���������� ����."<<endl;
                cout<<"2. ����� � ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<endl<<"��� �����: ";
                int Answer;

                while (!(cin>>Answer) or Answer>3 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\n��������� ����: ";
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
                cout<<"������� ���� ����� ������: "<<endl<<endl;
                cout<<"1. �������� ����� ����� �� 1 �� 100"<<endl;
                cout<<"2. ������ ������"<<endl;
                cout<<"3. ��� �������� ��������� �����"<<endl;
                cout<<"4. ���� ����� �� ������ - �������� 15% �� ������, ����� ������ �� ������"<<endl;
                cout<<endl<<endl;

                cout<<"1. ����� � ����."<<endl;
                cout<<"2. ����� �� ���������."<<endl;
                cout<<endl<<"��� �����: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\n��������� ����: ";
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
                cout<<"���� ������ ��������� ���������: 20.05.2018"<<endl;
                cout<<"��������� ���������� ���������: 30.05.2018"<<endl;
                cout<<"���������� ���������: --- "<<endl<<endl<<endl;

                cout<<"1. ����� � ����."<<endl;
                cout<<"2. ����� �� ���������."<<endl;
                cout<<endl<<"��� �����: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\n��������� ����: ";
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
                cout<<"������� �����������: ����� ���������"<<endl;
                cout<<"���������: SaneaVicev@mail.ru"<<endl;
                cout<<"�����������: ���� � �������� ������ ���� ������ ��������. ����� �������� � �������."<<endl<<endl<<endl;

                cout<<"1. ����� � ����."<<endl;
                cout<<"2. ����� �� ���������."<<endl;
                cout<<endl<<"��� �����: ";
                int Answer;

                while (!(cin>>Answer) or Answer>2 or Answer<1)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();
                    cin.sync();
                    cout<<"\n��������� ����: ";
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
    cout<<"��������� ������� ��������� ������!"<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
}
