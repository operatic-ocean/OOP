#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class stud
{
    string name;
    int roll;
    string className;
    char div;
    string dob;
    string bloodGroup;
    string address;
    int telephone;
    int drivingLicenseNo;

public:
    stud()
    {
        name = "";
        roll = 0;
        className = "";
        div = '-';
        dob = "";
        bloodGroup = "";
        address = "";
        telephone = 0;
        drivingLicenseNo = 0;
    }

    stud(stud const &s)
    {
        *this = s;
    }

    // Destructor doesn't need to delete this
    ~stud()
    {
    }
    friend class record;
};

class record
{
public:
    static void print()
    {
        cout << "Student Information: " << endl;
    }

    inline void display(stud s)
    {
        print();
        cout << "Student Name: " << s.name << endl;
        cout << "Roll No: " << s.roll << endl;
        cout << "Class: " << s.className << endl;
        cout << "Division: " << s.div << endl;
        cout << "Date of Birth: " << s.dob << endl;
        cout << "Blood Group: " << s.bloodGroup << endl;
        cout << "Address: " << s.address << endl;
        cout << "Telephone: " << s.telephone << endl;
        cout << "Driving License No: " << s.drivingLicenseNo << endl;
        cout << endl;
    }

    void accept(stud &s)
    {
	    	cout << "Enter Student Information:" << endl;
	        cout << "Enter Student Name: ";
	        cin.ignore(); // Ignore newline left in the buffer
	        getline(cin, s.name);
	        cout << "Enter Roll No: ";
	        cin >> s.roll;
	        cin.ignore(); // Ignore newline left in the buffer
	        cout << "Enter Class: ";
	        getline(cin, s.className);
	        cout << "Enter Division: ";
	        cin >> s.div;
	        cin.ignore(); // Ignore newline left in the buffer
	        cout << "Enter Date of Birth: ";
	        getline(cin, s.dob);
	    try{
	        cout << "Enter Blood Group: ";
	        getline(cin, s.bloodGroup);
	        if (s.bloodGroup.empty()) {
                throw invalid_argument("Blood Group cannot be empty.");
				}
			}catch(exception e){
			cerr << "Error: " << e.what() << endl;
			throw; 			
		}
        
	        cout << "Enter Address: ";
	        getline(cin, s.address);
	        cout << "Enter Telephone No: ";
	        cin>>s.telephone;
	        cout << "Enter Driving License No: ";
	        cin >> s.drivingLicenseNo;
		
    }
};

int main()
{
    int i = 0;
    cout << "Enter the number of records you want to create: ";
    cin >> i;
    stud *s = new stud[i];
    record r;
    for (int j = 0; j < i; j++)
    {
        r.accept(s[j]);
        r.display(s[j]);
    }

    delete[] s; // Deallocate the array of Student objects

    return 0;
}

