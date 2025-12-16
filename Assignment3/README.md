# Assignment 4
## Author  
Didkovskiy Vatslav 25.581-MM
## Contacts  
st142215@student.spbu.ru
## Description  
Implementation of the "Transformers" class hierarchy (based on Assignment 3).

- Base class Transformer with 5 fields, composition (Engine), and association (ally)
- Three derived classes: Autobot, Decepticon, Neutral
- Each class has:
  - Two constructors (default and parameterized)
  - Operator << for output to any std::ostream
  - 2–3 virtual methods, each printing "ClassName::MethodName called"
  - One pure virtual method (GetType()) in the base class
- Full unit test coverage using Google Test:
  - Direct method calls (obj.method())
  - Calls via base class pointer (Transformer* p = &obj; p->method();)
  - Calls via std::vector<Transformer*> containing 9 objects (3 of each type)

## Build and Run Tests
```sh
make test
