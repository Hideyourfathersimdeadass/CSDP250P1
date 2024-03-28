Kaleigh Hayes
1313037
CSDP250
README.TXT

---

# Student Course Management System

## Overview
This program is designed to manage the courses a student has taken in their bachelor's program. It utilizes a linked list data structure to store course information such as course code, credit hours, and grade. The program provides functionalities to add a course, delete a course, delete all nodes, and display the list of courses.

## Files
The program consists of the following files:
- `main.cpp`: Contains the main function and user interface logic.
- `courseNode.h`: Header file for the `CourseNode` class declaration.
- `courseNode.cpp`: Implementation file for the `CourseNode` class methods.
- `README.md`: Documentation file explaining the program and its usage.

## How to Use
1. **Compile the Program**: Use a C++ compiler to compile the source files. For example, you can use the `g++` compiler:
   ```
   g++ main.cpp courseNode.cpp -o course_management
   ```
2. **Run the Program**: Execute the compiled program:
   ```
   ./course_management
   ```
3. **Menu Options**:
   - **Add a Course**: Allows the user to add a new course to the list. The user is prompted to input the course code, credit hours, and grade.
   - **Delete a Course**: Allows the user to delete a specific course from the list by entering its course code.
   - **Delete All Nodes**: Deletes all courses from the list.
   - **Display the List**: Displays the list of courses with their details.
   - **Exit**: Exits the program.

## Input Format
- Course Code: String (e.g., "CSDP 250")
- Credit Hours: Integer (e.g., 3)
- Grade: Character (e.g., 'A')

## Output Format
The program displays the list of courses in the following format:
```
Course Code: CSDP 250, Credit Hours: 3, Grade: A
Course Code: CSDP 350, Credit Hours: 4, Grade: B
...
```

## Sample Usage
1. **Adding a Course**:
   ```
   Enter course code: CSDP 250
   Enter credit hours: 3
   Enter grade: A
   ```
2. **Deleting a Course**:
   ```
   Enter the course code to delete: CSDP 250
   Course CSDP 250 deleted successfully.
   ```
3. **Deleting All Nodes**:
   ```
   All courses deleted.
   ```
4. **Displaying the List**:
   ```
   Course Code: CSDP 350, Credit Hours: 4, Grade: B
   ```

## Notes
- Ensure that the input values are valid and adhere to the specified format.
- The program does not support appending a course directly. Courses are inserted into the list based on their course code in ascending order.

---

