#include "App.h"
#include <stdexcept>
using namespace std;

void App::run() {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                addMedication();
                break;
            case 3:
                calculateDose();
                break;
            case 4:
                displayPatientInfo();
                break;
            case 0:
                cout << "Exiting the application. Goodbye!" << std::endl;
                break;
            default:
                cout << "Invalid choice, please try again." << std::endl;
        }
    } while (choice != 0);
}

void App::displayMenu() {
    cout << "\n----- Dose Calculator Menu -----\n";
    cout << "1. Add Patient\n";
    cout << "2. Add Medication\n";
    cout << "3. Calculate Dose\n";
    cout << "4. Display Patient Info\n";
    cout << "0. Exit\n";
}

void App::addPatient() {
    string name;
    double weight;
    int age;
    char gender;
    
    cout << "Enter patient name: ";
    cin >> name;
    cout << "Enter patient weight (kg): ";
    cin >> weight;
    cout << "Enter patient age: ";
    cin >> age;
    cout << "Enter patient gender (M/F): ";
    cin >> gender;

    patient = new Patient(name, weight, age, gender);
    cout << "Patient added successfully.\n";
}

void App::addMedication() {
    if (patient == nullptr) {
        cout << "Please add a patient first!\n";
        return;
    }

    string medName;
    double orderedDose, doseOnHand, quantity;

    cout << "Enter medication name: ";
    cin >> medName;
    cout << "Enter ordered dose (mg): ";
    cin >> orderedDose;
    cout << "Enter dose on hand (mg): ";
    cin >> doseOnHand;
    cout << "Enter quantity: ";
    cin >> quantity;

    medication = new Medication(medName, orderedDose, doseOnHand, quantity);
    cout << "Medication added successfully.\n";
}

void App::calculateDose() {
    if (medication == nullptr) {
        std::cout << "Please add medication details first!\n";
        return;
    }

    try {
        double dose = medication->calculateDose();
        std::cout << "Calculated Dose: " << dose << " mg\n";
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
}

void App::displayPatientInfo() {
    if (patient == nullptr) {
        std::cout << "Please add a patient first!\n";
        return;
    }
    
    patient->displayInfo();
}
