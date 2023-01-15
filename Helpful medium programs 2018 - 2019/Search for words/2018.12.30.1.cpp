#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstring>
#include <conio.h>
//#include <chrono>
#include <fstream>

using namespace std;

char FirstWord[15];
char SecondWord[15];
char WordTable[40][40];
int Poz1j=0;
int Poz1i=0;
int Poz2j=0;
int Poz2i=0;
int Poz1;
int Poz2;
int Size1;
int Size2;
int n;

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

void FSWords()
{
    ifstream f("Words.txt");

    int x = rand() % 50 +0;
    int y = 0;
    do
    {
        y = rand() % 50 +0;
    }
    while(x==y);

    char TextFile[255];
    int k=0;
    int c=0;

    while(!f.eof())
    {
        f>>TextFile;

        if(x==c)
        {
            strcpy(FirstWord, TextFile);
            k++;
        }
        if(y==c)
        {
            strcpy(SecondWord, TextFile);
            k++;
        }
        c++;
    }
    f.close();
}

void Filling()
{
    //1 - Горизонтально 2 - Вертикально

    Poz1 = rand() % 2 + 1;
    Poz2 = rand() % 2 + 1;

    Size1 = strlen(FirstWord);
    Size2 = strlen(SecondWord);

    Poz1j=0;
    Poz1i=0;

    Poz2j=0;
    Poz2i=0;

    bool Y = false;
    int h=0;


    if(Poz1==2)
        Poz1j= rand()% n + 0;
    else
        Poz1j = rand()% (n-Size1) + 0;

    if(Poz1==1)
        Poz1i= rand()% n + 0;
    else
        Poz1i = rand()% (n-Size1) + 0;

    do
    {
        Y = false;
        if(Poz2==2)
            Poz2j= rand()% n + 0;
        else
            Poz2j = rand()% (n-Size2) + 0;

        if(Poz2==1)
            Poz2i= rand()% n + 0;
        else
            Poz2i = rand()% (n-Size2) + 0;

        for(int i=Poz2i; i<Poz2i+Size2; i++)
        {
            for(int j=Poz2j; j<Poz2j+Size2; j++)
            {
                for(int q=Poz1i; q<Poz1i+Size1; q++)
                {
                    for(int u=Poz1j; u<Poz1j+Size1; u++)
                    {
                        if(u==j and q==i)
                        {
                            FSWords();
                            Filling();
                        }
                    }
                }

            }
        }
    }
    while(Y);


    int RandomAlpha;
    char Alphabet[34] = {'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я'};
    char Alpha;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            RandomAlpha = rand()% 33 + 0;

            for(int p=0; p<34; p++)
                if(p==RandomAlpha)
                {
                    Alpha = Alphabet[p];
                }
            WordTable[i][j]=Alpha;
        }
    }
    int q=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(Poz1==1 and j==Poz1j and Poz1i==i)
            {
                for(int p=j; p!=(Size1+Poz1j); p++)
                {
                    WordTable[i][p]=FirstWord[q];
                    q++;
                }
                q=0;
            }
            if(Poz1==2 and j==Poz1j and Poz1i==i)
            {
                for(int p=i; p!=(Size1+Poz1i); p++)
                {
                    WordTable[p][j]=FirstWord[q];
                    q++;
                }
                q=0;
            }

            if(Poz2==1 and j==Poz2j and Poz2i==i)
            {
                for(int p=j; p!=(Size2+Poz2j); p++)
                {
                    WordTable[i][p]=SecondWord[q];
                    q++;
                }
                q=0;
            }
            if(Poz2==2 and j==Poz2j and Poz2i==i)
            {
                for(int p=i; p!=(Size2+Poz2i); p++)
                {
                    WordTable[p][j]=SecondWord[q];
                    q++;
                }
                q=0;
            }
        }
    }



}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    srand( time( 0 ) );

    bool repeat = false;

    while(!repeat)
    {
        cout<<"Выберите сложность игры: "<<endl;
        cout<<"1. Легко."<<endl;
        cout<<"2. Нормально."<<endl;
        cout<<"3. Сложно."<<endl;
        cout<<"4. Эксперт."<<endl;
        cout<<"Ваш выбор: ";

        bool Selection = false;

        while(!Selection)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '1':
                {
                    n=10;
                    Selection=true;
                    system("cls");
                    break;
                }
                case '2':
                {
                    n=15;
                    Selection=true;
                    system("cls");
                    break;
                }
                case '3':
                {
                    n=20;
                    Selection=true;
                    system("cls");
                    break;
                }
                case '4':
                {
                    n=30;
                    Selection=true;
                    system("cls");
                    break;
                }
                }
            }
        }

        FSWords();
        Filling();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<WordTable[i][j]<<" ";
            }
            cout<<endl;
        }

        bool End = false;
        char Words[10];
        bool first = false;
        bool second = false;
        bool Out;

        cout<<endl<<"При окончании ввода слова, нажмите \"Enter\"."<<endl;

        //std::chrono::steady_clock::time_point _start(std::chrono::steady_clock::now());
        while(!End)
        {
            cout<<"Введите слово: ";
            cin>>Words;

            if(strcmp(Words,FirstWord)==0 or strcmp(Words,SecondWord)==0)
            {
                if (strcmp(Words, FirstWord)==0)
                    first = true;
                if (strcmp(Words, SecondWord)==0)
                    second = true;
                system("cls");

                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        Out = true;

                        if(first)
                        {
                            if(Poz1==1 and j>=Poz1j and Poz1i==i and j<=Size1+Poz1j-1)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<WordTable[i][j]<<" ";
                                Out = false;
                            }

                            if(Poz1==2 and i>=Poz1i and i<=Poz1i+Size1-1 and j==Poz1j)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<WordTable[i][j]<<" ";
                                Out = false;
                            }

                        }
                        if(second)
                        {
                            if(Poz2==1 and j>=Poz2j and Poz2i==i and j<=Size2+Poz2j-1)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<WordTable[i][j]<<" ";
                                Out = false;
                            }
                            if(Poz2==2 and i>=Poz2i and i<=Poz2i+Size2-1 and j==Poz2j)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<WordTable[i][j]<<" ";
                                Out = false;
                            }
                        }
                        if(Out)
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            cout<<WordTable[i][j]<<" ";
                        }


                    }
                    cout<<endl;
                }
                cout<<endl<<"При окончании ввода слова, нажмите \"Enter\"."<<endl;

            }
            else if(strcmp(Words, "подсказка")==0)
            {
                cout<<FirstWord<<endl;
                cout<<SecondWord<<endl;
            }
            else
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"Такого слова здесь нет"<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            }

            if(first and second)
                End = true;
        }
        //std::chrono::steady_clock::time_point _end(std::chrono::steady_clock::now());

        cout<<"Поздравляем, вы закончили искать слова!"<<endl;
        cout<<"Продолжительность поиска слов: ";
        //cout << std::chrono::duration_cast<std::chrono::duration<double>>(
                 //_end - _start).count();

        cout<<endl<<endl;
        cout<<"Выберите что делать дальше: "<<endl;
        cout<<"1. Начать заново."<<endl;
        cout<<"2. Выйти из программы."<<endl;

        bool Selection2 = false;

        while(!Selection2)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '1':
                {
                    system("cls");
                    Selection2 = true;
                    End = false;
                    break;
                }
                case '2':
                {
                    repeat=true;
                    Selection2 = true;
                    break;
                }
                }
            }
        }
    }


}
