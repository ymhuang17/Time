#include<iostream>
using namespace std;

template<typename T>
struct Point {
  T x, y;
  Point(T x = 0, T y = 0) : x(x), y(y) {} 
};

template<typename T>
Point<T> operator + (const Point<T>& A, const Point<T>& B) {
  return Point<T>(A.x+B.x, A.y+B.y);
}

template<typename T>
ostream& operator << (ostream &out, const Point<T>& p) {
  out << "(" << p.x << "," << p.y << ")";
  return out;
}

int main() {
  Point<int> a(1, 3), b(2, 4);
  Point<double> c(1.2, 1.4), d(6.6, 9.9);
  cout << a+b << " " << c+d << "\n";
  return 0;
}
