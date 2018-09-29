/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex03-fibonacci
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
                        uint64_t store=0;
                        for(uint64_t i=2; i<(number+1); i++){
                            store = last + next;
                            std::cout << "DEBUG: i= " << i << std::endl;
                            std::cout << "AND last " << last << " next=" << next << " store=" << store << std::endl;
                            last = next;
                            next = store;
                        }
                        std::cout << "The value of Fibonacci " << number << " is " << store << std::endl;
                        return(store);
                        //std::cout << "DEBUG: number = " << number << std::endl;
                        //return (-1);
                }
            }
        }
    }
}