#include <iostream>
#include <string>
using namespace std;
int main()
{
string xd = "Luftmysza ";
string wtf = "Affiliates";


for (int i=0; i<=xd.length(); ++i)
{
    cout << xd[i] << endl;
}
string wtfxd = xd+wtf;
cout << wtfxd << endl;

for (int i=0; i<=wtfxd.length(); i=i+2)
{
    wtfxd[i]='0';
}

cout << wtfxd << endl;

return 0;
}
