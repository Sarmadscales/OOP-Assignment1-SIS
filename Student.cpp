/*
============================================================================
File: Student.cpp
Course: CP221-F25-BS-AI-F24-AC2
Assignment: 1 - Student Information System
Author: [Your Name]
============================================================================
Description: Implementation file for Student class.
             Demonstrates ABSTRACTION by separating implementation from interface.
============================================================================
*/

#include "Student.h"
#include <iostream>
using namespace std;

// Default Constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default Constructor called for " << name << "\n";
}

// Parameterized Constructor with default arguments
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized Constructor called for " << name << "\n";
}

// Destructor
Student::~Student() {
    cout << "Destructor called for " << name << "\n";
}

// Setters
void Student::setName(string n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

void Student::setRollNo(int r) {
    rollNo = r;
}

void Student::setGpa(float g) {
    gpa = g;
}

// Getters
string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

int Student::getRollNo() const {
    return rollNo;
}

float Student::getGpa() const {
    return gpa;
}

// Utility methods
string Student::calculateGrade() const {
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.3) return "A-";
    else if (gpa >= 3.0) return "B+";
    else if (gpa >= 2.7) return "B";
    else if (gpa >= 2.3) return "B-";
    else if (gpa >= 2.0) return "C+";
    else if (gpa >= 1.7) return "C";
    else if (gpa >= 1.3) return "C-";
    else if (gpa >= 1.0) return "D";
    else return "F";
}

void Student::displayInfo() const {
    cout << "┌─────────────────────────────────────────┐\n";
    cout << "│ Name:    " << name << "\n";
    cout << "│ Age:     " << age << "\n";
    cout << "│ Roll No: " << rollNo << "\n";
    cout << "│ GPA:     " << gpa << "\n";
    cout << "│ Grade:   " << calculateGrade() << "\n";
    cout << "└─────────────────────────────────────────┘\n";
}
