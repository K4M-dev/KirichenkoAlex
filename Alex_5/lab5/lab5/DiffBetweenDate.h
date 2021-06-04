#pragma once
#include<iostream>
#include<exception>
#include "Date.h"
#include "Exception.h"
#include "Exception2.h"
#include "Exception3.h"

/**
* \brief Функция вычисляет разницу между датами в днях
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int Difference(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, спецификатор не определён
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate1(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, спецификатор throw"
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate2(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, стандартное исключение
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate3(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, пустой класс
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate4(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, независимый класс с полями-параметрами функции
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate5(Date& FirstDate, Date& SecondDate);

/**
* \brief Функция возвращает разницу между датами в днях, класс наследник
* \param FirstDate Первая дата
* \param SecondDate Вторая дата
* \return Разница между датами в днях
*/
int DiffBetweenDate6(Date& FirstDate, Date& SecondDate);