#include<iostream>
#include"Ball.h"
#include"Cylinder.h"
#include"Pyramid.h"
int main(){
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << "Выбирете фигуру:\n1 - Шар\n2 - Цилиндр\n3 - Пирамида"<<endl;
	int a;
	cin >> a;
	Ball ObjBall(4);
	Cylinder ObjCylinder(4,2);
	Pyramid ObjPyramid(10,10,12,9);
	switch (a)
	{
	case 1:		
		cout << "Объём шара равен: "<<ObjBall.Volume()<<endl;
		cout << "Площадь поверхности шара равна: "<<ObjBall.SurfaceArea()<<endl;
		break;
	case 2:
		cout << "Объём цилиндра равен: " << ObjCylinder.Volume() << endl;
		cout << "Площадь поверхности цилиндра равна: " << ObjCylinder.SurfaceArea() << endl;
		break;
	case 3:
		cout << "Объём пирамиды равен: " << ObjPyramid.Volume() << endl;
		cout << "Площадь поверхности пирамиды равна: " << ObjPyramid.SurfaceArea() << endl;
		break;
	default:
		cout << "Фигура выбрана не правильно."<<endl;
		break;
	}
}