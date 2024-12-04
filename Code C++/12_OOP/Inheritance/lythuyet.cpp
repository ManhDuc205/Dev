#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Person{
    private: 
        string ten, diachi;
    public:
        Person(){
            cout << " Ham tao cua lop Person! \n";
        }
        string getTen(){
            return ten;
        }
        string getDiachi(){
            return diachi;
        }
        void setTen(string ten){
            this->ten = ten;
        }
        void setDiachi(string diachi){
            this->diachi = diachi;
        }
        void inthongtin(){
            cout << ten << " " << diachi << " " ;
        }
        ~Person(){
            cout << "Ham huy cua lop Person!\n";
        }
};
class Student : public Person{
    private:
        double gpa;
    public:
        Student(){
            cout << "Ham khoi tao cua lop Student! \n";
        }
        //function overide (cung kieu tra ve cung ten cung danh sach tham so)
        void inthongtin(){
            Person::inthongtin();
            cout << fixed << setprecision(1) << gpa << endl;
        }
        double getGpa(){
            return gpa;
        }
        void setGpa(double gpa){
            this->gpa = gpa;
        }
        ~Student(){
            cout << "Ham huy cua lop Student!\n";
        }
};
class Employee : public Person{
    private:
        double salary;
    public:
        double getSalary(){
            return salary;
        }
        void setSalary(double salary){
            this->salary = salary;
        }
};
int main(){
    Student s;
    s.setTen("Nguyen Manh Duc");
    s.setDiachi("Ha Noi");
    s.setGpa(3.91);
    // cout << s.getTen() << " " << s.getDiachi() << " " << s.getGpa() << endl;
    s.inthongtin();
}