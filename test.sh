argv="1 4 3 7 6 8 14 12 16 9 10 11";./push_swap $argv | ./checker $argv
argv="1 5 2 4 3";./push_swap $argv | ./checker $argv
echo "-------- no argument -----------"
valgrind --leak-check=full -q ./push_swap

echo "-------- empty string -----------"
valgrind --leak-check=full -q ./push_swap ""

echo "-------- is sorted -----------"
valgrind --leak-check=full -q ./push_swap 2 3 4

echo "------- 1 arg ------------"
valgrind --leak-check=full -q ./push_swap 2

echo "--------- has duplicate ----------"
valgrind --leak-check=full -q ./push_swap 2 2

echo "---------string argument----------"
valgrind --leak-check=full -q ./push_swap aslkjfjh lkfjasdlkj

echo "---------INT_MIN -1----------"
valgrind --leak-check=full -q ./push_swap -2147483649

echo "---------INT_MAX +1----------"
valgrind --leak-check=full -q ./push_swap 2147483648

echo "--------- LONG_MIN - 1----------"
valgrind --leak-check=full -q ./push_swap -9223372036854775809

echo "--------- LONG_MAX + 1----------"
valgrind --leak-check=full -q ./push_swap 9223372036854775808

echo "---------INT_MIN, INT_MAX----------"
valgrind --leak-check=full -q ./push_swap -2147483648 2147483647

echo "--------- test 1 ----------"
valgrind --leak-check=full -q ./push_swap 5 4 3 2 1 23847

echo "-------- test 2 -----------"
valgrind --leak-check=full -q ./push_swap 9 8 7 6 5 4 3 2 1 0 -1 -2 -3
