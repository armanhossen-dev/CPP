#include <bits/stdc++.h>
using namespace std;

class animal
{
public:
    bool alive = true;
    void eat()
    {
        cout << "This animal is eating\n";
    }

    void newline(){
        cout << endl;
    }
};

// now writing a new class, named 'dog' and it will inherit from parent class named animal, so we wriet a colone thne public and parent class name then {};
class dog : public animal{
public:
    void bark()
    {
        cout << "The dog goes woof!\n";
    }
};

class cat : public animal{
public:
    void meow()
    {
        cout << "the cat goes meow!\n";
    }
};




class shape{
    public:
        double area;
        double volume;

    void newline(){
        cout << endl;
    }

};

class cube : public shape{
    public:
    double side;
    
    cube(double side_){ //by pushing side value, we will calculate the area or valuem
        this->side = side_;
        this->area = side*side*6;
        this->volume = side*side*side;
    }

    void p_cube(){
        cout << "This cube's\n";
    }

};

class sphere : public shape{
    public:
    double radius;
    sphere(double radius_){
        this->radius = radius_;
        this->area = 4*(3.14159)*(radius*radius);
        this->volume = (4/3.0)*(3.14159)*(radius*radius*radius); //divided by 3.0 must because it will output a float
    }

    void p_sphere(){
        cout << "This sphere's\n";
    }
};

int main()
{
    // creating a dog object
    dog dog1;
    cout << dog1.alive << endl; // true = 1, false = 0, this will output 1
    dog1.eat();                 // now this dog class object can use the parent classes public function or elements or members
    dog1.bark();
    dog1.newline();


    cat cat1;
    cout << cat1.alive << endl;
    // cat1.bark(); // this will not work,
    cat1.eat();
    cat1.meow();
    cat1.newline();

    cube cube1(10);
    cube1.p_cube();
    cout << "Area : " << cube1.area << " cm^2" << endl;
    cout << "Volume : " << cube1.volume << " cm^3" << endl;
    cube1.newline();
    
    sphere sphere1(5);
    sphere1.p_sphere();
    cout << "Area : " <<sphere1.area << " cm^2" << endl;
    cout << "Volume : " << sphere1.volume << " cm^3" << endl;
    sphere1.newline();

    return 0;
}


/*
inheritance = A class can recieve attributes and methods from another class
              children classes inherit from a parent class //it's like children inherit from parents Gins
              helps to reuse similar code found within multiple classes
*/