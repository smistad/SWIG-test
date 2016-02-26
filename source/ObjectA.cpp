#include "ObjectA.hpp"

ObjectA::ObjectA() {
	mValue = 0;
}

void ObjectA::setValue(int value) {
	mValue = value;
}

int ObjectA::getValue() const {
	return mValue;
}
