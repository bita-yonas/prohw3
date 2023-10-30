//
//  State.hpp
//  project3
//
//  Created by bitania yonas on 10/29/23.
//

#ifndef State_hpp
#define State_hpp

#include <stdio.h>

#endif /* State_hpp */
#ifndef STATE_H
#define STATE_H

#include <string>

using namespace std;

class State {
private:
    string name;
    double energyConsumed;  // In BTUs, not trillions of BTUs
    double sizeOfState;
    double percentageOfLandNeeded;
public:
    State();
    State(string name, double energyConsumed, double sizeOfState);
    string getName() const;
    double getPercentageOfLandNeeded() const;
    void calculatePercentageOfLandNeeded();
    bool operator<(const State& other) const;
};

#endif // STATE_H

