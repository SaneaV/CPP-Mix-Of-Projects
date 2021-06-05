#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <stdio.h>
#include <cstring>
#include <fstream>

using namespace std;

struct Subject
{
    int Color;
    char NameSubject[30];
    float Medium;
} Subjectx[40];

struct Student
{
    char NameStudent[20];
    char SurnameStudent[20];
    float Medium;
} Studentx[40];

//����� ������
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

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    bool main=true;

    while (main)
    {

        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));

        cout<<setw(40)<<"����� ����������!"<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<"1. ������ (���� ������ �� ���������)"<<endl;
        cout<<"2. ������� (���� ������ �� ��������)"<<endl;
        cout<<"3. ������� �� �����(������ �� ���������)"<<endl;
        cout<<"4. ������� �� �����(������ ��������)"<<endl;
        cout<<"5. ������ ���������� (���� � ������ ���������)"<<endl;
        cout<<"6. �� ������."<<endl;
        cout<<"7. ����� �� ���������"<<endl;
        cout<<"�������� �����: ";
        int choose;

        while (!(cin>>choose) or choose>7 or choose<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<"������, �� ����� ���-�� �� ��. "<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n��������� ����: ";
        }

        if (choose==1)
        {

            system("cls");

            int SubjectNumber=0;
            char SubjectName[20];
            int SubjectColor;


            float y=1.0,S=0;
            char x[10];
            int t = 1;
            int i=0;
            int Note;
            int stop=1;
            int C;
            bool Subjecty=true;
            bool Exit=true;

            while (Subjecty)
            {
                y=1;
                S=0;
                t=1;
                Subjecty=true;
                cout<<"������� \"";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                cout<<"�����";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cout<<"\" ��� \"";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                cout<<"Exit";
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cout<<"\" ��� ������ �� ���������."<<endl;
                cout<<"������� �������� ��������: ";
                cin.ignore();

                gets(Subjectx[SubjectNumber].NameSubject);

                if (strcmp(Subjectx[SubjectNumber].NameSubject,"exit")==0 or strcmp(Subjectx[SubjectNumber].NameSubject,"Exit")==0 or strcmp(Subjectx[SubjectNumber].NameSubject,"�����")==0 or strcmp(Subjectx[SubjectNumber].NameSubject,"�����")==0)
                {
                    Subjecty=false;
                    t=0;
                    Exit=false;
                    system ("cls");
                }

                if (Exit)
                {
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Blue));
                    cout<<"1. �����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
                    cout<<"2. ������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Cyan));
                    cout<<"3. ���������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Red));
                    cout<<"4. �������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Magenta));
                    cout<<"5. ����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Brown));
                    cout<<"6. ����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGray));
                    cout<<"7. ������-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | DarkGray));
                    cout<<"8. Ҹ���-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightBlue));
                    cout<<"9. ������-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"10. ������-������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightCyan));
                    cout<<"11. ������-���������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"12. ������-�������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightMagenta));
                    cout<<"13. ������-����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<"14. Ƹ����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<"15. �����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<"\n\n\n16. �����.\n\n\n"<<endl;
                    cout<<"�������� ����: ";

                    while (!(cin>>SubjectColor) or SubjectColor>16 or SubjectColor<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }


                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | SubjectColor));
                    cout<<Subjectx[SubjectNumber].NameSubject<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<"a) ������� �� ������ �������."<<endl;
                    cout<<"b) ��������� ������� ������."<<endl;
                    cout<<"�) ����� �� ���������.";
                    cout<<"\n\n\n";
                    int k=1;
                    while(t!=0)
                    {
                        cout<<"\n������� ���� ������: \n"<<y<<". ";
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | SubjectColor));
                        cin>>x;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        stop=1;


                        if (x[i]=='a' or x[i]=='A' or x[i]=='�' or x[i]=='�')
                        {
                            t=0;
                            stop=0;
                        }

                        if (x[i]=='b' or x[i]=='B' or x[i]=='�' or x[i]=='�')
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                            cout<<"��������: ��������� �� ����� �������� ���� ������ ������"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                            S-=C;
                            y-=1;
                            stop=0;

                        }

                        if (x[i]=='c' or x[i]=='C' or x[i]=='�' or x[i]=='�')
                        {
                            Subjecty=false;
                            t=0;
                            stop=0;
                        }
                        if (y<=0)
                            y=1;
                        if (S<=0)
                            S=0;

                        if (stop!=0)
                            Note = atoi(x);


                        if (Note<1 or Note>10 and Subjecty)
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"�� ��������� ������.\n��������� ����. "<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        }

                        if (Note>0 and Note<11 and t!=0 and stop!=0 and Subjecty)
                        {
                            S+=Note;
                            y+=1;
                        }
                        C=Note;

                    }
                    float med=S/(--y);
                    cout<<"��� ������� ����: ";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | SubjectColor));
                    cout<<setprecision(3)<<med<<"\n\n\n";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    system("pause");
                    system("cls");


                    for (int j=SubjectNumber; j<=SubjectNumber; j++)
                    {
                        strcpy(SubjectName,Subjectx[i].NameSubject);
                        Subjectx[j].Color=SubjectColor;
                        Subjectx[j].Medium=med;
                    }
                    SubjectNumber++;


                }
            }


            for (int i=0; i<SubjectNumber; i++)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[i].Color));
                cout<<Subjectx[i].NameSubject<<setw(15)<<Subjectx[i].Medium<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            }

            cout<<endl<<endl;
            cout<<"1. ������ �������� � ����."<<endl;
            cout<<"2. ��������� � ������� ����."<<endl;
            cout<<"3. ���������� ��������� �� ��������."<<endl;
            cout<<"4. ���������� ��������� �� �������� �����."<<endl;
            cout<<"5. ����� �� ���������."<<endl;
            cout<<"�� ���������: ";
            int SelectMain;

            while (!(cin>>SelectMain) or SelectMain>5 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (SelectMain==1)
            {
                ofstream f("Notes.txt");

                for (int j=0; j<SubjectNumber; j++)
                {
                    if (j==0)
                        f<<SubjectNumber<<endl;
                    f<<Subjectx[j].Color<<" "<<Subjectx[j].NameSubject<<" "<<Subjectx[j].Medium<<endl;
                }
                f.close();
                system("cls");
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                cout<<"������ � ���� ������ �������";
                cout<<endl<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                cout<<"1. ��������� � ������� ����."<<endl;
                cout<<"2. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";

                int chooseMain;
                while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }

                if (chooseMain==1)
                {
                    system("cls");
                }
                else if (chooseMain==2)
                    main=false;
            }

            if (SelectMain==2)
            {
                system("cls");
            }

            if (SelectMain==3)
            {
                system("cls");
                for (int i=0; i<SubjectNumber-1; i++)
                {
                    for (int j=0; j<SubjectNumber-1-i; j++)
                    {
                        if(strcmp(Subjectx[j].NameSubject,Subjectx[j+1].NameSubject)>0)
                        {
                            {
                                int c = Subjectx[j].Color;
                                char n[50];
                                strcpy (n,Subjectx[j].NameSubject);
                                float m = Subjectx[j].Medium;

                                Subjectx[j].Color = Subjectx[j+1].Color;
                                strcpy (Subjectx[j].NameSubject, Subjectx[j+1].NameSubject);
                                Subjectx[j].Medium = Subjectx[j+1].Medium;

                                Subjectx[j+1].Color = c;
                                strcpy (Subjectx[j+1].NameSubject,n);
                                Subjectx[j+1].Medium = m;
                            }
                        }
                    }
                }
                for (int i=0; i<SubjectNumber; i++)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[i].Color));
                    cout<<Subjectx[i].NameSubject<<setw(15)<<Subjectx[i].Medium<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                }

                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectSort;

                while (!(cin>>SelectSort) or SelectSort>3 or SelectSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }


                if (SelectSort==1)
                {
                    ofstream f("Notes.txt");

                    for (int j=0; j<SubjectNumber; j++)
                    {
                        if (j==0)
                            f<<SubjectNumber<<endl;
                        f<<Subjectx[j].Color<<" "<<Subjectx[j].NameSubject<<" "<<Subjectx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int chooseMain;
                    while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }

                    if (chooseMain==1)
                    {
                        system("cls");
                    }
                    else if (chooseMain==2)
                        main=false;
                }

                if (SelectSort==2)
                {
                    system("cls");
                }

                if (SelectSort==3)
                {
                    main=false;
                }
            }

            if (SelectMain==4)
            {
                system ("cls");
                for (int i=0; i<SubjectNumber-1; i++)
                {
                    for (int j=0; j<SubjectNumber-1-i; j++)
                    {
                        if (Subjectx[j].Medium>Subjectx[j+1].Medium)
                        {
                            int c = Subjectx[j].Color;
                            char n[50];
                            strcpy (n,Subjectx[j].NameSubject);
                            float m = Subjectx[j].Medium;

                            Subjectx[j].Color = Subjectx[j+1].Color;
                            strcpy (Subjectx[j].NameSubject, Subjectx[j+1].NameSubject);
                            Subjectx[j].Medium = Subjectx[j+1].Medium;

                            Subjectx[j+1].Color = c;
                            strcpy (Subjectx[j+1].NameSubject,n);
                            Subjectx[j+1].Medium = m;
                        }
                    }
                }

                for (int i=0; i<SubjectNumber; i++)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[i].Color));
                    cout<<Subjectx[i].NameSubject<<setw(15)<<Subjectx[i].Medium<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                }


                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectSort;

                while (!(cin>>SelectSort) or SelectSort>3 or SelectSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }


                if (SelectSort==1)
                {
                    ofstream f("Notes.txt");

                    for (int j=0; j<SubjectNumber; j++)
                    {
                        if (j==0)
                            f<<SubjectNumber<<endl;
                        f<<Subjectx[j].Color<<" "<<Subjectx[j].NameSubject<<" "<<Subjectx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int chooseMain;
                    while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }

                    if (chooseMain==1)
                    {
                        system("cls");
                    }
                    else if (chooseMain==2)
                        main=false;
                }

                if (SelectSort==2)
                {
                    system("cls");
                }

                if (SelectSort==3)
                {
                    main=false;
                }

            }


            else if (SelectMain==5)
                main=false;

        }

        if (choose==2)
        {
            system("cls");

            bool StudentY=true;
            int T=1;
            char x[10];
            int y=1;
            int Note;
            int Sum=0;
            bool StudentsNotes=true;
            bool Wrong=true;
            int Ref;
            bool stop = true;
            int MainColor = 15;

            cout<<"������� \"0\" ��� ������."<<endl;
            cout<<"������� ���������� ��������: ";

            int NumberStudents=0;
            while (!(cin>>NumberStudents))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (NumberStudents==0)
            {
                StudentY = false;
                system ("cls");
            }


            while (StudentY)
            {

                system("cls");
                for (int i=0; i<NumberStudents; i++)
                {
                    cout<<"������ �����: "<<i+1<<endl;
                    cout<<"������� ������� �������: ";
                    cin>>Studentx[i].SurnameStudent;
                    cout<<"������� ��� �������: ";
                    cin>>Studentx[i].NameStudent;
                    system("cls");
                }

                system("cls");

                cout<<"1. ��� ����� ������"<<endl;
                cout<<"2. ���������� �����"<<endl;
                cout<<"�� ���������: ";
                int Color;
                while (!(cin>>Color) or Color>2 or Color<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }
                int StudentColor1;
                int StudentColor2;

                if (Color==1)
                {
                    StudentColor1=15;
                    StudentColor2=15;
                }

                if (Color==2)
                {
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Blue));
                    cout<<"1. �����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
                    cout<<"2. ������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Cyan));
                    cout<<"3. ���������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Red));
                    cout<<"4. �������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Magenta));
                    cout<<"5. ����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Brown));
                    cout<<"6. ����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGray));
                    cout<<"7. ������-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | DarkGray));
                    cout<<"8. Ҹ���-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightBlue));
                    cout<<"9. ������-�����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"10. ������-������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightCyan));
                    cout<<"11. ������-���������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"12. ������-�������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightMagenta));
                    cout<<"13. ������-����������."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<"14. Ƹ����."<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<"15. �����."<<endl;
                    cout<<"�������� ���� ��� ��������� �������: ";
                    while (!(cin>>StudentColor1) or StudentColor1>15 or StudentColor1<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }
                    cout<<"�������� ���� ��� ������� �������: ";
                    while (!(cin>>StudentColor2) or StudentColor2>15 or StudentColor2<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }

                }

                system("cls");

                for (int i=0; i<NumberStudents; i++)
                {
                    T=1;
                    y=1;
                    Sum=0;
                    StudentsNotes=true;
                    bool ColorColor=((i+1)%2!=0);
                    if (Color==2)
                    {
                        if (ColorColor)
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                            MainColor=StudentColor1;
                        }
                        else
                        {
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                            MainColor=StudentColor2;
                        }
                    }
                    cout<<Studentx[i].SurnameStudent<<" "<<Studentx[i].NameStudent<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    while (StudentsNotes)
                    {
                        cout<<"a) ������� �� ���������� �������"<<endl;
                        cout<<"b) ��������� ������� ������."<<endl;
                        cout<<"\n\n\n";

                        while(T!=0)
                        {
                            Wrong = true;
                            stop = true;
                            cout<<"������� ������: "<<endl<<y<<". ";
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | MainColor));
                            cin>>x;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            cout<<endl;

                            if (x[0]=='a' or x[0]=='A' or x[0]=='�' or x[0]=='�')
                            {
                                T=0;
                                StudentsNotes=false;
                            }

                            if (x[0]=='b' or x[0]=='B' or x[0]=='�' or x[0]=='�')
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<"��������: ��������� �� ����� �������� ���� ������ ������"<<endl;
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                                Sum-=Ref;
                                y--;
                                stop = false;
                            }

                            if (y<=0)
                                y=1;
                            if (Sum<=0)
                                Sum=0;

                            if (T!=0 and StudentsNotes and stop)
                                Note = atoi(x);

                            if (Note<1 or Note>10 and StudentsNotes and stop)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                                cout<<"�� ��������� ������.\n��������� ����. "<<endl;
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                                Wrong = false;
                            }

                            if (T!=0 and StudentsNotes and Wrong and stop)
                            {
                                Sum+=Note;
                                y++;
                            }
                            Ref=Note;
                        }

                        system("cls");
                        float med=Sum*1.0/(--y)*1.0;
                        Studentx[i].Medium = med;
                        cout<<"������� ������ ������� ";
                        if (Color==2)
                        {
                            if (ColorColor)
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                            else
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                        }
                        cout<<Studentx[i].SurnameStudent<<" "<<Studentx[i].NameStudent<<" - "<<setprecision(3)<<med<<endl<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        system("pause");
                        system("cls");

                        if (NumberStudents == i+1)
                        {
                            for (int q=0; q<NumberStudents; q++)
                            {
                                if (Color==2)
                                {
                                    ColorColor=((q+1)%2!=0);
                                    if (ColorColor)
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                                    else
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                                }
                                cout<<Studentx[q].SurnameStudent<<" "<<Studentx[q].NameStudent<<" "<<setprecision(3)<<Studentx[q].Medium<<endl;
                            }
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));


                            cout<<endl<<endl;
                            cout<<"1. ������ �������� � ����."<<endl;
                            cout<<"2. ��������� � ������� ����."<<endl;
                            cout<<"3. ������������� �� ��."<<endl;
                            cout<<"4. ������������� �� �������� �����."<<endl;
                            cout<<"5. ����� �� ���������."<<endl;
                            cout<<"�� ���������: ";
                            int SelectMain;

                            while (!(cin>>SelectMain) or SelectMain>5 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                            {
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                                cin.clear();//������� �����
                                cin.sync();//������� ������ �� �������
                                cout<<"\n��������� ����: ";
                            }

                            if (SelectMain==1)
                            {
                                ofstream f("Students.txt");

                                for (int j=0; j<NumberStudents; j++)
                                {
                                    if (j==0)
                                    {
                                        f<<NumberStudents<<endl;
                                        if (Color==1)
                                        {
                                            StudentColor1=15;
                                            StudentColor2=15;
                                        }
                                        if (Color==2)
                                        {
                                            ColorColor=((i+1)%2!=0);
                                            if (ColorColor)
                                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                                            else
                                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                                        }
                                        f<<StudentColor1<<endl;
                                        f<<StudentColor2<<endl;
                                    }

                                    f<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<Studentx[j].Medium<<endl;
                                }
                                f.close();
                                system("cls");
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                cout<<"������ � ���� ������ �������";
                                cout<<endl<<endl;
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                                cout<<"1. ��������� � ������� ����."<<endl;
                                cout<<"2. ����� �� ���������."<<endl;
                                cout<<"�� ���������: ";

                                int chooseMain;
                                while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                                {
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                                    cin.clear();//������� �����
                                    cin.sync();//������� ������ �� �������
                                    cout<<"\n��������� ����: ";
                                }
                                if (chooseMain==1)
                                {
                                    system("cls");
                                    StudentY=false;
                                }
                                else if (chooseMain==2)
                                {
                                    StudentY=false;
                                    main=false;
                                }
                            }

                            if (SelectMain==2)
                            {
                                system("cls");
                                StudentY=false;
                            }

                            if (SelectMain==3)
                            {
                system("cls");
                for (int i=0; i<NumberStudents-1; i++)
                {
                    for (int j=0; j<NumberStudents-1-i; j++)
                    {
                        if(strcmp(Studentx[j].SurnameStudent,Studentx[j+1].SurnameStudent)>0)
                        {
                            char Name[50];
                            char Surname[50];
                            float Medium;

                            strcpy(Name,Studentx[j].NameStudent);
                            strcpy(Surname,Studentx[j].SurnameStudent);
                            Medium=Studentx[j].Medium;

                            strcpy(Studentx[j].NameStudent,Studentx[j+1].NameStudent);
                            strcpy(Studentx[j].SurnameStudent,Studentx[j+1].SurnameStudent);
                            Studentx[j].Medium = Studentx[j+1].Medium;

                            strcpy(Studentx[j+1].NameStudent,Name);
                            strcpy(Studentx[j+1].SurnameStudent,Surname);
                            Studentx[j+1].Medium = Medium;
                        }

                    }


                }
                for (int j=0; j<NumberStudents; j++)
                {
                    if ((j+1)%2!=0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                    }
                    else if ((j+1)%2==0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                    }

                    cout<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<setprecision(3)<<Studentx[j].Medium<<endl;
                }
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));


                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectMain;

                while (!(cin>>SelectMain) or SelectMain>3 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }

                if (SelectMain==1)
                {
                    ofstream f("Students.txt");

                    for (int j=0; j<NumberStudents; j++)
                    {
                        if (j==0)
                        {
                            f<<NumberStudents<<endl;
                            f<<StudentColor1<<endl;
                            f<<StudentColor2<<endl;
                        }

                        f<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<Studentx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int ChoseSort;
                    while (!(cin>>ChoseSort) or ChoseSort>2 or ChoseSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }
                    if (ChoseSort==1)
                    {
                        system("cls");
                    }
                    else if (ChoseSort==2)
                    {
                        main=false;
                    }
                }
                if (SelectMain==2)
                {
                    system("cls");
                }

                else if (SelectMain==3)
                {
                    main=false;
                }
                            }

                            if (SelectMain==4)
                            {

                                system("cls");
                                for (int i=0; i<NumberStudents-1; i++)
                                {
                                    int pmax=i;
                                    for (int j=i+1; j<NumberStudents; j++)
                                        if (Studentx[j].Medium<Studentx[pmax].Medium)
                                        {
                                            pmax=i;
                                            char Name[50];
                                            char Surname[50];
                                            float Medium;

                                            strcpy(Name,Studentx[j].NameStudent);
                                            strcpy(Surname,Studentx[j].SurnameStudent);
                                            Medium=Studentx[j].Medium;

                                            strcpy(Studentx[j].NameStudent,Studentx[pmax].NameStudent);
                                            strcpy(Studentx[j].SurnameStudent,Studentx[pmax].SurnameStudent);
                                            Studentx[j].Medium = Studentx[pmax].Medium;

                                            strcpy(Studentx[pmax].NameStudent,Name);
                                            strcpy(Studentx[pmax].SurnameStudent,Surname);
                                            Studentx[pmax].Medium = Medium;


                                        }
                                }

                                for (int j=0; j<NumberStudents; j++)
                                {
                                    if ((j+1)%2!=0)
                                    {
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                                    }
                                    else if ((j+1)%2==0)
                                    {
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                                    }

                                    cout<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<setprecision(3)<<Studentx[j].Medium<<endl;
                                }
                                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                                cout<<endl<<endl;
                                cout<<"1. ������ �������� � ����."<<endl;
                                cout<<"2. ��������� � ������� ����."<<endl;
                                cout<<"3. ����� �� ���������."<<endl;
                                cout<<"�� ���������: ";
                                int SelectMain;

                                while (!(cin>>SelectMain) or SelectMain>3 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                                {
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                                    cin.clear();//������� �����
                                    cin.sync();//������� ������ �� �������
                                    cout<<"\n��������� ����: ";
                                }

                                if (SelectMain==1)
                                {
                                    ofstream f("Students.txt");

                                    for (int j=0; j<NumberStudents; j++)
                                    {
                                        if (j==0)
                                        {
                                            f<<NumberStudents<<endl;
                                            f<<StudentColor1<<endl;
                                            f<<StudentColor2<<endl;
                                        }

                                        f<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<Studentx[j].Medium<<endl;
                                    }
                                    f.close();
                                    system("cls");
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                                    cout<<"������ � ���� ������ �������";
                                    cout<<endl<<endl;
                                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                                    cout<<"1. ��������� � ������� ����."<<endl;
                                    cout<<"2. ����� �� ���������."<<endl;
                                    cout<<"�� ���������: ";

                                    int ChoseSort;
                                    while (!(cin>>ChoseSort) or ChoseSort>2 or ChoseSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                                    {
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                                        cin.clear();//������� �����
                                        cin.sync();//������� ������ �� �������
                                        cout<<"\n��������� ����: ";
                                    }
                                    if (ChoseSort==1)
                                    {
                                        system("cls");
                                        StudentY=false;
                                    }
                                    else if (ChoseSort==2)
                                    {
                                        main=false;
                                    }

                                }
                            }

                            else if (SelectMain==5)
                                main=false;

                        }
                    }

                }
            }
        }

        if (choose==3)
        {
            system("cls");
            ifstream f("Notes.txt");
            int SubjectNumber;
            f>>SubjectNumber;

            for (int j=0; j<SubjectNumber; j++)
            {
                f>>Subjectx[j].Color>>Subjectx[j].NameSubject>>Subjectx[j].Medium;
            }
            f.close();


            for (int j=0; j<SubjectNumber; j++)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[j].Color));
                cout<<Subjectx[j].NameSubject<<" "<<setprecision(3)<<Subjectx[j].Medium<<endl;
            }
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cout<<endl<<endl;

            cout<<"1. ��������� � ������� ����."<<endl;
            cout<<"2. ���������� ��������� �� ��������."<<endl;
            cout<<"3. ���������� ��������� �� �������� �����."<<endl;
            cout<<"4. ����� �� ���������."<<endl;
            cout<<"�� ���������: ";

            int chooseMain;
            while (!(cin>>chooseMain) or chooseMain>4 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (chooseMain==1)
            {
                system("cls");
            }

            if (chooseMain==2)
            {
                system("cls");
                for (int i=0; i<SubjectNumber-1; i++)
                {
                    for (int j=0; j<SubjectNumber-1-i; j++)
                    {
                        if(strcmp(Subjectx[j].NameSubject,Subjectx[j+1].NameSubject)>0)
                        {
                            {
                                int c = Subjectx[j].Color;
                                char n[50];
                                strcpy (n,Subjectx[j].NameSubject);
                                float m = Subjectx[j].Medium;

                                Subjectx[j].Color = Subjectx[j+1].Color;
                                strcpy (Subjectx[j].NameSubject, Subjectx[j+1].NameSubject);
                                Subjectx[j].Medium = Subjectx[j+1].Medium;

                                Subjectx[j+1].Color = c;
                                strcpy (Subjectx[j+1].NameSubject,n);
                                Subjectx[j+1].Medium = m;
                            }
                        }
                    }
                }
                for (int i=0; i<SubjectNumber; i++)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[i].Color));
                    cout<<Subjectx[i].NameSubject<<setw(15)<<Subjectx[i].Medium<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                }

                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectSort;

                while (!(cin>>SelectSort) or SelectSort>3 or SelectSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }


                if (SelectSort==1)
                {
                    ofstream f("Notes.txt");

                    for (int j=0; j<SubjectNumber; j++)
                    {
                        if (j==0)
                            f<<SubjectNumber<<endl;
                        f<<Subjectx[j].Color<<" "<<Subjectx[j].NameSubject<<" "<<Subjectx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int chooseMain;
                    while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }

                    if (chooseMain==1)
                    {
                        system("cls");
                    }
                    else if (chooseMain==2)
                        main=false;
                }

                if (SelectSort==2)
                {
                    system("cls");
                }

                if (SelectSort==3)
                {
                    main=false;
                }
            }


            if (chooseMain==3)
            {
                system ("cls");
                for (int i=0; i<SubjectNumber-1; i++)
                {
                    for (int j=0; j<SubjectNumber-1-i; j++)
                    {
                        if (Subjectx[j].Medium>Subjectx[j+1].Medium)
                        {
                            int c = Subjectx[j].Color;
                            char n[50];
                            strcpy (n,Subjectx[j].NameSubject);
                            float m = Subjectx[j].Medium;

                            Subjectx[j].Color = Subjectx[j+1].Color;
                            strcpy (Subjectx[j].NameSubject, Subjectx[j+1].NameSubject);
                            Subjectx[j].Medium = Subjectx[j+1].Medium;

                            Subjectx[j+1].Color = c;
                            strcpy (Subjectx[j+1].NameSubject,n);
                            Subjectx[j+1].Medium = m;
                        }

                    }
                }


                for (int i=0; i<SubjectNumber; i++)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Subjectx[i].Color));
                    cout<<Subjectx[i].NameSubject<<setw(15)<<Subjectx[i].Medium<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                }


                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectSort;

                while (!(cin>>SelectSort) or SelectSort>3 or SelectSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }


                if (SelectSort==1)
                {
                    ofstream f("Notes.txt");

                    for (int j=0; j<SubjectNumber; j++)
                    {
                        if (j==0)
                            f<<SubjectNumber<<endl;
                        f<<Subjectx[j].Color<<" "<<Subjectx[j].NameSubject<<" "<<Subjectx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int chooseMain;
                    while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }

                    if (chooseMain==1)
                    {
                        system("cls");
                    }
                    else if (chooseMain==2)
                        main=false;
                }

                if (SelectSort==2)
                {
                    system("cls");
                }

                if (SelectSort==3)
                {
                    main=false;
                }
            }
            else if (chooseMain==4)
                main=false;
        }




        if (choose==4)
        {
            system("cls");
            ifstream f("Students.txt");
            int NumberStudents;
            int StudentColor1;
            int StudentColor2;
            f>>NumberStudents;
            f>>StudentColor1;
            f>>StudentColor2;

            for (int j=0; j<NumberStudents; j++)
            {
                f>>Studentx[j].SurnameStudent>>Studentx[j].NameStudent>>Studentx[j].Medium;
            }
            f.close();


            for (int j=0; j<NumberStudents; j++)
            {
                if ((j+1)%2!=0)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                }
                else if ((j+1)%2==0)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                }

                cout<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<setprecision(3)<<Studentx[j].Medium<<endl;
            }
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
            cout<<endl<<endl;

            cout<<"1. ��������� � ������� ����."<<endl;
            cout<<"2. ����������� �� �������� �����."<<endl;
            cout<<"3. ����������� �� ��."<<endl;
            cout<<"4. ����� �� ���������."<<endl;
            cout<<"�� ���������: ";

            int chooseMain;
            while (!(cin>>chooseMain) or chooseMain>3 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (chooseMain==1)
            {
                system("cls");
            }

            if (chooseMain==2)
            {
                system("cls");
                for (int i=0; i<NumberStudents-1; i++)
                {
                    int pmax=i;
                    for (int j=i+1; j<NumberStudents; j++)
                        if (Studentx[j].Medium<Studentx[pmax].Medium)
                        {
                            pmax=i;
                            char Name[50];
                            char Surname[50];
                            float Medium;

                            strcpy(Name,Studentx[j].NameStudent);
                            strcpy(Surname,Studentx[j].SurnameStudent);
                            Medium=Studentx[j].Medium;

                            strcpy(Studentx[j].NameStudent,Studentx[pmax].NameStudent);
                            strcpy(Studentx[j].SurnameStudent,Studentx[pmax].SurnameStudent);
                            Studentx[j].Medium = Studentx[pmax].Medium;

                            strcpy(Studentx[pmax].NameStudent,Name);
                            strcpy(Studentx[pmax].SurnameStudent,Surname);
                            Studentx[pmax].Medium = Medium;


                        }
                }

                for (int j=0; j<NumberStudents; j++)
                {
                    if ((j+1)%2!=0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                    }
                    else if ((j+1)%2==0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                    }

                    cout<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<setprecision(3)<<Studentx[j].Medium<<endl;
                }
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectMain;

                while (!(cin>>SelectMain) or SelectMain>3 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }

                if (SelectMain==1)
                {
                    ofstream f("Students.txt");

                    for (int j=0; j<NumberStudents; j++)
                    {
                        if (j==0)
                        {
                            f<<NumberStudents<<endl;
                            f<<StudentColor1<<endl;
                            f<<StudentColor2<<endl;
                        }

                        f<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<Studentx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int ChoseSort;
                    while (!(cin>>ChoseSort) or ChoseSort>2 or ChoseSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }
                    if (ChoseSort==1)
                    {
                        system("cls");
                    }
                    else if (ChoseSort==2)
                    {
                        main=false;
                    }
                }
                if (SelectMain==2)
                {
                    system("cls");
                }

                else if (SelectMain==3)
                {
                    main=false;
                }

            }

            if (chooseMain==3)
            {
                system("cls");
                for (int i=0; i<NumberStudents-1; i++)
                {
                    for (int j=0; j<NumberStudents-1-i; j++)
                    {
                        if(strcmp (Studentx[j].SurnameStudent,Studentx[j+1].SurnameStudent)>0)
                        {
                            char Name[50];
                            char Surname[50];
                            float Medium;

                            strcpy(Name,Studentx[j].NameStudent);
                            strcpy(Surname,Studentx[j].SurnameStudent);
                            Medium=Studentx[j].Medium;

                            strcpy(Studentx[j].NameStudent,Studentx[j+1].NameStudent);
                            strcpy(Studentx[j].SurnameStudent,Studentx[j+1].SurnameStudent);
                            Studentx[j].Medium = Studentx[j+1].Medium;

                            strcpy(Studentx[j+1].NameStudent,Name);
                            strcpy(Studentx[j+1].SurnameStudent,Surname);
                            Studentx[j+1].Medium = Medium;
                        }

                    }


                }
                for (int j=0; j<NumberStudents; j++)
                {
                    if ((j+1)%2!=0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor1));
                    }
                    else if ((j+1)%2==0)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | StudentColor2));
                    }

                    cout<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<setprecision(3)<<Studentx[j].Medium<<endl;
                }
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));


                cout<<endl<<endl;
                cout<<"1. ������ �������� � ����."<<endl;
                cout<<"2. ��������� � ������� ����."<<endl;
                cout<<"3. ����� �� ���������."<<endl;
                cout<<"�� ���������: ";
                int SelectMain;

                while (!(cin>>SelectMain) or SelectMain>3 or SelectMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                {
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cin.clear();//������� �����
                    cin.sync();//������� ������ �� �������
                    cout<<"\n��������� ����: ";
                }

                if (SelectMain==1)
                {
                    ofstream f("Students.txt");

                    for (int j=0; j<NumberStudents; j++)
                    {
                        if (j==0)
                        {
                            f<<NumberStudents<<endl;
                            f<<StudentColor1<<endl;
                            f<<StudentColor2<<endl;
                        }

                        f<<Studentx[j].SurnameStudent<<" "<<Studentx[j].NameStudent<<" "<<Studentx[j].Medium<<endl;
                    }
                    f.close();
                    system("cls");
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"������ � ���� ������ �������";
                    cout<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

                    cout<<"1. ��������� � ������� ����."<<endl;
                    cout<<"2. ����� �� ���������."<<endl;
                    cout<<"�� ���������: ";

                    int ChoseSort;
                    while (!(cin>>ChoseSort) or ChoseSort>2 or ChoseSort<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
                    {
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                        cin.clear();//������� �����
                        cin.sync();//������� ������ �� �������
                        cout<<"\n��������� ����: ";
                    }
                    if (ChoseSort==1)
                    {
                        system("cls");
                    }
                    else if (ChoseSort==2)
                    {
                        main=false;
                    }
                }
                if (SelectMain==2)
                {
                    system("cls");
                }

                else if (SelectMain==3)
                {
                    main=false;
                }
            }


            else if (chooseMain==4)
                main=false;

        }

        if (choose==5)
        {
            system("cls");
            cout<<"��������� ��������� � ������ ���������� � �� ������������ ��� �������."<<endl<<endl<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<"1. ���� ��� ������� ������� �� ���� ���� (������� ����), ��� ���������� ������ ����������� ����� ������."<<endl;
            cout<<"����������� ������: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<"������������"<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<"��������: ��� ������� ���������� �� ����� ������ ����� ��������";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

            cout<<endl<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<"2. ���������� ��������� ��� �������� � ���������� ������ ������."<<endl;
            cout<<"����������� ������: ";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
            cout<<"�����������"<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<"��������: ��� ���������� ���� � ���������� ������ ������, ��� �������� ���� ����� �� ��������, �� �������� ����� �����.";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));


            cout<<"\n\n\n1. ��������� � ������� ����."<<endl;
            cout<<"2. ����� �� ���������."<<endl;
            cout<<"�� ���������: ";

            int chooseMain;
            while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (chooseMain==1)
            {
                system("cls");
            }
            else if (chooseMain==2)
                main=false;
        }

        if (choose==6)
        {
            system("cls");
            cout<<"������, ����!\n�, ����� ���������, ������� ���������� ������� �������. \n��� ��� ������ ������� ������, ���������� �� �����."<<endl;
            cout<<"� ��� ����� � � ������ ������� ���������� ������� ��� ��������� ����� ������� � ����������"<<endl;
            cout<<"\n\n���� � ���� ���� �����-�� ����������� ��� �� ����� ������, ���� ��� �� �����:";
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
            cout<<" SaneaVicev@mail.ru"<<endl;
            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

            cout<<"\n\n\n1. ��������� � ������� ����."<<endl;
            cout<<"2. ����� �� ���������."<<endl;
            cout<<"�� ���������: ";

            int chooseMain;
            while (!(cin>>chooseMain) or chooseMain>2 or chooseMain<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"������, �� ����� ���-�� �� ��. "<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n��������� ����: ";
            }

            if (chooseMain==1)
            {
                system("cls");
            }
            else if (chooseMain==2)
                main=false;
        }

        if (choose==7)
        {
            main=false;
        }
    }
    system("cls");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
    cout<<"��������� ������� ��������� ������!"<<endl<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
}


