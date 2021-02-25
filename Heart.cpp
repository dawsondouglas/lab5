//
// Created by Keith Lancaster on 2/20/21.
//

#include "Heart.h"

Heart::Heart(int rate):rate(rate) {}

bool Heart::ok() const {
    return(rate > 50);
}
