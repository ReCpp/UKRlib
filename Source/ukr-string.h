#include <string>

// std::string

#define рядок string // Может использоваться как конструктор/деструктор
/*********************************************************************/

// std::string method`s
#define в_рядок to_string
#define до_числа atoi
#define тип_значення value_type
#define тип_тратис traitss_type
#define алокатор_типу allocator_type
#define довідник reference
#define конст_посилання const_reference
#define покажчик pointer
#define конст_покажчик const_pointer
#define ітератор iterator
#define конст_ітератор const_iterator
#define зворотний_ітератор reverse_iterator
#define конст_зворотний_ітератор const_reverse_iterator
#define різниця_тип difference_type
#define розмір_типу size_type
/*********************************************************************/

// std::string iterators
#define почати begin
#define кінець end
#define зворотній_початок rbegin
#define зворотній_кінець rend
#define зворотній_конст_початок cbegin
#define зворотній_конст_кінець cend
#define PATTERN_WILL_BE_ADDED_LATER crbegin // ?
#define PATTERN_WILL_BE_ADDED_LATER crend // &

// std::string capacity
#define розмір size
#define довгота length
#define макс_розмір max_size
#define змін_розмір resize
#define ємність capacity
#define резерв reverve
#define очистити clear
#define порожній empty
#define // shrink_to_fit ? C++ 11
/**********************************************************************/

// std::string element`s access
#define цей at
#define назад back
#define вперед front

/**********************************************************************/

// std::string modifiers
#define додати append
#define відсунути push_back
#define призначити assign
#define вставити insert
#define стерти erase
#define замінити replace
#define поміняти_місцями swap
#define видалити_останній_символ pop_back

// std::string operations
#define с_рядок c_str
#define дані data
#define отримати_розподільник get_allocator
#define копіювати copy
#define знайти find
#define PATTERN_WILL_BE_ADDED_LATER rfing
#define PATTERN_WILL_BE_ADDED_LATER find_first_of
#define PATTERN_WILL_BE_ADDED_LATER find_last_of
#define PATTERN_WILL_BE_ADDED_LATER find_first_not_of
#define PATTERN_WILL_BE_ADDED_LATER find_last_not_of
#define суб_рядок substr
#define порівняти compare

// std::string member constants
#define макс_розмір_т npos
