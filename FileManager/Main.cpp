#include "Includes.h"

/*  FileManager
 *
 *  Зайти в папку - индекс
 *  Возврат - b
 *  Переименовать - r [index]
 *  Удалить - d [index]
 *  Переместиться - cd [path]
 *  Помощь - h
 *  Создать папку - md [name]
 *  Создать файл - mf [name.extension]
 *  Скопировать - c [index]
 *  Вставить - p
 *  Вырезать - x [index]
 *  Поиск "вниз" - s [regEx]
 *
 *  Классы:
 *  FileManager - управление пользователем
 *  CommandHandler - parse();
 *
 *  Старт ->
 *  {
 *      1   Диск C
 *      2   Диск D
 *      etc.
 *
 *      @~ 1
 *  } ->
 *  {
 *      1   Games               500 mb
 *      2   Program Files       1,6 gb
 *      etc.
 *
 *      @~ 2
 *  } ->
 *  {
 *      1   Log.txt             2,7 mb
 *      2   Program.exe         34 mb
 *      etc.
 *  }
 */

int main()
{

}