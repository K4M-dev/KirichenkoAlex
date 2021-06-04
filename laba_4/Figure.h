#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include"iostream"
/**
* \brief † ласс геометрические фигуры
*/
class Figure {
protected:
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий периметр фигуры
	*/
	virtual double Volume()const = 0;
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий площадь фигуры
	*/
	virtual double SurfaceArea()const = 0;

	/**
	* \brief ¬иртуальный  деструктор
	*/
	virtual ~Figure() = 0;
};

