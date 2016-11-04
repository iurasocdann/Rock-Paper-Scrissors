#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
int x;
char c[10],v[10];
void random_generator()
{
    srand(time(NULL));
    x=rand()%3 +1;
    switch (x)
    {
        case 1:
            {strcpy(v,"Piatra");break;}
        case 2:
            {strcpy(v,"Hartie");break;}
        case 3:
            {strcpy(v,"Foarfece");break;}
    }
}
int main()
{
    int ok=0,aux=0;
    cout<<"Bine ati venit la jocul Piatra-Hartie-Foarfece!"<<endl;
    cout<<"Introduceti unul dintre urmatoarele cuvinte:'Piatra','Hartie',Foarfece'."<<endl;
    cout<<"Scrieti cuvantul cu prima litera majuscula!"<<endl;
    while(ok==0)
    {
        random_generator();
        do
        {
            cout<<"Tu:";
            cin>>c;
            if(strcmp(c,"Hartie")==0)
                aux=1;
            else
                if(strcmp(c,"Piatra")==0)
                    aux=1;
                else
                    if(strcmp(c,"Foarfece")==0)
                        aux=1;
        }while(aux==0);
        if(strcmp(c,"Piatra")==0)
        {
            cout<<"CPU:"<<v<<endl;
            int k;
            if(strcmp(v,"Piatra")==0)
                k=2;
            if(strcmp(v,"Foarfece")==0)
                k=1;
            if(strcmp(v,"Hartie")==0)
                k=0;
            switch (k)
            {
                case 0:
                    {cout<<"Ati pierdut! Mult succes data viitoare!"<<endl;ok=1;break;}
                case 1:
                    {cout<<"Ati castigat!Felicitari!"<<endl;ok=1;break;}
                case 2:
                    {cout<<"Remiza!Alegeti din nou!"<<endl;break;}
            }
        }
        else
            if(strcmp(c,"Hartie")==0)
            {
                cout<<"CPU:"<<v<<endl;
                int k;
                if(strcmp(v,"Hartie")==0)
                    k=2;
                if(strcmp(v,"Piatra")==0)
                    k=1;
                if(strcmp(v,"Foarfece")==0)
                    k=0;
                switch (k)
                {
                    case 0:
                        {cout<<"Ati pierdut! Mult succes data viitoare!"<<endl;ok=1;break;}
                    case 1:
                        {cout<<"Ati castigat!Felicitari!"<<endl;ok=1;break;}
                    case 2:
                        {cout<<"Remiza!Alegeti din nou!"<<endl;break;}
                }
            }
            else
                if(strcmp(c,"Foarfece")==0)
                {
                    cout<<"CPU:"<<v<<endl;
                    int k;
                    if(strcmp(v,"Foarfece")==0)
                        k=2;
                    if(strcmp(v,"Hartie")==0)
                        k=1;
                    if(strcmp(v,"Piatra")==0)
                        k=0;
                    switch (k)
                    {
                        case 0:
                            {cout<<"Ati pierdut! Mult succes data viitoare!"<<endl;ok=1;break;}
                        case 1:
                            {cout<<"Ati castigat!Felicitari!"<<endl;ok=1;break;}
                        case 2:
                            {cout<<"Remiza!Alegeti din nou!"<<endl;break;}
                    }
                }
    }
    system("pause");
    return 0;
}
