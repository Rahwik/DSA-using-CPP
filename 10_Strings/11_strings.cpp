//KMP Algorithm(Constructing LPS Array
#include <iostream>
#include <string>
using namespace std;

// KMP Algorithm (Constructing LPS Array)
void filllps(string str, int lps[]) {
    int n = str.length();
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    string pat;
    cout << "Enter the pattern: ";
    getline(cin, pat);

    int lps[pat.length()];
    filllps(pat, lps);

    cout << "LPS Array: ";
    for (int i = 0; i < pat.length(); i++) {
        cout << lps[i] << " ";
    }
    cout << endl;

    return 0;
}