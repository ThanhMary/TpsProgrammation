#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
    int nb;
    
    cout<<"Taper un nobmre entier:";
    cin>> nb;
    if (nb%2==0)
    {
    cout<<nb<< "est pair" <<endl;
    }
    else
    {
    cout<<nb<< "est impair" <<endl;
    }
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
