#include <iostream> 
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    printf("Âàñèëiâ Áîãäàí IÑ-01, çàâäàííÿ ¹23\n");
    int a, b;
    cout << "Ââåäiòü êðàéíº íèæíº çíà÷åííÿ äiàïàçîíó, a:"; cin >> a;
    cout << "Ââåäiòü êðàéíº âåðõíº çíà÷åííÿ äiàïàçîíó, b:"; cin >> b;

    for (a; a <= b; a++) {
        cout << "Äëÿ ÷èñëà: " << a << ":\n";
        if (a == 0) {
            cout << "Âñi ÷èñëà ïîñëiäîâíîñòi Ôiáîíà÷i º äiëüíèêàìè\n";
        }
        else {
            for (int div = 1; div <= abs(a); div++) {
                if (a % div == 0) {
                    int f0 = 0, f1 = 1, fn = 1;
                    while (fn <= div) {
                        fn = f0 + f1;

                        f0 = f1;
                        f1 = fn;
                        if (fn == div) {
                            cout << div << "\n";
                        }
                    }
                }
            }
        }

    }


    return 0;
}
