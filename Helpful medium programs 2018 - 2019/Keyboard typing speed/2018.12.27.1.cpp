#include <iostream>
#include <windows.h>
#include <cstring>
#include <conio.h>
#include <ctime>
//#include <chrono>
#include <fstream>

using namespace std;

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
    White = 15,
};

char Example[255];

void ExampleText()
{
    ifstream f("Text.txt");

    int x = rand() % 49 +1;
    int y = 0;
    char TextFile[255];
    bool Find = false;

    for(int i=0; i<=50 or !Find; i++)
    {
        f.getline(TextFile, 255);
        if(x==i)
        {
            strcpy(Example, TextFile);
            Find = true;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    srand( time( 0 ) );

    bool End = false;
    bool Repeat = false;
    char Text[255];

    int i=0;
    int k=0;
    char c;

    int Mistake=0;
    int BackSpace=0;

    bool TextAcces=true;

    while(!Repeat)
    {
        ExampleText();

        for(int j=0; j<strlen(Example); j++)
        {
            cout<<Example[j];
        }
        cout<<endl<<endl;

        Mistake=0;
        BackSpace=0;
        i=0;
        k=0;

        //std::chrono::steady_clock::time_point _start(std::chrono::steady_clock::now());
        while(!End)
        {
            TextAcces = true;

            if(_kbhit)
            {
                c = getch();
            }

            if(c==8)
            {
                BackSpace++;
                TextAcces=false;
                system("cls");
                if (i>0)
                    i--;
                if (k>0)
                    k--;

                for(int j=0; j<strlen(Example); j++)
                {
                    cout<<Example[j];
                }
                cout<<endl<<endl;

                for(int j=0; j<k; j++)
                {
                    if(Text[j]==Example[j])
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    else
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<Text[j];
                }

                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

            }

            if(TextAcces)
            {
                Text[i]=c;

                if(c==Example[i])
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                else
                {
                    Mistake++;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                }


                cout<<Text[i];

                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                i++;
                k++;
            }

            if(strlen(Example)==i)
            {
                bool Comp = true;

                for(int j=0; j<k; j++)
                    if(Text[j]!=Example[j])
                        Comp=false;

                if(Comp)
                    End=true;
            }
        }
        //std::chrono::steady_clock::time_point _end(std::chrono::steady_clock::now());

        cout<<endl<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightBlue));
        cout<<"Вы закончили ввод текста!"<<endl<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

        cout<<"Длина текста: "<<strlen(Example)<<endl;
        cout<<"Продолжительность ввода текста: ";
        //cout << std::chrono::duration_cast<std::chrono::duration<double>>(
                 //_end - _start).count();
        cout<<endl;
        cout<<"Количество допущенных ошибок: "<<Mistake<<endl;
        cout<<"Количество нажатий BACKSPACE: "<<BackSpace<<endl;

        cout<<endl<<endl;
        cout<<"Выберите что делать дальше: "<<endl;
        cout<<"1. Начать заново."<<endl;
        cout<<"2. Выйти из программы."<<endl;

        bool Selection = false;

        while(!Selection)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '1':
                {
                    system("cls");
                    Selection = true;
                    End = false;
                    break;
                }
                case '2':
                {
                    Repeat=true;
                    Selection = true;
                    break;
                }
                }
            }
        }



    }

    system("cls");
    cout<<"Программа закончила свою работу."<<endl;

}
