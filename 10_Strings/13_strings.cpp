//Check for Rotation
#include <string>
#include <iostream>

using namespace std;

// Naive Solution
bool areRotations(string &a, string &b) {
    if (a.length() != b.length()) {
        return false;
    }
    return ((a + a).find(b) != string::npos);
}

// Efficient Solution
void computeLPSArray(string &s, int lps[]) {
    int length = 0; 
    lps[0] = 0;    

    int i = 1;
    while (i < s.length()) {
        if (s[i] == s[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

bool areRotationsEfficient(string &a, string &b) {
    if (a.length() != b.length()) {
        return false;
    }

    string concat = a + a;
    int lps[b.length()];
    computeLPSArray(b, lps);

    int j = 0; 
    int i = 0; 

    while (i < concat.length()) {
        if (b[j] == concat[i]) {
            j++;
            i++;
        }

        if (j == b.length()) {
            return true;
        }

        if (i < concat.length() && b[j] != concat[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return false;
}

int main() {
    string a = "abcde";
    string b = "cdeab";

    cout << "Naive Solution: " << (areRotations(a, b) ? "True" : "False") << endl;
    cout << "Efficient Solution: " << (areRotationsEfficient(a, b) ? "True" : "False") << endl;

    return 0;
}