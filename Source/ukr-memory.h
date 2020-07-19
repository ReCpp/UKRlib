#include <memory>

#pragma once

//c memory lib
//---------------------------------------------------------
// Pointer traits
#define pointer_traits

//Garbage collector support
#define pointer_safety

//Allocators
#define allocator
#define allocator_traits
#define allocator_arg_t
#define allocator_arg
#define uses_allocator

//Uninitialized storage
#define raw_storage_iterator

//Smart pointers (!!!)
#define unique_ptr
#define shared_ptr
#define weak_ptr
#define auto_ptr

//Helper classes
#define atomic
#define owner_less
#define enable_shared_from_this
#define bad_weak_ptr
#define default_delete
#define hash
//---------------------------------------------------------
//
//Functions//
//
//Miscellaneous
#define to_address
#define addressof
#define align
#define assume_aligned

//Garbage collector support
#define declare_reachable
#define undeclare_reachable
#define declare_no_pointers
#define get_poiner_safety

//Uninitialized storage
#define uninitialized_copy
#define uninitialized_copy_n
#define uninitialized_fill
#define uninitialized_fill_n
#define uninitialized_move
#define uninitialized_move_n
#define uninitialized_default_construct
#define uninitialized_default_construct_n
#define uninitialized_value_construct
#define uninitialized_value_construct_n

//Сука, как же я заебался писать эти uninitialized, просто пиздец нахуй. Переведешь ты) 

#define destroy_at
#define destroy
#define destroy_n
#define get_temporary_buffer
#define return_temporary_buffer

//Smart pointer non-member operation
#define make_unique
#define make_unique_for_overwrite
#define make_shared
#define make_shared_for_overwrite
#define allocate_shared
#define allocate_shared_for_overwrite
#define static_pointer_cast
#define dynamic_pointer_cast
#define const_poinet_cast
#define reinterpret_pointer_cast
#define get_deleter
#define swap


