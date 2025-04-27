#include<bits/stdc++.h>
using namespace std;

//Abstraction = hiding unnecessary data form outside a class
//getter = function that makes a private attribute READABLE
//setter = function that makes a private attribute WRITEALBE

//
class stove{
    private:
        int age = 22; //we no longer has access to this attribute from outside the class, so this is a hidden attribute from outside world
        // if  i need to access this kind of private attributes then i can use getter
    
    public: //while creating attributes we use public  access specifier 
    
        int temperature = 0; //then write attributes
        // int temperature = 0; since this attribute is public so it is accessable from outside the class, 

        //writing getter function which will be only readable ,and access the private attribute
        int getAge(){ //getter
            return age;
        }
        //if you need a private attribute to also writeable then add setter , like this
        
        // void changeAge(int setAge){ //setter
        //     this->age = setAge;
        // }

        //todo: i can use condition in this setter function
        void changeAge(int setAge){  //setter
            if(setAge < 0){
                this -> age = 0;
            }else{
                this -> age = setAge;
            }
        }
};

int main(){
    stove st;

    st.temperature = 32;
    cout << "The temperature setting is : " << st.temperature << endl;
    // st.age = 22; //we can see the red underlines under age, as age is a private attribute
    // cout << st.age << endl;
    cout << "My age is : "<< st.getAge() << endl;
    
    st.changeAge(10); //age changed
    // again cout 
    cout << "Updated Age is : " << st.getAge() << endl;

    return 0;
}