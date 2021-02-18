//
// Created by Ben Worthington on 2/18/21.
//

#ifndef PF2_LAB5_STUDENTLIST_H
#define PF2_LAB5_STUDENTLIST_H

#include "StudentNode.h"
#include <time.h>
#include <iostream>
using namespace std;

class StudentList
{
public:
    // Constructors
    StudentList();
    StudentList(const StudentList & list);
    ~StudentList();

    // Methods
    void insertHead(string name, string address, float gpa);
    void insertTail(string name, string address, float gpa);
    StudentNode* searchName(const string &name_) const;
    StudentNode* searchGPA(const double &gpa_) const;
    void print() const;

private:
    StudentNode * Head;
};

#endif //PF2_LAB5_STUDENTLIST_H
