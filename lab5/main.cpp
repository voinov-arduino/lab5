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
double y(double x)
{
  return sqrt(32*32+x*x); // функция окружности
}
string ans;
int main()
{
    back:
    int n; // задаём число разбиений n
    cout << "Введите число разбиений: "<< endl;
    cin >> n;
    cout << "Число Разбиений \t \t \t \tРезультаты вычилсений" << endl;
    cout << "\t N \t \t \t \t \t \t\t\tA \t \t \t B" << endl;
    for(double z = 1; z <= n ;z++){ // цикл который будет считать с учетом кол-ва разбиений
        int i; // счётчик
        double Integral; // здесь будет интеграл
        double a = -23, b = 41; // задаём отрезок интегрирования
        double h = (b-a)/z;// задаём шаг дискретизации
        // вычисляем интеграл по формуле прямугольников
        Integral = 0.000;
        for(i = 1; i <= z; i++){
            Integral = Integral + h * y(a + h * (i -1));}
        cout << "\t N"<< z <<" \t \t \t \t \t \t " << Integral;
        // вычисляем интеграл по формуле трапеций
        Integral = h * (y(b) + y(a)) / 2.0;
        for(i = 1; i <= z-1; i++){
            Integral = Integral + h * y(i);}
        cout << "  \t " << Integral << endl;}
    cout << "Хотите повторить опецарию?Дa(y)/Нет(n)"<<endl;
    cin >> ans;
    if(ans == "y"){
        goto back;
    }
}
