#include <iostream>
#include <string>


class Staff 				// Base class		parent class
{
protected:
    int code;
    std::string name;

public:
    Staff(int c, const std::string& n) : code(c), name(n) {}

    int getCode() const {
        return code;
    }

    std::string getName() const {
        return name;
    }

    virtual void display() const {
        std::cout << "Code: " << code << ", Name: " << name << std::endl;
    }
};


class Teacher : public Staff 			// Derived class		child 1 class
{
private:
    std::string subject;
    double salary;

public:
    Teacher(int c, const std::string& n, const std::string& s, double sal)
        : Staff(c, n), subject(s), salary(sal) {}

    std::string getSubject() const {
        return subject;
    }

    double getSalary() const {
        return salary;
    }

    void display() const override {
        Staff::display();
        std::cout << "Subject: " << subject << ", Salary: " << salary << std::endl;
    }
};


class Typist : public Staff				// Another derived class		chuld 2 class
{
private:
    int speed;

public:
    Typist(int c, const std::string& n, int s)
        : Staff(c, n), speed(s) {}

    int getSpeed() const {
        return speed;
    }

    void display() const override {
        Staff::display();
        std::cout << "Speed: " << speed << " words per minute" << std::endl;
    }
};

int main() {
    // Create instances of each class using the new operator
    Staff* staffMember = new Staff(1, "John Doe");
    Teacher* teacher = new Teacher(2, "Jane Smith", "Mathematics", 50000.0);
    Typist* typist = new Typist(3, "Emily Davis", 80);

    // Retrieve and display information
    staffMember->display();
    teacher->display();
    typist->display();

    // Clean up memory
    delete staffMember;
    delete teacher;
    delete typist;

    return 0;
}
