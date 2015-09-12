cmake_minimum_required(VERSION 3.2)
project(AlgorithmPractice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    "#155 ltc-min_stack/main(AC).cpp"
    "#200 ltc-Number_of_islands/main.cpp"
    "#208 ltc-implement_tree(prefix tree)/main(AC_NotMyOwn).cpp"
    "#208 ltc-implement_tree(prefix tree)/v2.cpp"
    "#224 ltc-basic_calculator/main.cpp"
    "#224 ltc-basic_calculator/V2.cpp"
    "#224 ltc-basic_calculator/V3(Runtime Error).cpp"
    "#224 ltc-basic_calculator/V4(#227AC).cpp"
    "#226 ltc-invert_binary_tree/main(AC).cpp"
    "#258 ltc-add_digits/AC.cpp"
    "#263 ltc-ugly-number/v1(TLE).cpp"
    "#263 ltc-ugly-number/v2.cpp"
    "#263 ltc-ugly-number/v3(AC).cpp"
    "#264 ltc-ugly_numbers_II/main.cpp"
    "#264 ltc-ugly_numbers_II/v2(Memory Limit & C array length).cpp"
    "#264 ltc-ugly_numbers_II/v3.cpp"
    "#264 ltc-ugly_numbers_II/v4.cpp"
    "#273 ltc-Integer_2_English_Words/main.cpp"
    "#273 ltc-Integer_2_English_Words/V2.cpp"
    "#273 ltc-Integer_2_English_Words/v3(AC).cpp"
    "#7 ltc-reverse_integer/main.cpp"
    AlgorithmPractice/main.cpp
    leetcode-candy/main.cpp
    "leetcode-count-primes #204/v1(Time Limit Exceeded).cpp"
    "leetcode-count-primes #204/v2.cpp"
    "leetcode-decode_ways #91/main.cpp"
    "leetcode-decode_ways #91/V2.cpp"
    "leetcode-decode_ways #91/V3.cpp"
    "leetcode-happy_number #202/v1(AC).cpp"
    "ltc-basic_calculator_ii #227/main(AC).cpp"
    "ltc-remove_linked_list_elements #203/main.cpp"
    "ltc-remove_linked_list_elements #203/v2(AC).cpp"
    test2/main.cpp
    "UVa 340 #Master-Mind Hints/V1.cpp")

include_directories(.)
include_directories("#155 ltc-min_stack")
include_directories("#200 ltc-Number_of_islands")
include_directories("#208 ltc-implement_tree(prefix tree)")
include_directories("#224 ltc-basic_calculator")
include_directories("#226 ltc-invert_binary_tree")
include_directories("#258 ltc-add_digits")
include_directories("#263 ltc-ugly-number")
include_directories("#264 ltc-ugly_numbers_II")
include_directories("#273 ltc-Integer_2_English_Words")
include_directories("#7 ltc-reverse_integer")
include_directories(AlgorithmPractice)
include_directories(leetcode-candy)
include_directories("leetcode-count-primes #204")
include_directories("leetcode-decode_ways #91")
include_directories("leetcode-happy_number #202")
include_directories("ltc-basic_calculator_ii #227")
include_directories("ltc-remove_linked_list_elements #203")
include_directories(test2)
include_directories("UVa 340 #Master-Mind Hints")

add_executable(AlgorithmPractice ${SOURCE_FILES})