#include<iostream>
using namespace std;

class car{
    public:
        string make;
        string model;
        int year;
        string color;
    
    //car object
    car(string mak, string mod, int ye, string co){
        make = mak;
        //or
        //this->make = mak;
        model = mod;
        year = ye;
        color = co;
    }

};


/*

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
    
    student(string x, int y, double z){ //this name, age, gpa
        name = x;
        age = y;
        gpa = z;
    }
};
*/


int main(){
    //constructor = special method that is automatically called when an object is instantiated
                //  useful for assigning values to attributes as arguments
    
    /*
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
    */


    //creating car object
    //also need to pass those arguments
    car car1("ELON", "TESLA", 2020, "White");
    //display the attributes make, model, year, color
    cout << car1.make << '\n'
         << car1.model << '\n'
         << car1.year << '\n'
         << car1.color << '\n' ;

    return 0;
}
