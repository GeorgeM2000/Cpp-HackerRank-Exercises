#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        void set_age(int a){age = a;}
        void set_name(string n){ name = n;}

        int get_age(){return age;}
        string get_name(){return name;}

        virtual void putdata()=0;
        virtual void getdata()=0;

};


class Professor:public Person{
    private:
        int publications;
        int cur_id;
        static int proCount;
    public:
        Professor(){proCount++; cur_id = proCount;}

        void putdata(){
            cout << get_name() << " " << get_age() << " " << publications << " " << cur_id << endl;
        }
        void getdata(){
            int a;
            string n;
            cin >> n;
            cin >> a;
            cin >> publications;
            set_age(a);
            set_name(n);
        }
};

int Professor::proCount = 0;

class Student:public Person{
    private:
        int marks[6];
        int cur_id;
        static int stuCount;
    public:
        Student(){stuCount++; cur_id = stuCount;}
        void putdata(){
            cout << get_name() << " " << get_age() << " " << sum() << " " << cur_id << endl;
        }
        int sum(){
            int sum = 0;
            for(int i=0; i<6; i++) sum += marks[i];
            return sum;
        }

        void getdata(){
            int a;
            string n;
            cin >> n;
            cin >> a;
            for(int i=0; i<6; i++) cin >> marks[i];
            set_age(a);
            set_name(n);
        }
};

int Student::stuCount = 0;



int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
