#include "libs/includes.h"
unsigned int cp = 1252;

int main()
{
    SetConsoleOutputCP(cp);
    SetConsoleOutputCP(cp);

    storeProductTypes();

    handleMenu();
    return 0;
}
