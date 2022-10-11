//
// Created by akimfeopentov on 11.10.22.
//

#ifndef UNTITLED2_CHANGEPLAYERCHARACTERISTICS_H
#define UNTITLED2_CHANGEPLAYERCHARACTERISTICS_H
#include "Event.h"
#include "../Player/Player.h"

class ChangePlayerCharacteristics: public Event{
private:
    Player player;
public:
    virtual void eventPlayer(Player& player)=0;
    void eventCell(Field &field){
        player=field.getPlayer();
        eventPlayer(player);
        field.setPlayer(player);
    }
};


#endif //UNTITLED2_CHANGEPLAYERCHARACTERISTICS_H
