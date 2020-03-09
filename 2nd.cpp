#include <iostream>

using namespace std;

namespace Luftmysza
{
    struct daneWW
    {
    int numer;
    char znak;
    };
    int dodaj(int a, int b)
    {
    return((a+b));
    }
}

int main()
{
    Luftmysza::daneWW dane;
    dane.numer = 88;
    dane.znak = 'R';
    cout << "dane.numer= " << dane.numer << endl;
    cout << "dane.znak= " << dane.znak << endl;
    cout << "dane.liczba+12= " << Luftmysza::dodaj(dane.numer,12) << endl;
    {
    using namespace Luftmysza;
    daneWW zmienna;
    zmienna.numer = 13;
    cout << "zmienna.numer= " << zmienna.numer << endl;
    cout << "zmienna.numer+12= " << dodaj(zmienna.numer, 12) << endl;
    }
    return 0;
}
