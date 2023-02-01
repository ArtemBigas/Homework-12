#include "Алгоритм Кнута-Морриса-Пратта.h"
void computeLPS(string pat, int* lps)
{
    int j = 0;

    lps[0] = 0; // lps[0] is always 0 

    int i = 1;
    while (i < pat.size()) {
        if (pat[i] == pat[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0) {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMPSearch(const string& pat, const string& txt,int k)
{
    int* lps = new int[pat.size()];

    computeLPS(pat, lps);

    int i = 0;
    int j = 0;
    int n = 0;// счетчик количества совпадений алгоритма
    while (i < txt.size()) {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == pat.size()) {
            n++;
            j = lps[j - 1];
        }
        else if (i < txt.size() && pat[j] != txt[i]) {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i = i + 1;
            }
        }
    }

    if (txt.size() == n * k) { cout << "K is correct"<<endl; }
    else { cout << "K is incorrect" << endl; };
}