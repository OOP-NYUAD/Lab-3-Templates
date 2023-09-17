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


## Sorting Bank Accounts by Balance Exercise

In this programming exercise, you will practice creating a `std::vector` of `Account` objects, where `Account` is a user-defined data type containing relevant bank account information. You will add multiple instances of the `Account` class to the vector and then sort the vector in ascending order based on the account balances.

### Instructions

1. Open the provided C++ code file (lab3exercise2.cpp).

2. In the code, you will find the `Account` class defined, which includes attributes for account number and balance. You will also find a custom comparison function, `compareByBalance`, used for sorting the accounts by balance.

3. Several instances of the `Account` class are created with different account numbers and balances.

4. These instances are added to a `std::vector<Account>` called `accounts`.

5. The `std::sort` function is used to sort the `accounts` vector by account balance in ascending order.

6. The sorted accounts are displayed, showing account numbers and balances.

7. Compile and run the program to see the sorted accounts by balance.

### Sample Output

Here's a sample output of the sorted accounts based on balance:

```plaintext
Sorted Accounts by Balance (Ascending Order):
Account Number: 102, Balance: $2500
Account Number: 101, Balance: $5000
Account Number: 103, Balance: $7500
```

In the sample output above, the accounts are sorted in ascending order based on their balances.

### Task

1. Examine the provided code to understand how the `Account` class is defined, how instances are created, and how the vector is sorted.

2. Compile and run the program to see the sorted accounts based on balance.

3. Optionally, modify the code to add more `Account` instances and experiment with different balances.

4. Try sorting the accounts in descending order (highest balance first) by modifying the `compareByBalance` function.

5. Use this exercise to practice working with user-defined classes, vectors, and custom sorting criteria.
