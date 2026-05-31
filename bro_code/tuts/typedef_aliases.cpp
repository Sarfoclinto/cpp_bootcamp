#include <iostream>
#include <vector>
/**
 * typedef = reserved keyword use to create an additional name
 *           (alias) for another data type.
 *            New identifier for an existing type
 *            Helps  with readability and reduces typos
 *             Use when there is a clear benefit
 *              Replaced with `using` (work better w/ templates)
 */


//  alias for a very long data type
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// for standard string
// typedef std::string text_t;
using text_t = std::string;

// for int
// typedef int count_t;
using count_t = int;

// for cout
// ! using cout_t = std::cout; error because std:cout isn't a type

int main(){
    text_t firstName = "Shell";
    std::cout << firstName << '\n';

    count_t age = 56;
    std::cout << age << '\n';

    return 0;
}