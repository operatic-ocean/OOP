#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct PersonalRecord {
    string name;
    string dob;  // Date of Birth
    string phoneNumber;
};

void displayRecord(const PersonalRecord& record) {
    cout << "Name: " << record.name << ", DOB: " << record.dob
         << ", Phone Number: " << record.phoneNumber << endl;
}

int main() {
    vector<PersonalRecord> personalRecords;

    personalRecords.push_back({"John Doe", "1990-01-15", "555-1234"});
    personalRecords.push_back({"Jane Smith", "1985-07-22", "555-5678"});
    personalRecords.push_back({"Bob Johnson", "1995-03-10", "555-9090"});
    personalRecords.push_back({"Alice Brown", "1980-12-05", "555-4321"});

    cout << "Unsorted Personal Records:" << endl;
    for (const PersonalRecord& record : personalRecords) {
        displayRecord(record);
    }

    sort(personalRecords.begin(), personalRecords.end(), [](const PersonalRecord& a, const PersonalRecord& b) {
             return a.name < b.name;
         });

    cout << "\nSorted Personal Records by Name:" << endl;
    for (const PersonalRecord& record : personalRecords) {
        displayRecord(record);
    }

    cout << "\nEnter a name to search: ";
    string searchName;
    getline(cin, searchName);

    auto it = find_if(personalRecords.begin(), personalRecords.end(),[searchName](const PersonalRecord& record) {
                          return record.name == searchName;
                      });

    if (it != personalRecords.end()) {
        cout << "Record found:" << endl;
        displayRecord(*it);
    } else {
        cout << "Record not found for the entered name." << endl;
    }

    return 0;
}

