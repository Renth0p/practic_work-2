#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
double x, y, s;
int n;

cout << "Введите значение n от 1 до 7, это число будет являться номером примера!" << endl;
cout << "n= ";
cin >> n;

if (n == 1) {
  cout << "Пример #1" << endl;
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
}

if (n == 2) {
  cout << "Пример #2" << endl;

  cout << "Введите x: ";
  cin >> x;
  cout << "Введите y: ";
  cin >> y;

if (x/y > 0) {
  s = log10(x) + pow(double(abs(y)),1/3);
  cout << "1)s = " << setprecision(3) << s << endl;

} else if (x/y < 0) {
  s = log10(x/y) * pow((x+y),3);
  cout << "2)s = " << setprecision(3) << s << endl;

} else {
  s = pow((pow(x),2 * y),3);
  cout << "3)s = " << setprecision(3) << s << endl;

}
}
}
return 0;
