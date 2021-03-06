/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex03-fibonacci
 *
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */


#include <cstdint>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {
                    uint64_t fibonacci(uint64_t number) {

                        uint64_t last = 0;
                        uint64_t next = 1;
                        if(number==0) {
                            //std::cout << "DEBUG: The value of Fibonacci " << number << " is " << last << std::endl;
                            return (last);
                        }
                        if(number==1) {
                            //std::cout << "DEBUG: The value of Fibonacci " << number << " is " << next << std::endl;
                            return (next);
                        }

                        uint64_t store=last+next;
                        //storage variable for new fib

                        for(uint64_t i=2; i<(number+1); i++){
                            store = last + next;
                            //DEBUG Lines
                            //std::cout << "DEBUG: i= " << i << std::endl;
                            //std::cout << "AND last= " << last << " next=" << next << " store=" << store << std::endl;
                            last = next;
                            next = store;
                        }
                        std::cout << "The value of Fibonacci " << number << " is " << store << std::endl;
                        return(store);
                }
            }
        }
    }
}