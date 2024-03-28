#ifndef COURSE_NODE_H
#define COURSE_NODE_H

#include <string>

class CourseNode {
public:
    std::string courseCode;
    int creditHours;
    char grade;
    CourseNode* next;

    // Constructor
    CourseNode(std::string code, int hours, char g);

    // Destructor
    ~CourseNode();
};

#endif
