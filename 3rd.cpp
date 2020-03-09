#include<iostream>
using namespace std;

int main()
{
int mm ;
long double xx[20];
float yy[20];
double zz[20];
        cout << "Godzina prawdy. W tym komputerze "
                << "poszczegolne typy\n"
                << "maja nastepujace rozmiary w bajtach: \n"  ;

        cout << "typ char        : \t" << sizeof(char) << endl ;
        cout << "typ int         : \t" << sizeof(int) << endl ;
        cout << "typ short       : \t" << sizeof(short) << endl ;
        cout << "typ long        : \t" << sizeof(long) << endl ;
        cout << "typ float       : \t" << sizeof(float) << endl ;
        cout << "typ double      : \t" << sizeof(double) << endl ;
        cout << "typ long double : \t"<< sizeof(long double)
                                                        << endl ;
        cout << "(rozmiar bitowy) tablica long double : "
                 << sizeof(xx) << endl ;
        cout << "(rozmiar bitowy) tablica float : "
                 << sizeof(yy) << endl ;
        cout << "(rozmiar bitowy) tablica double : "
                 << sizeof(zz) << endl ;
        cout << "tablica long double : "
                 << (sizeof(xx)/sizeof(*xx)) << endl ;
        cout << "tablica float : "
                 << (sizeof(yy)/sizeof(*yy)) << endl ;
        cout << "tablica double : "
                 << (sizeof(zz)/sizeof(*zz)) << endl ;
return 0;

}
