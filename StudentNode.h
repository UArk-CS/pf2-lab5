//
// Created by Ben Worthington on 2/18/21.
//

#ifndef PF2_LAB5_STUDENTNODE_H
#define PF2_LAB5_STUDENTNODE_H

#include <iostream>
using namespace std;

class StudentNode
{
public:
    // Constructors
    StudentNode();
    StudentNode(string name, string address, float gpa);
    StudentNode(const StudentNode & node);
    ~StudentNode();

    // Get methods
    string getName() const;
    string getAddress() const;
    float getGPA() const;
    StudentNode *getNext() const;

    // Set methods
    void setName(string name);
    void setAddress(string address);
    void setGPA(float gpa);
    void setNext(StudentNode * next);

    // Other methods
    void print() const;

private:
    string Name;
    string Address;
    float GPA;
    StudentNode *Next;
};

#endif //PF2_LAB5_STUDENTNODE_H
