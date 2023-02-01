#include "IsKPeriodic.h"
#include "Алгоритм Кнута-Морриса-Пратта.h"

int main()
{
	string txt;
    cout << "Enter the text ";
    cin >> txt;
    cout << endl;
    
    while (true) {
        cout << "Enter the multiplicity ";
        int k = 0;
        string pat;
        cin >> k;
        if (k >= txt.size() || k <= 0) {
            cout << "K is incorrect"; cout << endl;
        }
        else {
            IsKPeriodic(k, txt, pat); };   
    };
    return 0;    
}