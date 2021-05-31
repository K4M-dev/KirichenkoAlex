#pragma once
#include"Figure.h"
/**
* \brief  Класс цилиндр
*/
class Cylinder :Figure {
private:
	double height, radius;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	explicit Cylinder(double a, double b);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Cylinder() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return ѕериметр фигуры
	*/
	double Volume()const;

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры
	*/
	double SurfaceArea()const;
};