// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



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

    // Move constructor
    Course(Course&& other) noexcept //— це специфікатор у C++, який вказує, що функція або метод не викидає винятків.
        : courseName(move(other.courseName)),
        courseCode(move(other.courseCode)),
        credut(other.credut) {
        cout << "Move constructor dla course " << courseName << " vuklukano" << endl;
    }

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



    //copy
    Grade() : studentID{ "none" }, courseCode{ "none" }, grade{0} {};
    Grade(const Grade& other) {
        this->studentID = other.studentID;
        this->courseCode = other.courseCode;
        this->grade = other.grade;
    }



    // destructor
    ~Grade() {
        cout << "destructor dla ochinok " << studentID << "za kursom " << courseCode << " vuklukano" << endl;
    }

    void display() const {
        cout << "ID  " << studentID << "Cod course " << courseCode << "Grade " << grade << endl;
    }
    int operator ++ (int) {
        grade++;
        return grade;
    }
    // Binary operator+ 
    Grade operator+(const Grade& other) const {
        return Grade(studentID, courseCode, grade + other.grade);
    }
    friend ostream& operator <<(ostream& os, const Grade& grad) {//perevantagenya dryzhnih operatoriv
        os << grad.grade;
        return os;

    }
    friend istream& operator >>(istream& is, Grade& grad) {
        is >> grad.grade;
        return is;
    }
};



    int main()
    {
        Student student1("ivan", 18, "ch250605");
        student1.display(); cout << endl;

    
        Grade grade1("ch250605", "CS143 ", 95);
        grade1.display(); cout << endl;
        Grade grade2 = grade1;
        // unar
        grade2++;
        grade2.display(); cout << endl;

        Grade grade3 = grade1 + grade2; // binar
        grade3.display(); cout << endl;
        grade1.display(); cout << endl;

        Course course1("Software Engineering", "CS143", 5);
        course1.display(); cout << endl;

        Course course2 = move(course1);
        course2.display(); cout << endl;
        cin >> grade1;
        cout << grade1 <<endl ;
        return 0;

    }

