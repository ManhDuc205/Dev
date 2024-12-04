#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
class Account{
    private:
        string Username, Password;
    public:
        Account(string Username, string Password){
            this->Password = Password;
            this->Username = Username;
        }
        string getUsername(){
            return Username;
        }
        string getPassword(){
            return Password;
        }
        void setUsername(string Username){
            this->Username = Username;
        }
        void setPassword(string Password){
            this->Password = Password;
        }
};
class Date{
    private:
        int day, month, year;
    public:
        Date(){}
        Date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
        void setDay(int day){
            this->day = day;
        }
        void setMonth (int month){
            this->month = month;
        }
        void setYear(int year){
            this->year = year;
        }
};
class Person{
    private:
        string name, address;
        int age;
        Date ngaysinh;
    public:
        Person(string name, string address, int age , Date ngaysinh ){
            this->name = name;
            this->address = address;
            this->age = age;        
            this->ngaysinh = ngaysinh;
        }
        string getName(){
            return name;
        }
        void inthongtin() {
            cout << name << " " << address << " " << age << " ";
            cout << ngaysinh.getDay() << "/" << ngaysinh.getMonth() << "/" << ngaysinh.getYear() << endl;
        }
};
class Student : public Person{
    private:
        float gpa;
        string  ID, email, emailPassword, lop;
        Account acc;
    public:
        Student(string name, string address, int age, Date ngaysinh, string ID, string lop , float gpa) : Person(name , address, age, ngaysinh), acc(ID, "defaultPassword") { 
            this->ID = ID;
            this->gpa = gpa;
            this->lop= lop;
        }
        void setEmail(){
            string res = "";
            string temp = Person::getName();
            stringstream ss(temp);
            vector<string> v;
            string token;
            while(ss >> token){ 
                v.push_back(token);
            }
            for(char x: v[v.size() - 1]){ // lấy phần tử cuối cùng trong v nối vào res
                res += tolower(x);
            }
            for(int i = 0; i < v.size() - 1; i++){
                res += tolower(v[i][0]);
            }
            
            res += "@ptit.edu.vn";
            email = res;
        }
        void setEmailPassword(){
            string res = "";
            string temp = Person::getName();
            for(char x : temp){
                if(isspace(x) == 0){
                    res += tolower(x);
                }
            }
            for(char a : ID){
                res += tolower(a);
            }
            res += "@";
            emailPassword = res;
        }
        void inthongtin() {
        Person::inthongtin();
        cout << "ID: " << ID << ", GPA: " << gpa << ", Lop: " << lop << endl;
        cout << "Email: " << email << ", Email Password: " << emailPassword << endl;
    }
        
};
int main() {
    Date date(26, 3, 2005);
    Student a("Nguyen Manh Duc", "Ha Noi", 19, date, "74DCTT23", "CNTT1", 3.91);
    a.setEmail();
    a.setEmailPassword();
    a.inthongtin();
    return 0;
}