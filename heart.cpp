#include <string>
#include <iostream>
#include "heart.h"

    int rate;

    Heart::Heart(int newRate){
        rate = newRate;
    }

    Heart::Heart() { }

    Heart::~Heart(){}

    void Heart::setRate(int rate) {
        Heart::rate = rate;
    }

    int Heart::getRate(){
        return Heart::rate;
    }

    bool Heart::ok(){
        if (rate > 50)
        {
            return true;
        }
        return false;
    }
    