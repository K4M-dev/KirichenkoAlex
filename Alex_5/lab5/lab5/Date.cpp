#include"Date.h"
Date::Date(int year, int month, int day) :year{ year }, month{ month }, day{ day }{}
bool Date::IsDateValid()const {
	return year < 0 || month < 0 || day < 0;
}