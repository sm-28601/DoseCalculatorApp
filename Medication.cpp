#include "Medication.h"
#include <stdexcept>
using namespace std;

Medication::Medication(const string& name, double orderedDose, double doseOnHand, double quantity)
    : name(name), orderedDose(orderedDose), doseOnHand(doseOnHand), quantity(quantity) {}

double Medication::calculateDose() const {
    if (doseOnHand == 0) {
        throw runtime_error("Error: Dose on hand (H) cannot be zero.");
    }
    return (orderedDose / doseOnHand) * quantity;
}
