#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int Nombre, i;
    cout<<"Taper un nmbre:";
    cin >> Nombre;
    i=2;
    
    while(Nombre %i !=0 && Nombre !=1 ) // ET : && , OU : ||
    {
      i++;
    }
    
    if (i==Nombre)
       cout<< Nombre << " est premier"<<endl;
    else
        cout<< Nombre << " n'est pas premier"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
