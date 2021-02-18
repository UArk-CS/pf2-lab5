#include <iostream>
#include "StudentList.h"

int main()
{

    // Test the student list class
    StudentList list;

//    list.insertHead("Ben W", "Fayetteville, AR", 3.4);
//    list.insertHead("Jackson D", "Fayetteville, AR", 3.8);
//    list.insertHead("Andy W", "Bella Vista, AR", 4.5);
//    list.insertHead("Josh G", "Fayetteville, AR", 3.9);
//    list.insertHead("Joel P", "Fayetteville, AR", 4.0);

    list.insertTail("Ben W", "Fayetteville, AR", 3.4);
    list.insertTail("Jackson D", "Fayetteville, AR", 3.8);
    list.insertTail("Andy W", "Bella Vista, AR", 4.5);
    list.insertTail("Josh G", "Fayetteville, AR", 3.9);
    list.insertTail("Joel P", "Fayetteville, AR", 4.0);

    list.print();

}