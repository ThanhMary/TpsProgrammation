#include <cstdlib>
#include <iostream>

void factoriel (int,int&);

using namespace std;

int main(int argc, char *argv[])
{
    int n,f;
    cout<< " entrez un nombre >= 1: ";
    cin>> n;
    factoriel (n, f);
    cout<<"le fectoriel de " << n << "est " << f <<endl;
 
      system("PAUSE");
    return EXIT_SUCCESS;
}
void factoriel (int x, int & fac)
{
     int i;
     fac=1;
     for (i=1; i<=x; i++)
    {
     fac=fac*i;
    }
      
}
