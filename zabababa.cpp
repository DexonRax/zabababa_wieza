#include "zabababa.h"
#include <iostream>

Zabababa::Zabababa() : max_frogs(10) {
    frogs = 0;
    frogs_table = new int[frogs];
}

Zabababa::~Zabababa() {
    delete[] frogs_table;
}

void Zabababa::addFrog(int size){
    if(frogs != 0){
        if(frogs_table[frogs-1] <= size){
            std::cout<<"frog too big ("<<size<<")\n";
            return;
        }
    }
    int frogs_copy[frogs];
    for(int i = 0; i < frogs; i++){
        frogs_copy[i] = frogs_table[i];
    }
    delete[] frogs_table;
    
    frogs_table = new int[frogs+1];
    for(int i = 0; i < frogs; i++){
        frogs_table[i] = frogs_copy[i];
    }
    frogs_table[frogs] = size;
    frogs++;

    std::cout<<"added frog of size "<<size<<"\n";
}


void Zabababa::takeTopFrog(){
    if(frogs == 0){
        std::cout<<"theres no frogs to take\n";
        return;
    }
    std::cout<<"taken frog of size "<<frogs_table[frogs-1]<<"\n";
    int frogs_copy[frogs];
    for(int i = 0; i < frogs; i++){
        frogs_copy[i] = frogs_table[i];
    }
    delete[] frogs_table;
    
    frogs_table = new int[frogs-1];
    for(int i = 0; i < frogs-1; i++){
        frogs_table[i] = frogs_copy[i];
    }
    frogs--;

}

void Zabababa::showFrogs() {
    std::cout<<"\n";
    if(frogs == 0){
        std::cout<<"no frogs L\n";
        return;
    }
    for (int i = 0; i < frogs; i++) {
        std::cout << "frog " << i+1 << " size = " << frogs_table[i] << std::endl;
    }
    std::cout<<"\n";
}
