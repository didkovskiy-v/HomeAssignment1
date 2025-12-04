# Assignment 3
## Author  
Didkovskiy Vatslav 25.581-MM
## Contacts  
st142215@student.spbu.ru
## Description  
Implementation of the "Transformers" class hierarchy.
Base class Transformer contains 5 fields, 3 methods, composition (Engine), and association (ally pointer).
Three derived classes: Autobot, Decepticon, Neutral — each with 2–3 fields and 1–2 methods.
All classes are defined in separate .h/.cpp files.
All classes are tested using Google Test.

## Build and Run Tests  
Build all tests:
make
Run all tests:
make test
Run individual tests:
make test_engine
make test_transformer
make test_autobot
make test_decepticon
make test_neutral
