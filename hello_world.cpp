#include <iostream>

// Главная функция
int
main()
{
  std ::string name; // Переменная для хранения имени
  // Запрашиваем ввод у пользователя
  std ::cout << "Enter your name" << std ::endl;
  // Ввод пользователя
  std ::cin >> name;
  // Вывод приветственного сообщения
  std ::cout << "Hello World" << name << std ::endl;
  // Программа завершена успешно
  return 0;
}