// Rabin-Karp Algorithm
#include <iostream>
#include <cstring>

using namespace std;

// Rabin-Karp Algorithm
void RBSearch(char pat[], char txt[], int m, int n, int d, int q) {
    // Compute (d^m-1) % q
    int h = 1;
    for (int i = 1; i <= m-1; i++) {
        h = (h * d) % q;
    }

    // Compute p and t
    int p = 0, t = 0;
    for (int i = 0; i < m; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    // Check for spurious hits
    for (int i = 0; i <= n - m; i++) {
        if (p == t) {
            bool flag = true;
            for (int j = 0; j < m; j++) {
                if (txt[i + j] != pat[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                cout << "Pattern found at index " << i << endl;
            }
        }

        // Compute ti+1 using ti
        if (i < n - m) {
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
            if (t < 0) {
                t = t + q;
            }
        }
    }
}

int main() {
    char txt[] = "ABCCDDAEFG";
    char pat[] = "CDD";
    int n = strlen(txt);
    int m = strlen(pat);
    int d = 256; // number of possible characters
    int q = 101; // a prime number

    RBSearch(pat, txt, m, n, d, q);

    return 0;
}