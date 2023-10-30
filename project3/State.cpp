//
//  State.cpp
//  project3
//
//  Created by bitania yonas on 10/29/23.
//

#include "State.hpp"
#include "State.hpp"
#include <cmath> 

using namespace std;

State::State() : name(""), energyConsumed(0.0), sizeOfState(0.0), percentageOfLandNeeded(0.0) {}

State::State(string name, double energyConsumed, double sizeOfState)
    : name(name), energyConsumed(energyConsumed * 1000000000000), sizeOfState(sizeOfState), percentageOfLandNeeded(0.0) {}

string State::getName() const {
    return name;
}

double State::getPercentageOfLandNeeded() const {
    return percentageOfLandNeeded;
}

void State::calculatePercentageOfLandNeeded() {
    double panelsNeeded = ceil(energyConsumed / 51);
    double panelArea = panelsNeeded * 18;
    percentageOfLandNeeded = ceil((panelArea / sizeOfState) * 100);
}

bool State::operator<(const State& other) const {
    return percentageOfLandNeeded < other.percentageOfLandNeeded;
}

