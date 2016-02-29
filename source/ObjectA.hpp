#ifndef OBJECT_A_HPP
#define OBJECT_A_HPP

#include <string>

class ObjectA {
	public:
		ObjectA();
		void setValue(int value);
		int getValue() const;
		void setValue(std::string value);
		std::string getStringValue() const;
		void secretFunction(); // This function is not accessible from python
	protected:
		int mValue;
		std::string mStringValue;
};


#endif
