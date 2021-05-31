#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include"iostream"
/**
* \brief ������ �������������� ������
*/
class Figure {
protected:
	/**
	* \brief ����������� �����,����������� �������� ������
	*/
	virtual double Volume()const = 0;
	/**
	* \brief ����������� �����,����������� ������� ������
	*/
	virtual double SurfaceArea()const = 0;

	/**
	* \brief �����������  ����������
	*/
	virtual ~Figure() = 0;
};

