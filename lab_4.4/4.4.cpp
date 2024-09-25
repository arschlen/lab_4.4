#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double R, xp, xk, dx;

    cout << "R: ";
    cin >> R;
    cout << "xp: ";
    cin >> xp;
    cout << "xk: ";
    cin >> xk ;
    cout << "dx: ";
    cin >> dx;

    cout << fixed << setprecision(2);
    cout << setw(10) << "x" << setw(10) << "y" << endl;
    cout << "-------------------------" << endl;

    for (double x = xp; x <= xk; x += dx) {
        double y;

        // 1. Дуга кола
        if (x >= -1 - R && x <= -1) {
            y = 1 - sqrt(R * R - (x + 1) * (x + 1));
        }
        // 2. Горизонтальна пряма лінія
        else if (x > -1 && x <= 0) {
            y = -R;
        }
        // 3. Пряма лінія y = x
        else if (x > 0 && x <= 2) {
            y = x;
        }
        // 4. Пряма лінія y = 2*x - 3
        else if (x > 2) {
            y = 2 * x - 3;
        }

        cout << setw(10) << x << setw(10) << y << endl;
    }

    cout << "-------------------------" << endl;

    return 0;
}
