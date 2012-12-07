#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdlib>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::map;

int main(int argc, char** argv) {
    if (argc != 3) {
        cout << "Usage: [file] [threshhold]" << endl;
    }
    int threshhold = atoi(argv[2]);

    map<string, int> counts;

    string line;
    ifstream file (argv[1]);
    if (file.is_open()) {
        while (file.good()) {
            getline(file, line);
            if (line != "") {
                counts[line]++;
            }
        }
    }

    map<string, int>::iterator it;

    int niceCount = 0;
    cout << "Nice" << endl << "----" << endl;
    for (it = counts.begin(); it != counts.end(); it++) {
        if (it->second >= threshhold) {
            cout << it->first << ": " << it->second << endl;
            ++niceCount;
        }
    }
    cout << endl;

    int naughtyCount = 0;
    cout << "Naughty" << endl << "-------" << endl;
    for (it = counts.begin(); it != counts.end(); it++) {
        if (it->second < threshhold) {
            cout << it->first << ": " << it->second << endl;
            ++naughtyCount;
        }
    }

    cout << endl;
    cout << "Summary" << endl << "-------" << endl;
    cout << "Nice: " << niceCount << endl;
    cout << "Naughty: " << naughtyCount << endl;

    return 0;
}
