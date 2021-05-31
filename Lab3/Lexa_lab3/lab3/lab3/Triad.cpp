#include"Triad.h"
Triad::Triad(int first, int second, int third) :first{ first }, second{ second }, third{ third }{}
Triad::~Triad() = default;
Triad Triad:: Increase()const {
	return Triad(first + 1, second + 1, third + 1);
}
