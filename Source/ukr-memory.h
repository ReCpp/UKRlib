#include <memory>

#pragma once

// c memory lib
// ---------------------------------------------------------
// БЕТА этого перевода,ибо я ебал в рот гугл переводчик. Гугл и их переводчик по-отдельности.
//  Pointer traits
#define риси_вказівника pointer_traits

// Garbage collector support
#define безпека_вказівника pointer_safety


// Allocators
#define розподільник allocator
#define риси_розподільника allocator_traits
#define розподільник_арг_т allocator_arg_t
#define розподільник_арг allocator_arg
#define використовує_алокатор uses_allocator

// Uninitialized storage
#define ітератор_зберігання_сировини raw_storage_iterator

// Smart pointers (!!!)
#define унікальний_вказівник unique_ptr // переводчик послал меня нахуй [Done]
#define позичений_вказівник// shared_ptr и ещё раз [Done]
#define слабкий_вказівник// weak_ptr поправь птр по нормальному [Done]
#define автоматичний_вказівник auto_ptr

// Helper classes
#define атомний atomic
#define власник_менше owner_less
#define увімкнути_спільний_доступ_до_цього enable_shared_from_this
#define поганий_слабкий_птр bad_weak_ptr //  осуждаю кибербулинг
#define видалити_за_замовчуванням default_delete
#define хеш hash
// ---------------------------------------------------------
//
// Functions//
//
// Miscellaneous
#define адресувати to_address
#define ця_адреса addressof  //  и ещё раз [Done]
#define вирівняти align
#define припустити_порівняти assume_aligned

// Garbage collector support
#define оголосити_доступним declare_reachable
#define визнати_недоступним undeclare_reachable
#define заявити_но_показів declare_no_pointers
#define отримати_безпеку_вказівника get_poiner_safety

// Uninitialized storage
#define неініціалізована_копія uninitialized_copy
#define неініціалізова_копія_н uninitialized_copy_n
#define неініціалізований_заповнення uninitialized_fill
#define неініціалізований_заповнення_н uninitialized_fill_n
#define неініціалізований_хід uninitialized_move
#define неініціалізований_хід_н uninitialized_move_n
#define неініціалізована_конструкція_за_замовчуванням uninitialized_default_construct
#define неініціалізована_конструкція_за_замовчуванням_н uninitialized_default_construct_n
#define неініціалізована_конструкція_значення uninitialized_value_construct
#define неініціалізована_конструкція_значення_n uninitialized_value_construct_n

// Сука, как же я заебался писать эти uninitialized, просто пиздец нахуй. Переведешь ты) Как скажешь. Сука.

#define знищити_ат destroy_at
#define знищити destroy
#define знищити_н destroy_n
#define отримати_тимчасовий_буфер get_temporary_buffer
#define повернути_тимчасовий_буфер return_temporary_buffer

// Smart pointer non-member operation
#define зробити_унікальним make_unique
#define зробити_унікальним_для_перезапису make_unique_for_overwrite
#define зробити_спільним make_shared //  but does it DJENT
#define зробити_спільним_для_перезапису make_shared_for_overwrite
#define розподілити_поділений allocate_shared
#define виділити_спільне_для_перезапису allocate_shared_for_overwrite
#define статичний_покажчик_ролі static_pointer_cast
#define динамічний_пойнт_каст dynamic_pointer_cast
#define константний_кидок_вказівника const_poinet_cast //  ya idy naxui [Done]
#define переосмислити_вказівник reinterpret_pointer_cast
#define отримати_делетер get_deleter
#define міняти_місцями swap
// дело сделано
