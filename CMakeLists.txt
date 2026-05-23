cmake_minimum_required(VERSION 3.10)
project(CalcProject)

# Включаем CTest
enable_testing()

# Указываем, где искать заголовочные файлы
include_directories(${CMAKE_SOURCE_DIR}/src)

# Создаём БИБЛИОТЕКУ из исходников (без main)
add_library(calc_lib src/calc.cpp)

# Создаём исполняемый файл для тестов (с main)
add_executable(test_calc tests/test_calc.cpp)

# Линкуем тесты с нашей библиотекой
target_link_libraries(test_calc calc_lib)

# Добавляем тест в CTest
add_test(NAME TestCalc COMMAND test_calc)
