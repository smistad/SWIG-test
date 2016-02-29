#include "ObjectA.hpp"

ObjectA::ObjectA() {
	mValue = 0;
	mStringValue = "";
}

void ObjectA::setValue(int value) {
	mValue = value;
}

int ObjectA::getValue() const {
	return mValue;
}

void ObjectA::setValue(std::string value) {
	mStringValue = value;
}

std::string ObjectA::getStringValue() const {
	return mStringValue;
}

void ObjectA::secretFunction() {
	mValue = 0;
	mStringValue = "";
}


