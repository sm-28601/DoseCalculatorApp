#ifndef MEDICATION_H
#define MEDICATION_H

#include <string>
#include <iostream>

class Medication {
public:
    Medication(const std::string& name, double orderedDose, double doseOnHand, double quantity);
    double calculateDose() const;
    
    string getName() const { return name; }

private:
    string name;
    double orderedDose;
    double doseOnHand;
    double quantity;
};

#endif
