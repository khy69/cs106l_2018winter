#include <iostream>
#include "SimpleGraph.h"
#include <string>

using std::cout;	using std::endl;

void Welcome();
template <typename T>
T PromoteInfo();
SimpleGraph ReadFile(std::string &name);
// Main method
int main() {
    Welcome();
    cout<<"input the file name(one in 'res' folder): \n";
    std::string filename=PromoteInfo();
    cout<<"input the number of seconds to run the algorithm(a positive number): \n";
    double run_time=PromoteInfo();
    SimpleGraph graph=ReadFile(filename);
    return 0;
}

/* Prints a message to the console welcoming the user and
 * describing the program. */
void Welcome() {
    cout << "Welcome to CS106L GraphViz!" << endl;
    cout << "This program uses a force-directed graph layout algorithm" << endl;
    cout << "to render sleek, snazzy pictures of various graphs." << endl;
    cout << endl;
}
template <typename T>
T PromoteInfo()
{
    T res;
    std::cin>>res;
    return res;
}
SimpleGraph ReadFile(std::string &name)
{
    
}