# Lab-3-Templates

## HeterogeneousPair Template Class Exercise

### Introduction

This exercise focuses on creating a C++ template class called `HeterogeneousPair` that can hold a pair of values of different types. In this template class, we'll define constructors and accessor/mutator methods to set and retrieve these values.

### Objective

The main objective of this exercise is to understand and practice working with template classes in C++ and to implement a class that can hold heterogeneous pairs of values.

### Prerequisites

- Basic knowledge of C++ programming.
- Understanding of template classes and generic programming concepts.

### Functions Included

- `HeterogeneousPair.h`: Contains the definition of the `HeterogeneousPair` template class.
- `main.cpp`: An example usage of the `HeterogeneousPair` class template.

### Usage

1. **Including the Header File**:
   - Include the `HeterogeneousPair.h` header file in your C++ program where you intend to use the `HeterogeneousPair` template class.

2. **Creating Heterogeneous Pairs**:
   - To create a heterogeneous pair, instantiate an object of the `HeterogeneousPair` class template with the desired data types for the first and second values. For example:
   
     ```cpp
     HeterogeneousPair<int, double> pair(42, 3.14);
     ```

3. **Accessor Methods**:
   - Use the `get_first_value` and `get_second_value` methods to retrieve the values stored in the pair.
   
     ```cpp
     int first = pair.get_first_value();
     double second = pair.get_second_value();
     ```

4. **Mutator Methods**:
   - Use the `set_first_value` and `set_second_value` methods to modify the values in the pair.
   
     ```cpp
     pair.set_first_value(10);
     pair.set_second_value(2.718);
     ```
