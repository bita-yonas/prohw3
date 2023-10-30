//
//  main.cpp
//  project3
//
//  Created by bitania yonas on 10/29/23.
//



#include <iostream>
#include <list>
#include "State.hpp"

using namespace std;

int main() {
    list<State> states;

    State tx("Texas", 13480.8, 7487580672000);
    tx.calculatePercentageOfLandNeeded();
    cout << tx.getName() << " would use " << tx.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(tx);

    State ca("California", 6922.8, 4563554688000);
    ca.calculatePercentageOfLandNeeded();
    cout << ca.getName() << " would use " << ca.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(ca);

    State la("Louisiana", 4200.4, 1445216256000);
    la.calculatePercentageOfLandNeeded();
    cout << la.getName() << " would use " << la.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(la);

    State fl("Florida", 4003.1, 1805265792000);
    fl.calculatePercentageOfLandNeeded();
    cout << fl.getName() << " would use " << fl.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(fl);

    State il("Illinois", 3612.9, 1614549657600);
    il.calculatePercentageOfLandNeeded();
    cout << il.getName() << " would use " << il.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(il);

    State pa("Pennsylvania", 3413.0, 1283967590400);
    pa.calculatePercentageOfLandNeeded();
    cout << pa.getName() << " would use " << pa.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(pa);

    State oh("Ohio", 3404.5, 1249649280000);
    oh.calculatePercentageOfLandNeeded();
    cout << oh.getName() << " would use " << oh.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(oh);

    State ny("New York", 3354.2, 1520933990400);
    ny.calculatePercentageOfLandNeeded();
    cout << ny.getName() << " would use " << ny.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(ny);

    State ga("Georgia", 2727.6, 1656673920000);
    ga.calculatePercentageOfLandNeeded();
    cout << ga.getName() << " would use " << ga.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(ga);

    State mi("Michigan", 2610.6, 2696287334400);
    mi.calculatePercentageOfLandNeeded();
    cout << mi.getName() << " would use " << mi.getPercentageOfLandNeeded() << "% of its area" << endl;
    states.push_back(mi);

    // If you want to sort and display all at once after adding all states:
    states.sort();
    cout << "\nOrdered by percentage of land needed:\n";
    for (const State& state : states) {
        cout << state.getName() << " would use " << state.getPercentageOfLandNeeded() << "% of its area" << endl;
    }

    return 0;
}
