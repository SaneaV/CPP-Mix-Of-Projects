#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");
    ofstream f("TelNumbers.txt");
    int A[10];


    for(int i=0; i<9; i++)
    {
        A[i]=0;
    }

    A[1]=6;
    A[8]=-1;

    for(; A[1]!=8;)
    {
        A[8]+=1;

        for(int i=8; i>=0; i--)
        {
            if(A[i]==10)
            {
                if(A[i-1]==9)
                {
                    A[i-2]+=1;
                    A[i-1]=0;
                    A[i]=0;
                }
                else
                {
                    A[i-1]+=1;
                    A[i]=0;
                }
            }
        }

        ///По сути, вывод можно осуществить и в цикле выше, но тогда возникает небольшая аномалия в последовательности.

        if(A[1]==6 and A[2]==0 and A[3]==5)
        {
            A[2]=7;
            A[3]=1;
        }

        if(A[1]==6 and A[2]==7 and A[3]==3)
        {
            A[2]=8;
            A[3]=0;
        }

        if(A[1]==7 and A[2]==0 and A[3]==0)
        {
            A[2]=8;
        }

        if(A[1]!=8)
        for(int i=0; i<9; i++)
        {
            f<<A[i];
        }
        f<<endl;

    }
    cout<<"Программа закончила работу"<<endl;
}
