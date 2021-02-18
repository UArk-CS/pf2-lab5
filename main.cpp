#include <iostream>
#include "StudentList.h"

const int NUM_OF_RUNS = 1000;

int main() {

    // Get start time
//    clock_t time1=clock();

    // Test the student list class
//    StudentList list;

//    for (int i = 0; i < NUM_OF_RUNS; i++) {

//        list.insertHead("Ben W", "Fayetteville, AR", 3.4);
//        list.insertHead("Jackson D", "Fayetteville, AR", 3.8);
//        list.insertHead("Andy W", "Bella Vista, AR", 4.5);
//        list.insertHead("Josh G", "Fayetteville, AR", 3.9);
//        list.insertHead("Joel P", "Fayetteville, AR", 4.0);

//        list.insertTail("Ben W", "Fayetteville, AR", 3.4);
//        list.insertTail("Jackson D", "Fayetteville, AR", 3.8);
//        list.insertTail("Andy W", "Bella Vista, AR", 4.5);
//        list.insertTail("Josh G", "Fayetteville, AR", 3.9);
//        list.insertTail("Joel P", "Fayetteville, AR", 4.0);
//
//        list.print();

//    }

    // Get end time
//    clock_t time2=clock();
//    double run_time = (time2-time1)/(double)CLOCKS_PER_SEC;
//    cout << "Run time: " << run_time << " seconds\n";

    StudentList list;

    list.insertHead("Ben W", "Fayetteville, AR", 3.4);
    list.insertHead("Jackson D", "Fayetteville, AR", 3.8);
    list.insertHead("Andy W", "Bella Vista, AR", 4.5);
    list.insertHead("Josh G", "Fayetteville, AR", 3.9);
    list.insertHead("Joel P", "Fayetteville, AR", 4.0);

    StudentNode *result;
    result = list.searchName("Ben J");

    if (result != NULL) {
        result->print();
    } else {
        cout << "Student not found" << endl;
    }

    cout << endl;

    result = list.searchGPA(3.6);
    if (result != NULL) {
        result->print();
    } else {
        cout << "GPA not found" << endl;
    }

    return 0;

}