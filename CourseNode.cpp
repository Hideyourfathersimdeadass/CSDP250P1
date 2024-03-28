#include "CourseNode.h"

CourseNode::CourseNode(std::string code, int hours, char g)
    : courseCode(code), creditHours(hours), grade(g), next(nullptr) {}

CourseNode::~CourseNode() {
    // Destructor code here
}

