// main.cpp
#include "zabababa.h"

int main() {
    Zabababa z1;
    z1.showFrogs();
    z1.addFrog(10);
    z1.addFrog(8);
    z1.showFrogs();
    z1.addFrog(10);
    z1.addFrog(4);
    z1.showFrogs();
    z1.takeTopFrog();
    z1.showFrogs();
    z1.takeTopFrog();
    z1.showFrogs();
    z1.addFrog(8);
    z1.addFrog(7);
    z1.addFrog(4);
    z1.addFrog(1);
    z1.showFrogs();
    z1.showFrogGraph();
    return 0;
}
