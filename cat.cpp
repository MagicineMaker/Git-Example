#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 2) {
        cout << "Usage: " << argv[0] << " <action>" << endl;
        return 1;
    }

    if(string(argv[1]) == "touch") {
        cout << "Meow!" << endl;
    } else if(string(argv[1]) == "feed") {
        cout << "Purr!" << endl;
    } else if(string(argv[1]) == "hit") {
        cout << "You are bitten!" << endl;
    } else {
        cout << "Unknown action: " << argv[1] << endl;
    }

    return 0;
}