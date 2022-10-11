//
// Created by akimfeopentov on 11.10.22.
//

#ifndef UNTITLED2_HPDEC_H
#define UNTITLED2_HPDEC_H

#include "HpEvent.h"

class HpDec : public HpEvent {
public:
    //if
    int changePh(int hp) {
        if (hp >= 10)
            hp -= 10;
        else
            hp = 0;
    }
};


#endif //UNTITLED2_HPDEC_H
