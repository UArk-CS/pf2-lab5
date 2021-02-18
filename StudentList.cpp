//
// Created by Ben Worthington on 2/18/21.
//

#include "StudentList.h"

StudentList::StudentList()
{
    Head = NULL;
}

StudentList::StudentList(const StudentList & list)
{
    // Create first node
    StudentNode *copy = new StudentNode();
    Head = copy;

    // Walk list to copy nodes
    StudentNode *ptr = list.Head;
    while (ptr != NULL)
    {
        copy->setNext(new StudentNode());
        copy = copy->getNext();
        copy->setName(ptr->getName());
        copy->setAddress(ptr->getAddress());
        copy->setGPA(ptr->getGPA());
        copy->setNext(NULL);
        ptr = ptr->getNext();
    }

    // Tidy first node
    copy = Head;
    Head = copy->getNext();
    delete copy;
}

StudentList::~StudentList()
{
}

void StudentList::insertHead(string name, string address, float gpa)
{
    // Insert new node
    StudentNode *ptr = new StudentNode(name, address, gpa);
    ptr->setNext(Head);
    Head = ptr;
}

void StudentList::insertTail(string name, string address, float gpa)
{
    // Find tail node
    StudentNode *ptr = Head;
    while ((ptr != NULL) && (ptr->getNext() != NULL))
        ptr = ptr->getNext();

    // Insert new node
    if (ptr != NULL)
        ptr->setNext(new StudentNode(name, address, gpa));
    else
        Head = new StudentNode(name, address, gpa);

}

StudentNode* StudentList::searchName(const string &name_) const {

    StudentNode *printer = Head;

    while (printer != NULL) {

        if (printer->getName() == name_) {
            return printer;
        }

        printer = printer->getNext();

    }

    return printer;

}

StudentNode* StudentList::searchGPA(const double &gpa_) const {

    StudentNode *printer = Head;

    while (printer != NULL) {

        if (printer->getGPA() >= gpa_) {
            return printer;
        }

        printer = printer->getNext();

    }

    return printer;

}

void StudentList::print() const
{
    StudentNode *ptr = Head;
    while (ptr != NULL)
    {
        ptr->print();
        ptr = ptr->getNext();
    }
}