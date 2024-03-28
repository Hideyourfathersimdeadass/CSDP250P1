#include <iostream>
#include "CourseNode.h"

using namespace std;

// Function prototypes
void addCourse(CourseNode*& head);
void deleteCourse(CourseNode*& head, const string& code);
void deleteAllNodes(CourseNode*& head);
void displayList(const CourseNode* head);
void displayMenu();

int main() {
    CourseNode* head = nullptr;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCourse(head);
                break;
            case 2: {
                string code;
                cout << "Enter the course code to delete: ";
                cin >> code;
                deleteCourse(head, code);
                break;
            }
            case 3:
                deleteAllNodes(head);
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

void addCourse(CourseNode*& head) {
    string code;
    int hours;
    char grade;

    cout << "Enter course code: ";
    cin >> code;
    cout << "Enter credit hours: ";
    cin >> hours;
    cout << "Enter grade: ";
    cin >> grade;

    CourseNode* newNode = new CourseNode(code, hours, grade);
    if (head == nullptr || head->courseCode >= code) {
        newNode->next = head;
        head = newNode;
    } else {
        CourseNode* current = head;
        while (current->next != nullptr && current->next->courseCode < code) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteCourse(CourseNode*& head, const string& code) {
    if (head == nullptr) {
        cout << "List is empty. No course to delete.\n";
        return;
    }
    if (head->courseCode == code) {
        CourseNode* temp = head;
        head = head->next;
        delete temp;
        cout << "Course " << code << " deleted successfully.\n";
    } else {
        CourseNode* current = head;
        while (current->next != nullptr && current->next->courseCode != code) {
            current = current->next;
        }
        if (current->next != nullptr) {
            CourseNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Course " << code << " deleted successfully.\n";
        } else {
            cout << "Course " << code << " not found.\n";
        }
    }
}

void deleteAllNodes(CourseNode*& head) {
    while (head != nullptr) {
        CourseNode* temp = head;
        head = head->next;
        delete temp;
    }
    cout << "All courses deleted.\n";
}

void displayList(const CourseNode* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    const CourseNode* current = head;
    while (current != nullptr) {
        cout << "Course Code: " << current->courseCode << ", Credit Hours: " << current->creditHours << ", Grade: " << current->grade << endl;
        current = current->next;
    }
}

void displayMenu() {
    cout << "\nMenu:\n"
         << "1. Add a course\n"
         << "2. Delete a course\n"
         << "3. Delete all nodes\n"
         << "4. Display the list\n"
         << "5. Exit\n";
}

