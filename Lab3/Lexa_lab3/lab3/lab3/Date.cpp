#include"Date.h"
#include"exception"
Date::Date(int year, int month, int day) : Triad(year, month, day) {
	if (year > 0 && month > 0 && day > 0) {  
		this->year = year;
		this->month = month;
        switch (month)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            if (day <= DAYINDEC) {
                this->day = day;
                break;
            }
            else
            {
                day -= DAYINDEC;
                this->day = day;
                if (month == 12)
                {
                    this->year += 1;
                }
                this->month = month + 1;
            }
         break;
        case 4:case 6:case 9:case 11:     
            if (day <= DAYINAPR) {
                this->day = day;
                break;
            }
            else
            {
                day -= DAYINAPR;
                this->day = day;
                if (month == 12)
                {
                    this->year += 1;
                }
                this->month = month + 1;
            }
         break;
        case 2: 
            if (year % 4 == 0 && year % 100 != 0) {
                if (day <= DAYINFEBLP) {
                    this->day = day;
                    break;
                }
                else {
                    day -= DAYINFEBLP;
                    this->day = day;
                    if (month == 12)
                    {
                        this->year += 1;
                    }
                    this->month = month + 1;
                }
            }
            else {
                if (day <= DAYINFEB) {
                    this->day = day;
                    break;
                }
                else {
                    day -= DAYINFEB;
                    this->day = day;
                    if (month == 12)
                    {
                        this->year += 1;
                    }
                    this->month = month + 1;
                }
            }
            break;
        default:
            throw invalid_argument{ "Дата введена неправильно" };
        }	
	}
	else
		throw invalid_argument{ "Дата введена неправильно" };
}
Date::~Date()=default;

Date Date::Increase()const {
	return Date(year + 1, month + 1, day + 1);
}

Date Date ::addDay(int days)const {
    unsigned Day = day, Month = month, Year = year;
    switch (Month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        Day += days;
        if (Day <= 31) 
            break;
        else
        {
            Day -= 31;
            if (Month == 12)
            {
                Year += 1;
            }
            Month = Month + 1;
        }
     break;
    case 4:case 6:case 9:case 11:
        Day += days;
        if (Day <= 30) break;
        else
        {
            Day -= 30;
            Month += 1;
        }
    break;
    case 2:
        if (Year % 4 == 0 && Year % 100 != 0) {
            Day += days;
            if (Day <= 29) break;
            else
            {
                Day -= 29;
                Month += 1;
            }
        }
        else {
            Day += days;
            if (Day <= 28) break;
            else
            {
                Day -= 28;
                Month += 1;
            }
        }
        break;
    }
       return Date(Year,Month,Day);
}
