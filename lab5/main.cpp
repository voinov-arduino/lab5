//
//  main.cpp
//  lab5
//
//  Created by Дмитрий Вискунов on 08.11.2022.
//

#include <iostream> // добавляем функции для ввода и вывода на экран
#include <cmath>
 
using namespace::std;
// функция, интеграл
double f(double x)
{
  return sin(x);
}
 
int main()
{
    cout << "Число Разбиений \t \t \t Результаты вычилсений" << endl;
    cout << "\t N \t \t \t \t \t \t \t  A \t \t B" << endl;
    int i; // счётчик
    double Integral; // здесь будет интеграл
    double a = 0.0, b = 1.0; // задаём отрезок интегрирования
    double h = 0.001;// задаём шаг дискретизации
    
    double n; // задаём число разбиений n
    
    n = (b - a) / h;
    // вычисляем интеграл по формуле прямугольников
    Integral = 0.0;
    for(i = 1; i <= n; i++)
        Integral = Integral + h * f(a + h * (i - 0.5));
    cout << "I1 = " << Integral << "\n";
    
    // вычисляем интеграл по формуле трапеций
    Integral = h * (f(a) + f(b)) / 2.0;
    for(i = 1; i <= n-1; i++)
        Integral = Integral + h * f(a + h * i);
    cout << "I2 = " << Integral << "\n";}
