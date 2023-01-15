#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

char Square[3][3];
bool GameOver = false;
int x;
char Figure;
char BFigure;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Filling()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            Square[i][j]=' ';
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
    White = 15,
};

void PlayervsPlayer()
{
    bool DoStep = false;
    bool Win = false;
    char Figure;
    int Full=0;
    bool Nichia = true;
    int k=0;

    while(k!=2)
    {
        Nichia =true;
        Full = 0;
        DoStep = false;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<Square[i][j];
                if(j==0)
                    cout<<"|";
                if(j==1)
                    cout<<"|";
            }
            if(i==0)
                cout<<endl<<"-----"<<endl;
            if(i==1)
                cout<<endl<<"-----"<<endl;
        }

        if(k==0)
            cout<<endl<<endl<<"Ход первого игрока(x). "<<endl;
        else
            cout<<endl<<endl<<"Ход второго игрока(o). "<<endl;

        while(!DoStep)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '7':
                {
                    if(k==0 and Square[0][0]==' ')
                    {
                        Square[0][0]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[0][0]==' ')
                    {
                        Square[0][0]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '8':
                {
                    if(k==0 and Square[0][1]==' ')
                    {
                        Square[0][1]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[0][1]==' ')
                    {
                        Square[0][1]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '9':
                {
                    if(k==0 and Square[0][2]==' ')
                    {
                        Square[0][2]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[0][2]==' ')
                    {
                        Square[0][2]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '4':
                {
                    if(k==0 and Square[1][0]==' ')
                    {
                        Square[1][0]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[1][0]==' ')
                    {
                        Square[1][0]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '5':
                {
                    if(k==0 and Square[1][1]==' ')
                    {
                        Square[1][1]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[1][1]==' ')
                    {
                        Square[1][1]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '6':
                {
                    if(k==0 and Square[1][2]==' ')
                    {
                        Square[1][2]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[1][2]==' ')
                    {
                        Square[1][2]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '1':
                {
                    if(k==0 and Square[2][0]==' ')
                    {
                        Square[2][0]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[2][0]==' ')
                    {
                        Square[2][0]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '2':
                {
                    if(k==0 and Square[2][1]==' ')
                    {
                        Square[2][1]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[2][1]==' ')
                    {
                        Square[2][1]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }
                case '3':
                {
                    if(k==0 and Square[2][2]==' ')
                    {
                        Square[2][2]='x';
                        DoStep = true;
                        system("cls");
                        k++;
                    }
                    else if (Square[2][2]==' ')
                    {
                        Square[2][2]='o';
                        DoStep=true;
                        system("cls");
                        k++;
                    }
                    else
                        cout<<"Ячейка занята"<<endl;
                    break;
                }

                default:
                    cout<<"Вы ошиблись клавишей"<<endl;
                }
            }
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(Square[i][0]==Square[i][1] and Square[i][2]==Square[i][0] and Square[i][0]!=' ')
                {
                    Win=true;
                    Figure=Square[i][0];
                }
                if(Square[0][0]==Square[1][1] and Square[2][2]==Square[0][0] and Square[0][0]!=' ')
                {
                    Win=true;
                    Figure=Square[0][0];
                }
                if(Square[0][2]==Square[1][1] and Square[2][0]==Square[0][2] and Square[0][2]!=' ')
                {
                    Win=true;
                    Figure=Square[0][2];
                }
                if(Square[0][j]==Square[1][j] and Square[2][j]==Square[0][j] and Square[0][j]!=' ')
                {
                    Win=true;
                    Figure=Square[0][j];
                }
                if(Square[i][j]!=' ')
                {
                    Full++;
                }

            }
        }

        if(Full==9 and !Win)
        {
            Nichia=true;
        }

        if(Win or Full==9)
        {
            if(Win)
                cout<<"Игрок \""<<Figure<<"\" выиграл!"<<endl;
            else
                cout<<"Ничья"<<endl;

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {

                    if(Square[i][0]==Square[i][1] and Square[i][2]==Square[i][0])
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    }
                    else if(Square[0][j]==Square[1][j] and Square[2][j]==Square[0][j])
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    else if(Square[0][0]==Square[1][1] and Square[1][1]==Square[2][2] and i==j)
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    else if (Square[0][2]==Square[1][1] and Square[2][0]==Square[0][2] and (i+j)==2)
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));

                    cout<<Square[i][j];
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    if(j==0)
                        cout<<"|";
                    if(j==1)
                        cout<<"|";
                }
                if(i==0)
                    cout<<endl<<"-----"<<endl;
                if(i==1)
                    cout<<endl<<"-----"<<endl;
            }
            GameOver=true;
            k=2;
        }
    }
}

void PlayervsBot()
{
    char FigureW;
    bool DoStep = false;
    int k=0;

    while(k!=2)
    {
        DoStep=false;
        while(!DoStep)
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout<<Square[i][j];
                    if(j==0)
                        cout<<"|";
                    if(j==1)
                        cout<<"|";
                }
                if(i==0)
                    cout<<endl<<"-----"<<endl;
                if(i==1)
                    cout<<endl<<"-----"<<endl;
            }

            cout<<endl<<endl<<"Ваш ход!"<<endl;

            if((Figure=='x' and k==0) or (k==1 and Figure=='o'))
                while(!DoStep)
                {
                    if(_kbhit)
                    {
                        switch(getch())
                        {
                        case '7':
                        {
                            if(Square[0][0]==' ')
                            {
                                Square[0][0]=Figure;
                                DoStep = true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '8':
                        {
                            if (Square[0][1]==' ')
                            {
                                Square[0][1]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '9':
                        {
                            if (Square[0][2]==' ')
                            {
                                Square[0][2]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '4':
                        {
                            if (Square[1][0]==' ')
                            {
                                Square[1][0]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '5':
                        {
                            if (Square[1][1]==' ')
                            {
                                Square[1][1]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '6':
                        {
                            if (Square[1][2]==' ')
                            {
                                Square[1][2]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '1':
                        {
                            if (Square[2][0]==' ')
                            {
                                Square[2][0]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '2':
                        {
                            if (Square[2][1]==' ')
                            {
                                Square[2][1]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }
                        case '3':
                        {
                            if (Square[2][2]==' ')
                            {
                                Square[2][2]=Figure;
                                DoStep=true;
                                system("cls");
                                k++;
                            }
                            else
                                cout<<"Ячейка занята"<<endl;
                            break;
                        }

                        default:
                            cout<<"Вы ошиблись клавишей"<<endl;
                        }
                    }
                }
            else if((BFigure=='x' and k==0) or (k==1 and BFigure=='o'))
            {
                DoStep=true;
                int Null=0;
                bool Acces = true;
                bool LocalAcces = true;

                for(int i=0; i<3; i++)
                    for(int j=0; j<3; j++)
                    {
                        if(Square[i][j]==' ')
                            Null++;
                    }

                if(Null==9)
                {
                    Square[1][1]=BFigure;
                    Acces=false;
                    k++;
                }

                else if(Null==8 and Square[1][1]==' ')
                {
                    Square[1][1]=BFigure;
                    Acces=false;
                    k++;
                }


                if(Square[1][1]==BFigure)
                {
                    if((Square[0][0]==Square[1][1] and Square[2][2]==' ') or (Square[1][1]==Square[2][2] and Square[0][0]==' ') and Square[1][1]==BFigure)
                    {
                        if(Square[0][0]==' ')
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        else if(Square[2][2]==' ')
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][2]==Square[1][1] and Square[2][0]==' ') or (Square[2][0]==Square[1][1] and Square[0][2]==' ') and Square[1][1]==BFigure)
                    {
                        if(Square[0][2]==' ')
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        else if(Square[2][0]==' ')
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if (Square[1][1]==BFigure and BFigure=='o' and (Square[0][1]==BFigure or Square[2][1]==BFigure))
                    {
                        if(Square[0][1]==BFigure and Square[2][1]==' ')
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces = false;
                        }
                        if(Square[2][1]==BFigure and Square[0][1]==' ')
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][0]==BFigure and Square[0][2]==BFigure and Square[0][1]==' ') or (Square[0][0]==BFigure and Square[2][0]==BFigure and Square[1][0]==' ')
                            or (Square[2][0]==BFigure and Square[2][2]==BFigure and Square[2][1]==' ') or (Square[0][2]==BFigure and Square[2][2]==BFigure) and Square[1][2]==' ')
                    {

                        if ((Square[0][0]==BFigure and Square[0][2]==BFigure))
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][0]==BFigure and Square[2][0]==BFigure))
                        {
                            Square[1][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[2][0]==BFigure and Square[2][2]==BFigure))
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][2]==BFigure and Square[2][2]==BFigure))
                        {
                            Square[1][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][0]==Figure and Square[0][2]==Figure and Square[0][1]==' ') or (Square[0][0]==Figure and Square[2][0]==Figure and Square[1][0]==' ')
                            or (Square[2][0]==Figure and Square[2][2]==Figure and Square[2][1]==' ') or (Square[0][2]==Figure and Square[2][2]==Figure) and Square[1][2]==' ')
                    {
                        if ((Square[0][0]==Figure and Square[0][2]==Figure))
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][0]==Figure and Square[2][0]==Figure))
                        {
                            Square[1][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[2][0]==Figure and Square[2][2]==Figure))
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][2]==Figure and Square[2][2]==Figure))
                        {
                            Square[1][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if ((Square[0][0]==Square[0][1] and Square[0][0]==Figure) or
                             (Square[0][1]==Square[0][2] and Square[0][1]==Figure) or
                             (Square[2][0]==Square[2][1] and Square[2][0]==Figure) or
                             (Square[2][1]==Square[2][2] and Square[2][1]==Figure) or
                             (Square[0][0]==Square[1][0] and Square[0][0]==Figure) or
                             (Square[1][0]==Square[2][0] and Square[1][0]==Figure) or
                             (Square[0][2]==Square[1][2] and Square[0][2]==Figure) or
                             (Square[1][2]==Square[2][2] and Square[1][2]==Figure))
                    {
                        if (Square[0][0]==Square[0][1] and Square[0][0]==Figure)
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][1]==Square[0][2] and Square[0][1]==Figure)
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[2][0]==Square[2][1] and Square[2][0]==Figure)
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[2][1]==Square[2][2] and Square[2][1]==Figure)
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][0]==Square[1][0] and Square[0][0]==Figure)
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[1][0]==Square[2][0] and Square[1][0]==Figure)
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][2]==Square[1][2] and Square[0][2]==Figure)
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[1][2]==Square[2][2] and Square[1][2]==Figure)
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if ((Null==7 or Null==5 and (Square[0][0]==' ' or Square[0][2]==' ' or Square[2][0]==' ' or Square[2][2]==' ')) or
                             (Null==6 or Null==4 and BFigure=='o' and (Square[0][0]==' ' or Square[0][2]==' ' or Square[2][0]==' ' or Square[2][2]==' '))
                             and Null!=3)
                    {
                        while(LocalAcces)
                        {
                            switch(rand()% 4 + 1)
                            {
                            case 1:
                            {
                                if(Square[0][2]==BFigure or Square[0][2]==' ')
                                    if(Square[0][0]==' ' and Square[0][1]!=Figure)
                                    {
                                        Square[0][0]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                if(Square[2][0]==BFigure or Square[2][0]==' ')
                                    if(Square[0][0]==' ' and Square[1][0]!=Figure)
                                    {
                                        Square[0][0]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                break;
                            }
                            case 2:
                            {
                                if(Square[0][0]==BFigure or Square[0][0]==' ')
                                    if(Square[0][2]==' ' and Square[0][1]!=Figure)
                                    {
                                        Square[0][2]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                if(Square[2][2]==BFigure or Square[2][2]==' ')
                                    if(Square[0][2]==' ' and Square[1][2]!=Figure)
                                    {
                                        Square[0][2]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                break;
                            }
                            case 3:
                            {
                                if(Square[2][2]==BFigure or Square[2][2]==' ')
                                    if(Square[2][0]==' ' and Square[2][1]!=Figure)
                                    {
                                        Square[2][0]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                if(Square[0][0]==BFigure or Square[0][0]==' ')
                                    if(Square[2][0]==' ' and Square[1][0]!=Figure)
                                    {
                                        Square[2][0]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                break;
                            }
                            case 4:
                            {
                                if(Square[0][2]==BFigure or Square[0][2]==' ')
                                    if(Square[2][2]==' ' and Square[1][2]!=Figure)
                                    {
                                        Square[2][2]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                if(Square[2][0]==BFigure or Square[2][0]==' ')
                                    if(Square[2][2]==' ' and Square[2][1]!=Figure)
                                    {
                                        Square[2][2]=BFigure;
                                        k++;
                                        Acces=false;
                                        LocalAcces = false;
                                    }
                                break;
                            }
                            }
                        }
                    }
                    if(Acces)
                    {
                        for(int i=0; i<3; i++)
                            for(int j=0; j<3; j++)
                                if(Square[i][j]==' ')
                                {
                                    Square[i][j]=BFigure;
                                    k++;
                                    i=3;
                                    j=3;
                                }
                                Acces = true;
                    }
                }
                else if(Square[1][1]!=BFigure)
                {
                     if((Square[0][0]==Square[1][1] and Square[2][2]==' ') or (Square[1][1]==Square[2][2] and Square[0][0]==' ') and Square[1][1]==Figure)
                    {
                        if(Square[0][0]==' ')
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        else if(Square[2][2]==' ')
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][2]==Square[1][1] and Square[2][0]==' ') or (Square[2][0]==Square[1][1] and Square[0][2]==' ') and Square[1][1]==Figure)
                    {
                        if(Square[0][2]==' ')
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        else if(Square[2][0]==' ')
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][0]==Figure and Square[0][2]==Figure and Square[0][1]==' ') or (Square[0][0]==Figure and Square[2][0]==Figure and Square[1][0]==' ')
                            or (Square[2][0]==Figure and Square[2][2]==Figure and Square[2][1]==' ') or (Square[0][2]==Figure and Square[2][2]==Figure) and Square[1][2]==' ')
                    {
                        if ((Square[0][0]==Figure and Square[0][2]==Figure))
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][0]==Figure and Square[2][0]==Figure))
                        {
                            Square[1][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[2][0]==Figure and Square[2][2]==Figure))
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][2]==Figure and Square[2][2]==Figure))
                        {
                            Square[1][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][0]==BFigure and Square[0][2]==BFigure and Square[0][1]==' ') or (Square[0][0]==BFigure and Square[2][0]==BFigure and Square[1][0]==' ')
                            or (Square[2][0]==BFigure and Square[2][2]==BFigure and Square[2][1]==' ') or (Square[0][2]==BFigure and Square[2][2]==BFigure) and Square[1][2]==' ')
                    {
                        if ((Square[0][0]==BFigure and Square[0][2]==BFigure))
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][0]==BFigure and Square[2][0]==BFigure))
                        {
                            Square[1][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[2][0]==BFigure and Square[2][2]==BFigure))
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][2]==BFigure and Square[2][2]==BFigure))
                        {
                            Square[1][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if ((Square[0][0]==Square[0][1] and Square[0][0]==Figure) or
                             (Square[0][1]==Square[0][2] and Square[0][1]==Figure) or
                             (Square[2][0]==Square[2][1] and Square[2][0]==Figure) or
                             (Square[2][1]==Square[2][2] and Square[2][1]==Figure) or
                             (Square[0][0]==Square[1][0] and Square[0][0]==Figure) or
                             (Square[1][0]==Square[2][0] and Square[1][0]==Figure) or
                             (Square[0][2]==Square[1][2] and Square[0][2]==Figure) or
                             (Square[1][2]==Square[2][2] and Square[1][2]==Figure) or
                             (Square[1][1]==Square[0][1] and Square[0][1]==Figure)
                             )
                    {
                        if (Square[0][0]==Square[0][1] and Square[0][0]==Figure)
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][1]==Square[0][2] and Square[0][1]==Figure)
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[2][0]==Square[2][1] and Square[2][0]==Figure)
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[2][1]==Square[2][2] and Square[2][1]==Figure)
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][0]==Square[1][0] and Square[0][0]==Figure)
                        {
                            Square[2][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[1][0]==Square[2][0] and Square[1][0]==Figure)
                        {
                            Square[0][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[0][2]==Square[1][2] and Square[0][2]==Figure)
                        {
                            Square[2][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[1][2]==Square[2][2] and Square[1][2]==Figure)
                        {
                            Square[0][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if (Square[1][1]==Square[0][1] and Square[1][1]==Figure)
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    else if((Square[0][0]==Figure and Square[0][2]==Figure and Square[0][1]==' ') or (Square[0][0]==Figure and Square[2][0]==Figure and Square[1][0]==' ')
                            or (Square[2][0]==Figure and Square[2][2]==Figure and Square[2][1]==' ') or (Square[0][2]==Figure and Square[2][2]==Figure) and Square[1][2]==' ')
                    {
                        if ((Square[0][0]==Figure and Square[0][2]==Figure))
                        {
                            Square[0][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][0]==Figure and Square[2][0]==Figure))
                        {
                            Square[1][0]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[2][0]==Figure and Square[2][2]==Figure))
                        {
                            Square[2][1]=BFigure;
                            k++;
                            Acces=false;
                        }
                        if ((Square[0][2]==Figure and Square[2][2]==Figure))
                        {
                            Square[1][2]=BFigure;
                            k++;
                            Acces=false;
                        }
                    }
                    if(Acces)
                    {
                        for(int i=0; i<3; i++)
                            for(int j=0; j<3; j++)
                                if(Square[i][j]==' ')
                                {
                                    Square[i][j]=BFigure;
                                    k++;
                                    i=3;
                                    j=3;
                                }
                    }
                    Acces = true;
                }
                system("cls");
            }

            bool Win = false;
            int Full=0;
            bool Nichia = false;

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    if(Square[i][0]==Square[i][1] and Square[i][2]==Square[i][0] and Square[i][0]!=' ')
                    {
                        k=2;
                        Win=true;
                        FigureW=Square[i][0];
                    }
                    if(Square[0][0]==Square[1][1] and Square[2][2]==Square[0][0] and Square[0][0]!=' ')
                    {
                        Win=true;
                        FigureW=Square[0][0];
                    }
                    if(Square[0][2]==Square[1][1] and Square[2][0]==Square[0][2] and Square[0][2]!=' ')
                    {
                        k=2;
                        Win=true;
                        FigureW=Square[0][2];
                    }
                    if(Square[0][j]==Square[1][j] and Square[2][j]==Square[0][j] and Square[0][j]!=' ')
                    {
                        k=2;
                        Win=true;
                        FigureW=Square[0][j];
                    }
                    if(Square[i][j]!=' ')
                    {
                        Full++;
                    }

                }
            }

            if(Full==9 and !Win)
            {
                Nichia=true;
            }

            if(Win or Full==9)
            {
                if(Win)
                    cout<<"Игрок \""<<FigureW<<"\" выиграл!"<<endl;
                else
                    cout<<"Ничья"<<endl;

                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {

                        if(Square[i][0]==Square[i][1] and Square[i][2]==Square[i][0])
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                        }
                        else if(Square[0][j]==Square[1][j] and Square[2][j]==Square[0][j])
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                        else if(Square[0][0]==Square[1][1] and Square[1][1]==Square[2][2] and i==j)
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                        else if (Square[0][2]==Square[1][1] and Square[2][0]==Square[0][2] and (i+j)==2)
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));

                        cout<<Square[i][j];
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                        if(j==0)
                            cout<<"|";
                        if(j==1)
                            cout<<"|";
                    }
                    if(i==0)
                        cout<<endl<<"-----"<<endl;
                    if(i==1)
                        cout<<endl<<"-----"<<endl;
                }
                GameOver=true;
                DoStep=true;
                k=2;
            }
        }

    }
}





int main()
{
    setlocale(LC_ALL,"RUS");
    srand( time( 0 ) );

    bool Repeat = false;
    bool Selection = false;
    int Select = 0;
    bool Selection2 = false;

    while(!Repeat)
    {
        Selection = false;
        cout<<"Выберите режим игры: "<<endl;
        cout<<"1. Игрок против игрока."<<endl;
        cout<<"2. Игрок против компьютера."<<endl;
        cout<<"Ваш выбор: ";

        while(!Selection)
        {
            if(_kbhit)
            {
                Select = getch();
            }
            if(Select=='1' or Select=='2')
                Selection=true;
            else
                cout<<endl<<"Сделайте выбор от 1 до 2";
        }

        Filling();
        GameOver=false;
        Selection2=false;
        x = rand() % 2 + 1;

        if(Select=='2')
        {
            system("cls");
            if(x==1)
            {
                cout<<"Ваша фигура \"x\""<<endl<<endl;
                Figure='x';
                BFigure='o';
            }
            else
            {
                cout<<"Ваша фигура \"o\""<<endl<<endl;
                Figure='o';
                BFigure='x';
            }
            system("PAUSE");
        }

        while(!GameOver)
        {
            switch(Select)
            {
            case '1':
            {
                system("cls");
                PlayervsPlayer();
                break;
            }
            case '2':
            {
                system("cls");
                PlayervsBot();
                break;
            }
            }

        }


        cout<<endl<<endl<<"Выберите что делать дальше: "<<endl;
        cout<<"1. Начать новую игру."<<endl;
        cout<<"2. Выйти из игры."<<endl;

        while(!Selection2)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '1':
                {
                    system("cls");
                    Selection2=true;
                    Selection=false;
                    break;
                }
                case '2':
                {
                    system("cls");
                    Repeat=true;
                    Selection2=true;
                    break;
                }
                }
            }
        }
    }
    cout<<"Программа закончила работу"<<endl;

}
