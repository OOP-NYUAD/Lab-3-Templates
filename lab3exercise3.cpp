/*Create a container list<T> of type Student. Where Student is a 
user defined data type. Student class holds important informati-
on about the Student entity like netID, name, age, and gender. 
Add few instances of Student to list<Student>. Sort the 
list<Student> by student name in ascending or descending order 
using std::list::sort(). Create a print function inside Student
and access it via list iterator.*/

#include <iostream>
#include <list>
#include <string>

// Define the Student class
class Student {
public:
    // Constructor to initialize Student attributes
    Student(const std::string& netID, /*Fill in the other attributes*/)
        : netID(netID), name(name), age(age), gender(gender) {}

    // Print function to display student information
    void print() const {
        std::cout << "NetID: " << netID << ", Name: " << name << ", Age: " << age << ", Gender: " << gender << std::endl;
    }

    // Overloading operator< for sorting by name
    bool operator<(const Student& other) const {
        return name < other.name;
    }

    // Overloading operator> for sorting by name in descending order
    bool operator>(const Student& other) const {
        //Return the appropriate boolean. Check the previous example
    }

private:
    std::string netID;
    std::string name;
    int age;
    std::string gender;
};

int main() {
    // Create a list of Student objects and name it studentList
    

    // Add some Student instances to the list
    // Add some a student to the list with the following attributes netID: "s12345", Name: "Alice", Age: 20, Gender"Female"
    // Add some a student to the list with the following attributes netID: "s54321", Name: "Bob", Age: 22, Gender "Male"
    // Add some a student to the list with the following attributes netID: "s98765", Name: "Charlie", Age: 21, Gender "Male"
    // Add some a student to the list with the following attributes netID: "s24680", Name: "David", Age: 19, Gender "Male"
    
    // Sort the list by student name in ascending order. Call the sorting function in the class above

    // Print the sorted list using an iterator
    std::cout << "Sorted by name in ascending order:" << std::endl;
    for (const Student& student : studentList) {
        student.print();
    }

    // Sort the list by student name in descending order. Call the sorting function in the class above

    // Print the sorted list in descending order using an iterator. 
    std::cout << "\nSorted by name in descending order:" << std::endl;
    for (const Student& student : studentList) {
        student.print();
    }

    return 0;
}
