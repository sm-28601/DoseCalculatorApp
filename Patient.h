#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>

class Patient {
public:
    Patient(const std::string& name, double weight, int age, char gender);
    void displayInfo() const;
    
    std::string getName() const { return name; }
    double getWeight() const { return weight; }
    int getAge() const { return age; }
    char getGender() const { return gender; }

private:
    std::string name;
    double weight;
    int age;
    char gender;
};

#endif 
