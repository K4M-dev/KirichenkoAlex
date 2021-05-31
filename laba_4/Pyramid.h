#pragma once
#include"Figure.h"
/**
* \brief  Класс пирамида
*/
class Pyramid : Figure {
private:
	double side1, side2, height, apophema;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	Pyramid(double a, double b, double h, double ap);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Pyramid() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return Периметрериметр фигуры
	*/
	double Volume()const;

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры 
	*/
	double SurfaceArea()const;
};