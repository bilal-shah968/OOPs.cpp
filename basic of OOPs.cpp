Classes & Objects

Objects:
1: Objects are entities in the real world.
2: An object is an instance of a class.
3: They represent the basic runtime entities in object-oriented programming.
4: An object is a variable of a class type.
5:Objects can be accessed using the dot operator (.) or the arrow operator (-> for pointers).

Classes:
1: A class is a blueprint or a templates that defines the properties and behaviours of a object. 
2: It classifies and defines the structure of objects.
3: It is a fundamental unit in object-oriented programming.

Attributes:
Data  memeber or properties of class they represent the set or characteristics of an object are  called on attributes 
it is characterictice of an object:

Constructor:
1: A constructor is used to initialize an object.
2: It is a special member function that is automatically called when an object is created.
3: The constructor has the same name as the class and donot return any value 

Types of constructors:
1: Default Constructor: Takes no parameters.
2: Parameterized Constructor: Takes parameters to initialize an object.
3:Copy Constructor: Initializes an object by copying another object.

Destructor:
1: A destructor is a special member function that is called when an object is deleted or goes out of scope.
2: A destructor cannot take any parameters.
3: The destructor has the same name as the class, but is preceded by a tilde (~), e.g., ~ClassName().

Types of OOPs:

Encapsulation:
        is the binding of data (variables) and methods (functions) together into a single unit, i.e., a class.
        It helps to protect and hide data from outside interference, leading to data abstraction.

Getters:
    are methods that provide read access to private data members, allowing external code to retrieve values safely.

Setters:
     are methods that provide write access to private data members, allowing external code to modify values while enforcing validation rules.

Abstraction:
         allows us to focus on essential features while hiding the implementation details.
         For example, the pow(x, y) function calculates x^y but hides the underlying implementation.
Inheritance:
         allows a class (derived class or child class) to inherit properties and behavior from another class (base class or parent class).

Example of Inheritance:
     class Vehicle { }; // Parent class
     class Car : public Vehicle {}; // child class
     class Truck : public Vehicle {};// child class 
     class Scooter : public Vehicle {};// child class

Access specifiers and Mode of inheritance                                                 functions / method 
      Private: Data and methods are accessible only within the class.
      Public: Data and methods are accessible to everyone.
      Protected: Data and methods are accessible within the class and its derived classes.

Types of Inherritance:
  Single inheritance            A derived class inherits from a single base class.
  Multi--level inheritance      The  parent class is  derived of another class
  Multiple inheritance          the child class is inheritic of multiple parent class 
  Hierarchical inheritance      both child classes are inherits of one parent class
  Hybrid inheritance            combination of more than one inheritance types

Diamond Problem;
base class has multiple parent classes having a common ancestor class

Polymorphism:
Ability of object / methods to take different forms 
     "right"
The two types of polymorphism:
Compile time polymorphism
run time polymorphism

Compile time                                          VS              Runtime Polymorphism::
 That is achieve through function overloading.                   That is achieve through function overriding          
                                                            
The function name is should be same,                             Function  name and parameters both should be same.
 but parameters can be different.

 It has faster execution time.                                   It is comparitively slower.

 It has more memory efficient.                                   it is less comparitavely.


Funtion overloading 
DEfine a numer of function with some funtion name they perform diiferently according to the arguments passed 
          shape                                                                               /   \
          / Area()\                                                                          /     \
        /     !    \                                                                        /       \
      /       !     \                                                                    how many    type
    class   square   triangle




Friend Function:
  Non-member funtion  which can access private member of the class.
    For Example:
    class A{

       ----------
       ----------                        functionf1
       ----------
       frienf f1();
    };


Function overriding
         that allows a derived class to provide a specific implementation of a method that is 
 already defined in its base class
    