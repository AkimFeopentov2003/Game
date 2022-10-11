//
// Created by akimfeopentov on 15.09.22.
//

#ifndef UNTITLED2_CELL_H
#define UNTITLED2_CELL_H

#include "../Events/Event.h"

enum TileType {
    STONE, GRASS
};
class Cell {
    TileType characteristic;
    Event* event;
public:
    Cell(TileType characteristic=GRASS){
        this->characteristic=characteristic;
    }
    char get_characteristic(){
        return characteristic;
    }
    void setCharacteristic(TileType characteristic);
    Field getEvent(){
        return *event;
    }
};


#endif //UNTITLED2_CELL_H
