#ifndef OBJECT_A_HPP
#define OBJECT_A_HPP

class ObjectA {
	public:
		ObjectA();
		void setValue(int value);
		int getValue() const;
	protected:
		int mValue;
};


#endif
