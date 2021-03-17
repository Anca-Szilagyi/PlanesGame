// Joc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tabla de joc.h"
#include "Avion.h"
#include  "Repo.h"
#include "Service.h"
#include "UI.h"


int main()
{
   
    Repo r;
    Service s(r);
    UI u(s);
    u.showUI();
   
 
    
    
}


