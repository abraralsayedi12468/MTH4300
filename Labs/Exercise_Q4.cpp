#include <iostream>

int main() {
    /* (a) — what is the actual value of average? 2.5, however this code would print 2, so it needs 
    so you need to cast one of the numbers to be a double using the preferred C++ style casting 
    static_cast<double>
    */
    int total = 5, count = 2;
    double average = static_cast<double>(total) / count;
    std::cout << average << "\n";

    /* (b) — does this always print "Sufficient funds" when it shouldn't? Yes, because the balance is unsigned 
    unsigned ints cannot be negative, so twhen the if statment is run the number turns into a large 
    positive number, making the statemnet true print "sufficent funds" when it shouldn't.
    */
    int balance = 100;
    int withdrawal = 200;
    if (balance - withdrawal > 0) {
        std::cout << "Sufficient funds\n";
    }

    /* (c) — why might cents not equal 999? Because of this float isnt precise and is slightly less than 9.99 
     and when multiplied by 100does not give you exactly 999 so it is best to first use static_cast<double> and add .5 
     before you truncate when you print cents so you can get the correct value 999. 
    */
    double price = 9.99;
    int cents = static_cast<int>(price * 100 + 0.5);
    std::cout << cents << "\n";

    return 0;
}