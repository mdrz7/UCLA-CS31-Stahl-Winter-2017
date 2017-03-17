// 9.  Suppose someone tries to store into a single integer a student number and a student percentage score for a certain exam.
// For example, the integer 10085 might be used to store the fact that student number 100 received the value 85 on a certain exam.
// For example, the integer 876597 might be used to store the fact that student number 8765 received the value 97 on a certain exam.
// Assuming no one scored more than 99 on a certain exam and assuming you will receive data with atleast three digits or more so the student number and percentage score always both exist,
// write code that reads in a single integer value and then breaks this packed integer into its two fields, the student number and the student percentage score.

#include <iostream>

void extractIdScore (int test, int &testStudentId, int &testStudentScore);

int main() {
    int test1 = 876597;
    int test1StudentId;
    int test1StudentScore;
    int test2 = 134280;
    int test2StudentId;
    int test2StudentScore;
    extractIdScore(test1, test1StudentId, test1StudentScore);
    std::cout << "The ID and score for " << test1 << " are " << test1StudentId << " and " << test1StudentScore << "." << std::endl;
    extractIdScore(test2, test2StudentId, test2StudentScore);
    std::cout << "The ID and score for " << test2 << " are " << test2StudentId << " and " << test2StudentScore << "." << std::endl;
    return (0);
}

//void extractIdScore (int test, int &testStudentId, int &testStudentScore) {
//    testStudentId = test/100;
//    testStudentScore = test - (testStudentId * 100);
//}

void extractIdScore (int test, int &testStudentId, int &testStudentScore) {
    testStudentId = test/100;
    testStudentScore = test%testStudentId;
}

    
