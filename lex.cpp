#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdlib>
#include <vector>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::map;
using std::multimap;
using std::vector;
using std::pair;

vector<string>* tokenize(string);

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Usage: [file]" << endl;
    }

    map<string, int> tweetcounts;
    int totwords = 0;

    string line;
    ifstream tweetf (argv[1]);
    if (tweetf.is_open()) {
        while (tweetf.good()) {
            getline(tweetf, line);
            if (line != "") {
                vector<string>* words = tokenize(line);

                for (int i = 0; i < (int)words->size(); i++) {
                    tweetcounts[words->at(i)]++;
                    totwords++;
                }
            }
        }
    }
    
    double uniquewords = (double)tweetcounts.size();
    double lexdiversity = uniquewords / totwords;

    cout << "Unique words: "  << uniquewords << endl;
    cout << "Lexical diversity: " << lexdiversity << endl;

    return 0;
}

vector<string>* tokenize(string s) {
    vector<string>* words = new vector<string>();
    char* cstr = new char[s.size()+1];
    strcpy(cstr, s.c_str());

    char* p = strtok(cstr, " ");
    while (p != 0) {
        words->push_back(string(p));
        p = strtok(0, " ");
    }    

    delete[] cstr;
    return words;
}
