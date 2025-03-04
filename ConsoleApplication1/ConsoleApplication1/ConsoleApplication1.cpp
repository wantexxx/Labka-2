#include <iostream>
#include <string>
using namespace std;


class Student {//clas dla imya vik ta id
private:
    string name;
    int age;
    string studentID;

public:
    //constructor
    Student() : name("nevidomo"), age(0), studentID("000000") {}

    //parametru
    Student(string n, int a, string id) : name(n), age(a), studentID(id) {}

    //delaguvanya
    Student(string n, string id) : Student(n, 18, id) {}


    ~Student() {
        cout << "destructor dla name  " << name << " vuklukano" << endl;
    }

    void display() const {
        cout << "imya " << name << " Age " << age << " ID " << studentID << endl;
    }

};
class Course {
private:
    string courseName;
    string courseCode;
    int credut;

public:

    Course(string name, string code, int cr) : courseName(name), courseCode(code), credut(cr) {}

    ~Course() {
        cout << "destructor dla course " << courseName << " vuklukano" << endl;
    }

    void display() const {
        cout << "Course " << courseName << " code " << courseCode << " credit " << credut << endl;
    }
};
// class ochinka
class Grade {
private:
    string studentID;
    string courseCode;
    int grade;

public:
    // counstrructor
    Grade(string sID, string cCode, int g) : studentID(sID), courseCode(cCode), grade(g) {}

    // destructor
    ~Grade() {
        cout << "destructor dla ochinok " << studentID << "za kursom " << courseCode << " vuklukano" << endl;
    }

    void display() const {
        cout << "ID  " << studentID << "Cod course " << courseCode << "Grade " << grade << endl;
    }
};



int main() {


    int main(); {
        Student student1("ivan", 18, "ch250605");
        student1.display();

        Course course1("Software engennering", "CS143", 5);
        course1.display();

        Grade grade1("ch250605", "CS143", 95);
        grade1.display();

        return 0;

    }