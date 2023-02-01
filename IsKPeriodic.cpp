#include "IsKPeriodic.h"
void IsKPeriodic(int k, string txt,string pat)
{
    
    string* array = new string[k];
    for (int i = 0; i < k; i++)
    {
        array[i] = txt[i]; pat += array[i];
    };
    if (k > 1 && txt[0] == txt[k - 1] && txt[k - 1] != txt[k]) { cout << "K is incorrect"; cout << endl; }
    else { KMPSearch(pat, txt, k); };
    delete[] array;
}