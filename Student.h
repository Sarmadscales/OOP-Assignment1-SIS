/*
============================================================================
File: Student.h
Course: CP223-F25-BS-AI-F24-AC2
Assignment: 1 - Student Information System
Author: Muhammad Sarmad
============================================================================
Description: Interface/Declaration file for Student class.
             Demonstrates ABSTRACTION by separating interface from implementation.
============================================================================
*/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    // ENCAPSULATION: Private data members
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    // Constructors
    Student();                                          // Default
    Student(string n, int a, int r = 0, float g = 0.0); // Parameterized with default arguments
    
    // Destructor
    ~Student();

    // Setters
    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGpa(float g);

    // Getters
    string getName() const;
    int getAge() const;
    int getRollNo() const;
    float getGpa() const;

    // Utility methods
    string calculateGrade() const;
    void displayInfo() const;
};

#endif
