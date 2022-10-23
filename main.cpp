#include <iostream>
using namespace std;
 
int main()
{
 const int N = 10;
 int a[N] = { 56, 78, 9, 2446, 67, 99, 86, 4, 71, 18 };
 
 int min = 0; 
 int buf = 0; 
 
 
 for (int i = 0; i < N; i++)
 {
 min = i; 
 for (int j = i + 1; j < N; j++)
 min = ( a[j] < a[min] ) ? j : min;

 if (i != min)
 {
 buf = a[i];
 a[i] = a[min];
 a[min] = buf;
 }
 }
 
 for (int i = 0; i < N; i++) 
 cout << a[i] << '\n';
 cout << endl;
}