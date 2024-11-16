#ifndef APP_H
#define APP_H

#include "Patient.h"
#include "Medication.h"
#include <iostream>

class App {
public:
    void run();

private:
    Patient* patient = nullptr; // Pointer to patient object
    Medication* medication = nullptr; // Pointer to medication object
    
    void displayMenu(); // Show menu options
    void addPatient(); // Add a new patient
    void addMedication(); // Add medication details
    void calculateDose(); // Calculate and display the dose
    void displayPatientInfo(); // Display patient information
};

#endif
