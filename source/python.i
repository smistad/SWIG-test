 %module test
 %{
 /* Includes the header in the wrapper code */
 #include "ObjectA.hpp"
 #include "ObjectB.hpp"
 %}
 
 /* Parse the header file to generate wrappers */
 %include "ObjectA.hpp"
 %include "ObjectB.hpp"