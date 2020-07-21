#include <vector>

#pragma once
// by FirstAfterGod2501

// Методы vector


// Конструкторы


#define вектор vector // может использоваться как конструктор и как деструктор
// Операторы
#define оператор= operator=
#define оператор== operator==
// ---------------------------------------------------------------------
// Доступ к элементам
#define цей at
#define передня front
#define назад back
// ---------------------------------------------------------------------
// Итераторы
#define почати begin
#define кінець end
#define рпочати rbegin
#define ркінець rend
// ---------------------------------------------------------------------
// Работа с размером вектора
#define порожній empty
#define розмір size
#define максимальний_розмір max_size
#define резерв reserve
#define ємність capacity
#define скорочуватися_щоб_підходити shrink_to_fit
// ---------------------------------------------------------------------
// Модификаторы
#define очистити clear
#define вставити insert
#define стерти erase
#define відсунути push_back
#define відскочити_назад pop_back
#define змінити_розмір resize
#define своп swap
// ---------------------------------------------------------------------
// Другие методы
#define призначити assign
#define отримати_алокатор get_allocator
