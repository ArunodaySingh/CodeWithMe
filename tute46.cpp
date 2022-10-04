//Constructors in Derived Class in C++
/*
.We can use constructor in derived class in c++
.If base class constructor does not have any argument, there is no need of 
 any constructor in derived class
.But if there are one or more argument in the base class
constructor, derived class need to pass argument to the base
class constructor
.If both base and derived class have constructor , base class constructor is executed first
.In multiple inheritence, base classes are constructed in the order in which they appear 
 in the class declaration
.In multilevel inheritence, the constructor are executed in the order of
  inheritence
*/

/*
??For Virtual CLass(VIP person)
.The constructor for virtual base classes before an non
virtual base class
.If there are multiple virtual base classes, they are invoked in the order 
declared.
.Any non-virtual base class are the constructed before the derived 
 class constructor is executed.
*/
