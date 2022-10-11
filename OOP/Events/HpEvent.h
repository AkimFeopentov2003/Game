//
// Created by akimfeopentov on 11.10.22.
//

#ifndef UNTITLED2_HPEVENT_H
#define UNTITLED2_HPEVENT_H
#include "ChangePlayerCharacteristics.h"

class HpEvent: public ChangePlayerCharacteristics{
    int hp;
public:
    void eventPlayer(Player &player){
        this->hp=player.getHp();
        this->hp= changePh(this->hp);
        player.setHp(this->hp);
    }
    virtual int  changePh(int hp)=0;
};


#endif //UNTITLED2_HPEVENT_H
