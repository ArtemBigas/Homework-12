# Homework-12

Homework: Write a function IsKPeriodic that checks whether a string is a multiple of K.
The IsKPeriodic function does:
1) creates a pattern for the Knuth-Morris-Pratt algorithm method
2) checks that if the first and last character of the pattern are the same, the last character of the pattern is equal to the next character in the line: with the line absabsabsabs, the program without checking considered that 4 is the correct Multiplicity. Most likely due to the method itself
3) Applies the Knuth-Morris-Pratt Algorithm with counting matches, calculating the product of the number of matches and the multiplicity

Домашнее задание: написать функцию IsKPeriodic, которая проверяет, является ли строка кратной числу К.
Функция IsKPeriodic делает:
1) создает паттерн для метода Алгоритм Кнута-Морриса-Пратта
2) проверяет, чтобы если первый и последний символ паттерна одинаковый, последний символ паттерна был равен следующему символу в строке: при строке absabsabsabs, программа без проверки считала, что 4 - верная Кратность. Скорее всего связано с самим методом
3) Применяет Алгоритм Кнута-Морриса-Пратта с подсчетом совпадений, высчитыванием произведения количества совпадений на кратность
