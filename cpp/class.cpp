#include<iostream>
using namespace std;
// class Car{
//     public:
//     string name;
//     int speed;
//     string color;
//     Car(string name,int speed,string color){ 
//         this->name=name;
//         this->speed=speed;
//         this->color=color;
//     }
//     void canswin(){
//        cout<<"u can swin on water"<<endl;
//     }
//     void incspeed(){
//        cout<<"u can run at nitro mode"<<endl;
//     }


// };
// int main(){
//    Car c1("anshika",40,"pink");
//    c1.name;
//    c1.speed;
//    c1.color;
//    c1.incspeed();
//    c1.canswin();
//    return 0;
// }



class Student{
    public:
    string name;
    int roll;
    string course;
    Student(string name,int roll,string course){
        this->name=name;
        this->roll=roll;
        this->course=course;
    }
};
int main(){
    Student *st=new Student("shipra",79,"M.tech");//using heap variable(dynamic variables)---here we have to delete it after use--
    cout<<st->name<<endl;
    cout<<st->roll<<endl;
    cout<<st->course<<endl;


    Student s1("anshika",45,"Btech"); //using the normal variables---
    cout<<s1.name <<" "<<s1.roll<<" "<<s1.course<<endl;
    
    Student s2("ABCD",78,"M.B.A");
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.course;
}


