#include<iostream>
using namespace std;


class student{
    public :
        string name;
        int age;
        double gpa;
    /*
    /upore public er variable er sate input variable same hole emon kore this this kore bujai te par bo
    student(string name, int age, double gpa){ 
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    or,
    */
    student(string x, int y, double z){ //this name, age, gpa
        name = x;
        age = y;
        gpa = z;
    }

};


int main(){
    //constructor = special method that is automatically called when an object is instantiated
                //  useful for assigning values to attributes as arguments
    
    student student1("Arman", 23, 3.2);
    
    cout << student1.name << '\n'
         << student1.age << '\n'
         << student1.gpa << endl;

    cout << endl;
    
    student student2("BroCode", 26, 3.8);
    
    cout << student2.name << '\n'
         << student2.age << '\n'
         << student2.gpa << endl;
    
    student student2("BroCode", 26, 3.8);
    
    cout << student2.name << '\n'
         << student2.age << '\n'
         << student2.gpa << endl;

    return 0;
}
