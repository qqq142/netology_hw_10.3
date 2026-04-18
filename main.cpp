#include <iostream>
#include <Windows.h>

int** create_two_dim_array(int rows, int cols)
{
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols]();
    }
    return arr;
}
//------------------------------------------------------------------------------
void fill_two_dim_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}
//------------------------------------------------------------------------------
void print_two_dim_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
//------------------------------------------------------------------------------
void delete_two_dim_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}
//------------------------------------------------------------------------------
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    int** table = create_two_dim_array(rows, cols);
    fill_two_dim_array(table, rows, cols);
    std::cout << "Таблица умножения:" << std::endl;
    print_two_dim_array(table, rows, cols);
    delete_two_dim_array(table, rows, cols);

    return 0;
}
//------------------------------------------------------------------------------
