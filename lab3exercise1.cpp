/* Write a template class “HetrogenousPair” that can hold a pair 
of values of different types. Define constructors, two mutator 
and two accessor methods:
    - set_first_value() 
    - set_second_value() 
    - get_first_value()
    - get_second_value() 
in the template class HetrogenousPair */

//Define the class to be a template class with typename T1 and typename T2
class HeterogeneousPair {
public:
    // Constructor to initialize the pair
    HeterogeneousPair(/*Pass in the first template value*/, /*Pass in the second template value*/) {
        // intitialize the first value
        // initialize the second value
    }

    // Mutator methods to set the values
    void set_first_value(/*Pass in the first template value*/) {
        //set the first value accordingly
    }

    void set_second_value(/*Pass in the second template value*/) {
        //set the second value accordingly
    }

    // Accessor methods to get the values
    /*put in the appropriate return type*/ get_first_value() const {
        return firstValue;
    }

     /*put in the appropriate return type*/ get_second_value() const {
        return secondValue;
    }

private:
    T1 firstValue;
    T2 secondValue;
};

int main() {
    
    //Declare a HeterogeneousPair of int and double, and name it 'pair'. Assign to it the values 42, 3.14 respectively
    
    //Get the first value of the pair using the getter from the template class. Store it in an int variable called first.
    //Get the second value of the pair using the getter from the template class. Store it in a double variable called second. 
    
    std::cout << "First value: " << first << std::endl;
    std::cout << "Second value: " << second << std::endl;

    // Modify the values
    //Using the previously declared HeterogeneousPair 'pair' update the first value of the pair with 10
    //Using the previously declared HeterogeneousPair 'pair' update the second value of the pair with 2.718 

    std::cout << "Modified First value: " << pair.get_first_value() << std::endl;
    std::cout << "Modified Second value: " << pair.get_second_value() << std::endl;

    return 0;
}
