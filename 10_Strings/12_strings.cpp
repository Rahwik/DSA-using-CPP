//KMP algorithm string Matching
#include <iostream>
#include <string>

using namespace std;

// Function to fill the lps array
void filllps(string pat, int lps[]) {
    int M = pat.length();
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
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

// KMP algorithm string Matching
void KMP(string pat, std::string txt) {
    int N = txt.length();
    int M = pat.length();
    int lps[M];
    filllps(pat, lps);
    int i = 0, j = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
        }
        if (j == M) {
            cout << "Pattern found at index " << i - j << std::endl;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j == 0) {
                i++;
            } else {
                j = lps[j - 1];
            }
        }
    }
}

int main() {
    string txt = "ABABDABACDABABCABAB";
    string pat = "ABAB";
    KMP(pat, txt);
    return 0;
}