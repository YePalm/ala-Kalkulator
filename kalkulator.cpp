#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char l;

int main()
{

while (true)
{
    cout << "Podaj 1 liczbe "; cin>>x;
    cout << "Podaj 2 liczbe "; cin>>y;

    cout << "MENU" << endl;
    cout << "------------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Exit" << endl;
    cout << "6. Informacje o karcie sieciowej" << endl;
    cout << "------------------" << endl;

    cout << endl;
    l=getch();

    switch(l)
    {
        case '1':
            cout<<"Suma wynosi: "<<x+y;
        break;
        case '2':
            cout<<"Roznica wynosi: "<<x-y;
        break;
        case '3':
            cout<<"Iloczyn wynosi: "<<x*y;
        break;
        case '4':
            if  (y==0) cout <<"Zla dana";
            else
            cout<<"Iloraz wynosi: "<<x/y;
        break;
        case '5':
            exit(0);
        break;
        case '6':
            system("ipconfig");
        break;
        default:
            cout<<"Zle dane: ";
    }
    getchar();getchar();
    system("cls");
}

    return 0;
}
