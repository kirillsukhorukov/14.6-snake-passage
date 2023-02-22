#include <iostream>

using namespace std;

int main()
{
    int digit=0; //Переменная содержания очередной ячейки
    int mult=1; //Переменная множитель (1 на четных строка и -1 на нечетных)

    int array[5][5];

    //Цикл инициализации массива
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            array[i][4*(i%2)+j*mult]=digit; //Витиеватая формула индекса столбца)))
            digit++;
        }
        mult*=-1; //Смена направления индексации при смене строки
    }

    //Цикл вывода массива
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << array [i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}