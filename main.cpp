#include "ArbreB.h"
//using namespace std;

int main ()
{
    ArbreB arb;
    for (int i=0; i<=100; i++)
    {
        arb.insertionElement(i);
    }
    arb.affichageInfixe();
}