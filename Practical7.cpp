#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Create a map to store state populations
    map<string, int> statePopulations;

    // Populate the map with sample data
    statePopulations["California"] = 39512223;
    statePopulations["Texas"] = 28995881;
    statePopulations["Florida"] = 21477737;
    statePopulations["New York"] = 19453561;
    statePopulations["Pennsylvania"] = 12801989;

    // Prompt the user to enter the name of a state
    cout << "Enter the name of a state: ";
    string stateName;
    getline(cin, stateName);

    // Look up the state population in the map
    auto it = statePopulations.find(stateName);

    // Check if the state is found in the map
    if (it != statePopulations.end()) {
        // Display the population of the state
        cout << "Population of " << stateName << ": " << it->second << endl;
    } else {
        // State not found in the map
        cout << "Population data not available for " << stateName << endl;
    }

    return 0;
}

