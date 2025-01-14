#include <bits/stdc++.h>
using namespace std;
class Date{
	private:
		int day, month, year;
	public:
		Date(){
		}
		Date( int day, int month, int year){
			this->day = day;
			this->month = month ;
			this->year = year;
		}
		
		void nhap(){
			cout << "Nhap ngay: " ;
			cin >> day;
			cout << "Nhap thang: ";
			cin >> month;
			cout <<"Nhap nam: ";
			cin >> year;
			chuanhoa();
			
		}
		void in(){
			chuanhoa();
			cout << "Ngay: " << day << "Thang: " << month << "Nam: " << year;
		}
		bool namnhuan(int year){
			return (year % 4 == 0 && year % 100) || (year % 400 == 0);
		}
		int chuanhoathang(int month, int year){
			switch(month){
				case 4 : case 6 : case 9 : case 11:
					return 30;
				case 2:
					if(namnhuan(year) == true){
						return 29;
					}
					else return 28;
				default: return 31;
			}
				
		}
		void chuanhoa(){
			int maxDay = chuanhoathang(month, year);
			while(day > maxDay){
				day -= maxDay;
				month++;
				if(month > 12){
					month -= 12;
					year++;
				}
				maxDay = chuanhoathang(month, year);
			}
			if(day == 0){
				day = maxDay;
				month--;
				if(month = 0){
					month = 12;
					year--;
				}
			}
		}
		Date operator ++(){
			++day;
			chuanhoa();
			return *this;
		}
		Date operator --(){
			--day;
			chuanhoa();
			return *this;
		}
		~Date(){
		}
};
int main(){
	Date a;
    a.nhap();
    a.in();
    // cout << "Tang mot ngay (hau to)" << endl;
    // a++;
    // a.in();
    cout << "Tang mot ngay: " << endl;
    ++a;
    a.in();
    --a;
    cout <<"Giam mot ngay: " << endl;
    --a;
    a.in();

}
