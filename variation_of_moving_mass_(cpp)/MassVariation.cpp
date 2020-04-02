#include "MassVariation.h"

#include <cmath>

MassVariation::MassVariation() {
    this->velocityLight = 3 * pow(10, 8);
}

bool MassVariation::getData(float massInit, float velocity) {
    this->massInit = massInit;
    this->velocity = velocity;

    float denom = 1.0 - (float)(pow(this->velocity, 2) / pow(this->velocityLight, 2));
    this->mass = massInit / pow(denom, 0.5);

    if (denom > 0) {
        return true;
    } else {
        return false;
    }
}

float MassVariation::showMass() {
    return this->mass;
}