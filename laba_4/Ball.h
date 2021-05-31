#pragma once
#include"Figure.h"
/**
* \brief  Класс шар
*/
class Ball :Figure {
private:
	double radius;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	Ball(double radius);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Ball() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return Периметр фигуры
	*/
	double Volume()const;

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры
	*/
	double SurfaceArea()const;
};