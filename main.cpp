#include <bits/stdc++.h>
using namespace std;
const string dir = "--working-directory=";
int main(int argc, char *argv[]) {
    string res = "konsole";
    for (int i = 1; i < argc; i++) {
        string cur = argv[i];
        if (cur.size() > dir.size() && cur.substr(0, dir.size()) == dir)
            res += " --workdir '" + cur.substr(dir.size()) + "'";
        else if (cur == "--")
            res += " -e";
        else
            res += " '" + cur + "'";
    }
    return system(res.c_str());
}
