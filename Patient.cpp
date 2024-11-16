#include "Patient.h"
#include<bits/stdc++.h>
using namespace std;

Patient::Patient(const std::string& name, double weight, int age, char gender)
    : name(name), weight(weight), age(age), gender(gender) {}

void Patient::displayInfo() const {
    cout << "Patient Info:\n";
    cout << "Name: " << name << "\n";
    cout << "Weight: " << weight << " kg\n";
    cout << "Age: " << age << " years\n";
    cout << "Gender: " << gender << "\n";
}
