#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int testvar;
    
    do
    { 
    cout<<"tapez un nombre entier (0 pour sortir de la boucle:)";
    
    cin>> testvar;
}
    while (testvar !=0);
    {
    cout<< "Fin du programme"<<endl;
}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
