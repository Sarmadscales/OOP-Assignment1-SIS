/*
============================================================================
File: main.cpp
Course: CP221-F25-BS-AI-F24-AC2
Assignment: 1 - Student Information System
Author: [Your Name]
Enrollment No: [Your Enrollment Number]
============================================================================
*/

#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    cout << "\n═══════════════════════════════════════════════════\n";
    cout << "     STUDENT INFORMATION SYSTEM - TechVision     \n";
    cout << "═══════════════════════════════════════════════════\n\n";
    
    // Student 1: Default Constructor
    cout << "Creating Student 1 (Default Constructor):\n";
    Student student1;
    student1.displayInfo();
    
    // Student 2: Parameterized Constructor (all parameters)
    cout << "\nCreating Student 2 (Parameterized Constructor):\n";
    Student student2("Ali Ahmed", 20, 101, 3.8);
    student2.displayInfo();
    
    // Student 3: Constructor with Default Arguments
    cout << "\nCreating Student 3 (Constructor with Default Args):\n";
    Student student3("Sara Khan", 21, 102);
    student3.displayInfo();
    
    // Demonstrate Encapsulation: Using Setters
    cout << "\n─────────────────────────────────────────────────────\n";
    cout << "Updating Student 3 using Setters (Encapsulation):\n";
    student3.setGpa(3.6);
    student3.displayInfo();
    
    // Demonstrate Encapsulation: Using Getters
    cout << "\n─────────────────────────────────────────────────────\n";
    cout << "Accessing Data using Getters (Encapsulation):\n";
    cout << "Student 2 Name: " << student2.getName() << "\n";
    cout << "Student 2 GPA: " << student2.getGpa() << "\n";
    cout << "Student 2 Grade: " << student2.calculateGrade() << "\n";
    
    cout << "\n═══════════════════════════════════════════════════\n";
    cout << "           Program Completed Successfully          \n";
    cout << "═══════════════════════════════════════════════════\n\n";
    
    return 0;
    // Destructors called automatically here
}