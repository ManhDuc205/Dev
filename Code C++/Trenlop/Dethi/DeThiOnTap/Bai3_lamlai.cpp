#include <bits/stdc++.h>
using namespace std;
class Date{
	private:
		int day, month, year;
	public:
		Date(){
		}
		~Date(){
		}
		Date(int day, int month, int year){
			this->day = day;
			this->month = month;
			this->year = year;
		}
		void nhap(){
			do{
				cout << "Nhap ngay: ";
				cin >> day;
				cout << "Nhap thang: ";
				cin >> month;
				cout << "Nhap nam: ";
				cin >> year;
			}while(day < 0 || year < 0 || month < 0);
			chuanhoa();
		}
		void in(){
			if(day <10 && day > 0){
                cout << "Ngay :" <<"0" << day;
            }
            else cout << "Ngay :" << day;
            if(month <10 && month > 0){
                cout << "Thang :" <<"0" << month;
            }
            else cout << "Thang: " << month; 
            cout << " Nam: " << year << endl;
            chuanhoa();
		}
		bool namnhuan(int year){
			return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		}
		int chuanhoathang(int month, int year){
			switch(month){
				case 4 : case 6 : case 9 : case 11 :
					return 30;
				case 2:
					if(namnhuan(year)){
						return 29;
					}
					else return 28;
				default: return 31;
			}
		} 
		void chuanhoa(){
			int maxDay = chuanhoathang(month, year);
			while (day  > maxDay){
				day -= maxDay;
				month++;
				if(month > 12){
					month -= 12;
					year++;
				}
				maxDay = chuanhoathang(month,year);
			}
			if(day == 0){
				day = maxDay;
				month--;
				if(month <= 0){
					month = 12;
					year--; 
				}
			}
			if(month == 0){
				month = 12;
				year--;
			}
			if(month > 12){
				month -= 12;
				year++;
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
};
int main(){
	Date a;
	a.nhap();
	a.in();
	cout << "Tang mot ngay: " ;
	++a;
	a.in();
	cout << "Giam mot ngay: ";
	--a;
	--a;
	a.in();
	return 0;
}
