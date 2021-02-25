#include "stomach.h"


Stomach::Stomach() {}

Stomach::~Stomach() {}

bool Stomach::statusCheck() const {
    return functioning;
}

void Stomach::gotHit() {
    functioning = false;
}
