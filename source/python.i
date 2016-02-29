 %module test
 %{
 /* Includes the header in the wrapper code */
 #include "ObjectB.hpp"
 %}
 
 // This adds support for converting std::string into python strings
 %include "std_string.i"
 
 // Declare the public interface of ObjectA as it should be available in Python.
 // Note that it differs slightly from the one in ObjectA. Can use this to select
 // which methods should be accessible from Python.
class ObjectA {
	public:
		ObjectA();
		void setValue(int value);
		int getValue() const;
		void setValue(std::string value);
		std::string getStringValue() const;
};

// We can also include entire header files
%include "ObjectB.hpp"