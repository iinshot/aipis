#include <iostream>

// main function
int main(){
    std :: string name; // for name
    // Запрашиваем ввод у пользователя
    std :: cout << "Enter your name" << std :: endl;
    // Ввод пользователя
    std :: cin >> name;
    // Вывод приветственного сообщения
    std :: cout << "Hello World" << name << std :: endl;
    // Программа завершена успешно
    return 0;
}