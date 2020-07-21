#include <memory>

#pragma once

// c memory lib
// ---------------------------------------------------------
// БЕТА этого перевода,ибо я ебал в рот гугл переводчик. Гугл и их переводчик по-отдельности.
//  Pointer traits
#define pointer_traits риси_вказівника

// Garbage collector support
#define pointer_safety безпека_вказівника


// Allocators
#define allocator розподільник
#define allocator_traits риси_розподільника
#define allocator_arg_t розподільник_арг_т
#define allocator_arg розподільник_арг
#define uses_allocator використовує_алокатор

// Uninitialized storage
#define raw_storage_iterator ітератор_зберігання_сировини

// Smart pointers (!!!)
#define unique_ptr унікальний_вказівник // переводчик послал меня нахуй [Done]
#define shared_ptr позичений_вказівник// и ещё раз [Done]
#define weak_ptr слабкий_вказівник// поправь птр по нормальному [Done]
#define auto_ptr автоматичний_вказівник

// Helper classes
#define atomic атомний
#define owner_less власник_менше
#define enable_shared_from_this увімкнути_спільний_доступ_до_цього
#define bad_weak_ptr поганий_слабкий_птр //  осуждаю кибербулинг
#define default_delete видалити_за_замовчуванням
#define hash хеш
// ---------------------------------------------------------
//
// Functions//
//
// Miscellaneous
#define to_address адресувати
#define addressof ця_адреса  //  и ещё раз [Done]
#define align вирівняти
#define assume_aligned припустити_порівняти

// Garbage collector support
#define declare_reachable оголосити_доступним
#define undeclare_reachable визнати_недоступним
#define declare_no_pointers заявити_но_показів
#define get_poiner_safety отримати_безпеку_вказівника

// Uninitialized storage
#define uninitialized_copy неініціалізована_копія
#define uninitialized_copy_n неініціалізова_копія_н
#define uninitialized_fill неініціалізований_заповнення
#define uninitialized_fill_n неініціалізований_заповнення_н
#define uninitialized_move неініціалізований_хід
#define uninitialized_move_n неініціалізований_хід_н
#define uninitialized_default_construct неініціалізована_конструкція_за_замовчуванням
#define uninitialized_default_construct_n неініціалізована_конструкція_за_замовчуванням_н
#define uninitialized_value_construct неініціалізована_конструкція_значення
#define uninitialized_value_construct_n неініціалізована_конструкція_значення_n

// Сука, как же я заебался писать эти uninitialized, просто пиздец нахуй. Переведешь ты) Как скажешь. Сука.

#define destroy_at знищити_ат
#define destroy знищити
#define destroy_n знищити_н
#define get_temporary_buffer отримати_тимчасовий_буфер
#define return_temporary_buffer повернути_тимчасовий_буфер

// Smart pointer non-member operation
#define make_unique зробити_унікальним
#define make_unique_for_overwrite зробити_унікальним_для_перезапису
#define make_shared зробити_спільним //  but does it DJENT
#define make_shared_for_overwrite зробити_спільним_для_перезапису
#define allocate_shared розподілити_поділений
#define allocate_shared_for_overwrite виділити_спільне_для_перезапису
#define static_pointer_cast статичний_покажчик_ролі
#define dynamic_pointer_cast динамічний_пойнт_каст
#define const_poinet_cast константний_кидок_вказівника //  ya idy naxui [Done]
#define reinterpret_pointer_cast переосмислити_вказівник
#define get_deleter отримати_делетер
#define swap міняти_місцями
// дело сделано


