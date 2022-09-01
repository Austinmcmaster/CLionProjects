#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    if(argc < 2) {
        cout << "Hello World" << endl;
        }
    else {
        cout << "Hello " << argv[1] << " welcome to CS 235 this is going to be a blast."
                                       " Also CLION is pretty cool right." << endl;
    }
    return 0;
}
