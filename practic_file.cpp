#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, s, b;
    int n;

    cout << "Введите значение n от 1 до 15, это число будет являться номером примера" << endl;
    cout << "n= ";
    cin >> n;

    if (n == 1) {

        cout << "Пример #1." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (x*y > 0) {

            s = pow((x+y), 2) - cbrt(abs(x));
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (x*y < 0) {

            s = pow((x+y), 2) + sin(x);
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = pow((x+y), 2) + pow(y, 3);
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n ==2) {

        cout << "Пример #2." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (x/y > 0) {

            s = log(x) + cbrt(abs(y));
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (x/y < 0) {

            s = log(abs(x/y))*pow((x+y), 3);
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = pow(pow(x, 2), 3);
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n == 3) {

        cout << "Пример #3." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (x-y == 0) {

            s = pow(x, 2) + cbrt(y) + sin(y);
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (x-y > 0) {

            s = pow((x-y), 2) + log(abs(x));
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = pow((y-x), 2) + tan(y);
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n == 4) {

        cout << "Пример #4." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (x > y) {

            s = cbrt(abs(x-y)) + tan(x);
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (x < y) {

            s = pow((y-x), 3) + cos(x);
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = pow((y+x), 2) + pow(x, 3);
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n == 5) {

        cout << "Пример #5." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (x > y) {

            s = y * sqrt(abs(x)) + 3 * sin(y);
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (x < y) {

            s = x * sqrt(abs(x));
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = cbrt(abs(x)) + pow(x, 3)/y;
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n == 6) {

        cout << "Пример #6." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if (0.5 < x*y < 10) {

            s = exp(x-abs(y));
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (0.1 < x*y < 0.5) {

            s = cbrt(abs(x+y));
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = 2 * pow(x, 2);
            cout << "3)s = " << setprecision(3) << s << endl;

        }

    } else if (n == 7) {

        cout << "Пример #7." << endl;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите b: ";
        cin >> b;

        if (1 < x*b < 10) {

            s = exp(-x);
            cout << "1)s = " << setprecision(3) << s << endl;

        } else if (12 < x*b < 40) {

            s = cbrt(abs(x + 4*y));
            cout << "2)s = " << setprecision(3) << s << endl;

        } else {

            s = y * pow(x, 2);
            cout << "3)s = " << setprecision(3) << s << endl;

        }
    } else if (n == 8) {
        
        cout << "пример # 8." << endl;
        
        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;
        
        if (x/y < 0) {
            
            s = pow((pow(x,2)+ y),3);
            cout << "1)s = " << setprecision(3) << s << endl;
        
        } else if (x/y > 0) {
            s = log10(abs(x/y) + x/y);
            cout << "2)s = " << setprecision(3) << s << endl;
        } else {
            s = cbrt(abs(sin(y)));
            cout << "3)s = " << setprecision(3) << s << endl;
            
         }

    } else if (n <= 0 || n > 8) {

        cout << "Извините, но такого примера не существует. Попробуйте перезапустить программу и выбрать другой пример!";

    }

    return 0;

}
