#include <iostream>
using namespace std;
class Person{
    private:
        string name;
        string birthday;
    public:
        void setName(string name){
            this->name = name;
        }
        void getDetail(){
            cout << "Person";
        }

};
class Employee : Person{
    private:
        int salary;
    public:
        void getDetail(){
            Person::getDetail();
            cout << "Employee" << endl;
        }
};
int main(){
    Person p;
    p.getDetail();
}