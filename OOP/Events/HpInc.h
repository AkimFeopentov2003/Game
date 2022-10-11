//
// Created by akimfeopentov on 11.10.22.
//

#ifndef UNTITLED2_HPINC_H
#define UNTITLED2_HPINC_H

#include "HpEvent.h"

class HpInc : public HpEvent {
    int changePh(int hp) {
        if (hp <= 90)
            hp += 10;
        else
            hp = 100;
    }
};


#endif //UNTITLED2_HPINC_H
