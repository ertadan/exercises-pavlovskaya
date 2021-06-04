# exercises-pavlovskaya
---
### Examples from book by T.A. Pavlovskaya Y.A. Shchupak
### C/C++ Structural programming

There are two functions in calculator: calculate f(x) for some x
or make tabulation for f(x) between x1 and x2 with step dx.

We have two abstract classes : 
**Action**, 
**Function**

In this implementation we use pattern DoubleSwitch.

As a Switch class we will use **Menu** class.

We use two vectors : 

1.pObjs with references on objects derived from
**Function** class.(exponent,sin,cos)

2.pActs with references on objects derived from
**Action** class.(calculation,tabulation,anyaction).

We pass them in constructor of **Menu** class and after
user can choose needed function and action.

To add a new **Function** we need to:
* create class- descendant from **Function** class:

```c++
	// cos.h
	class Cosinus :public Function {
	public:
		Cosinus() : name("cos(x)") {}
		const std::string& GetName() const { return name; }
		void SetCoeff() {}
		double GetVal() const { return cos(x); }
	private:
		std::string name;
	};

	// creating global object of cosine method
	extern Cosinus f_cos;
```
* create global object in cos.cpp file

```c++
	#include "cos.h"
	
	Cosinus f_cos;

```
* add reference of **f_cos** object to **pObjs** array.

```c++
	// calculator.cpp
	Function* pObjs[] = { &f_exp, &f_line,
                       &f_sin, &f_cos };
```

After doing this your **Menu** object will be initialized with
new function object, which you can call.
