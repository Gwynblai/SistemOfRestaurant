#include "D:\pois\Project8\Project8\Cleaner.h" 

    Cleaner::Cleaner(const string& name, unsigned age, int shift, bool isOnDuty, Host* host)
        : Employee(name, age), shift(shift), isOnDuty(isOnDuty), host(host) {}

    void Cleaner::cleanArea(const string& area) const {
        cout << "Cleaner " << name << " is cleaning the " << area << " area." << endl;
    }

    void Cleaner::introduce() const {
        cout << "Cleaner " << name << ", Age: " << age
            << ", Shift: " << shift
            << ", Currently " << (isOnDuty ? "on duty" : "off duty") << endl;
    }
    
    void Cleaner::receiveCleaningRequest(const string& area) const {
        if (host) {
            cout << "Cleaner " << name << " received a request from Host " << host->getname()
                << " to clean " << area << " area." << endl;
        }

    }
