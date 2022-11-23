#include "Noeud.h"
#include <iostream>
using namespace std;

Noeud::Noeud()
{
    info=0;
    filsD=nullptr;
    filsG=nullptr;
}

Noeud::Noeud(const Elem & e )
{
    info=e;
    filsD=nullptr;
    filsG=nullptr;
}

Noeud::~Noeud()
{
    delete filsD;
    delete filsG;
}

const Noeud * Noeud::rechercheElement(const Elem &e)const
{
    if (e==info)
    {
        return this; 
    }
    if ((e<info)&&(filsG!=nullptr))
    {
       return filsG->rechercheElement(e);
    }
    else if((e>info)&&(filsD!=nullptr))
    {
        return filsD->rechercheElement(e);
    }
    else return nullptr;
}



Noeud* Noeud::insertionElement(const Elem & e)
{
    
    if (e==this->info)
    {
        return this;
    }
    if (e<this->info) //cas filsG
    {
        if (filsG!=nullptr)
        {
        filsG->insertionElement(e);
        }else 
        {
            Noeud * res= new Noeud(e);
            filsG=res;
            
        }
    }
    else if (e>this->info)
    {
        if (filsD!=nullptr)
        {
        filsD->insertionElement(e);
        }else 
        {
            Noeud * res= new Noeud(e);
            filsD=res;
        }
    }
    return this; 
}

void Noeud::affichageInfixe()const 
{
    if (this->filsG!=nullptr)
    {
    this->filsG->affichageInfixe();
    }
    cout<<this->info<<endl;
    if (this->filsD!=nullptr)
    {
    this->filsD->affichageInfixe();
    }
}