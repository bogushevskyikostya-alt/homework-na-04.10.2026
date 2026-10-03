/* Завдання1
#include <iostream>

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];

    int start;
    std::cout << "Введіть початкове число: ";
    std::cin >> start;

    int current = start;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = current;
            current *= 2; 
        }
    }

    std::cout << "\nОтриманий масив:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << '\n';
    }

    return 0;
}*/
/* Завдання 2
#include <iostream>

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];

    int start;
    std::cout << "Введіть початкове число: ";
    std::cin >> start;

    int current = start;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = current;
            current += 1; // додаємо 1 до кожного наступного елемента
        }
    }

    std::cout << "\nОтриманий масив:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << '\n';
    }

    return 0;
}*/
/* Завдання 3
#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROWS = 2;
const int COLS = 6;

void printArray(const int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main() {
    std::srand(std::time(nullptr));

    int arr[ROWS][COLS];
    int result[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = std::rand() % 10;
        }
    }

    std::cout << "Початковий масив:\n";
    printArray(arr);

    int shifts, direction;
    std::cout << "\nВведіть кількість зсувів: ";
    std::cin >> shifts;

    std::cout << "Оберіть напрямок зсуву:\n";
    std::cout << "1 - Вліво\n2 - Вправо\n3 - Вгору\n4 - Вниз\nВаш вибір: ";
    std::cin >> direction;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int new_i = i;
            int new_j = j;

            switch (direction) {
            case 1: 
                new_j = (j - shifts % COLS + COLS) % COLS;
                break;
            case 2: 
                new_j = (j + shifts) % COLS;
                break;
            case 3: 
                new_i = (i - shifts % ROWS + ROWS) % ROWS;
                break;
            case 4: 
                new_i = (i + shifts) % ROWS;
                break;
            default:
                std::cout << "Невірний вибір напрямку!\n";
                return 1;
            }

            result[new_i][new_j] = arr[i][j];
        }
    }

    std::cout << "\nМасив після зсуву:\n";
    printArray(result);

    return 0;
}*/ 