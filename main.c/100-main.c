#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
/**    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
/**    int array[] = {19, 48, 99, 71, 13, 71, 71, 71, 86, 7};*/
/**	int array[] = {62, 38, 64, 5, 43, 31, 10, 94, 36, 77, 32, 34, 39, 33, 12, 9, 67, 27, 30, 48, 88, 22, 7, 49, 75, 42, 21, 2, 50, 96, 37, 26, 58, 25, 52, 1, 60, 14, 74, 28, 8, 76, 93, 95, 100, 85, 54, 24, 71, 73, 48, 19, 55, 67, 18, 35, 71, 36, 37, 92, 0, 1, 45, 3, 86, 60, 41, 14, 83, 39, 88, 74, 94, 95, 89, 15, 62, 33, 54, 17, 8, 6, 59, 46, 63, 16, 81, 61, 24, 5, 11, 66, 29, 91, 96, 31, 40, 4, 58, 25, 80, 10, 12, 50, 53, 77, 51, 6, 63, 61, 81, 96, 45, 40, 34, 89, 83, 39, 92, 20, 42, 23, 19, 18, 15, 64, 88, 41, 48, 32, 1, 30, 54, 25, 86, 95, 71, 31, 98, 52, 0, 65, 60, 9, 22, 26, 5, 56, 72, 70, 72, 14, 16, 5, 58, 25, 48, 8, 70, 1, 6, 18, 13, 52, 89, 21, 64, 24, 68, 99, 46, 19, 4, 40, 15, 17, 80, 74, 33, 35, 53, 59, 2, 57, 9, 81, 92, 61, 54, 82, 96, 95, 56, 94, 11, 90, 67, 51, 73, 49, 74, 52, 89, 24, 55, 58, 56, 29, 69, 2, 87, 45, 39, 79, 88, 40, 47, 91, 15, 26, 1, 96, 51, 72, 76, 99, 94, 19, 30, 84, 64, 35, 23, 38, 42, 86, 21, 9, 68, 67, 34, 13, 77, 61, 81, 60, 65, 16, 33, 4, 62, 38, 64, 5, 43, 31, 10, 94, 36, 77, 32, 34, 39, 33, 12, 9, 67, 27, 30, 48, 88, 22, 7, 49, 75, 42, 21, 2, 50, 96, 37, 26, 58, 25, 52, 1, 60, 14, 74, 28, 8, 76, 93, 95, 100, 85, 54, 24, 71, 73, 294, 304, 419, 343, 78, 165, 473, 423, 161, 14, 242, 396, 128, 431, 265, 323, 217, 288, 196, 349, 103, 451, 156, 25, 263, 478, 272, 416, 44, 48, 5, 326, 458, 277, 339, 388, 59, 231, 256, 174, 491, 140, 177, 445, 360, 280, 159, 494, 70, 493, 254, 43, 22, 45, 90, 397, 98, 187, 155, 332, 202, 284, 158, 470, 342, 62, 4, 258, 173, 310, 252, 320, 205, 425, 53, 245, 184, 239, 434, 201, 373, 212, 269, 270, 118, 407, 319, 188, 345, 124, 150, 93, 20, 178, 455, 421, 424, 229, 372, 222, 112, 233, 444, 88, 94, 307, 214, 324, 163, 328, 160, 199, 291, 232, 450, 7, 293, 448, 306, 171, 92, 39, 312, 146, 483, 260, 318, 1, 489, 305, 438, 285, 297, 394, 464, 81, 427, 56, 50, 111, 213, 358, 170, 12, 113, 147, 338, 162, 457, 253, 488, 221, 243, 82, 19, 109, 117, 405, 157, 192, 466, 275, 452, 383, 335, 468, 387, 467, 249, 65, 350, 164, 138, 24, 9, 418, 484, 38, 64, 139, 281, 57, 66, 179, 97, 63, 87, 175, 123, 182, 327, 209, 411, 95, 456, 422, 136, 168, 336, 292, 41, 55, 389, 125, 487, 262, 121, 330, 204, 15, 462, 13, 195, 477, 181, 132, 106, 317, 18, 46, 465, 356, 61, 426, 230, 218, 51, 472, 176, 347, 410, 28, 500, 144, 153, 351, 135, 76, 216, 316, 406, 371, 197, 2, 369, 334, 432, 289, 185, 362, 365, 110, 27, 315, 257, 453, 409, 322, 244, 69, 386, 469, 377, 167, 400, 169, 325, 268, 8, 313, 352, 274, 366, 267, 84, 498, 344, 436, 417, 133, 412, 215, 100, 454, 166, 370, 99, 143, 311, 0, 58, 108, 208, 102, 299, 401, 225, 331, 398, 42, 271, 381, 295, 430, 266, 395, 75, 30, 375, 52, 149, 134, 226, 359, 235, 276, 391, 287, 189, 141, 475, 283, 264, 151, 486, 273, 441, 91, 33, 354, 321, 74, 3, 402, 131, 279, 461, 148, 172, 79, 363, 207, 206, 130, 301, 10, 278, 220, 107, 154, 223, 119, 16, 414, 127, 85, 476, 497, 54, 399, 137, 459, 382, 341, 115, 116, 420, 180, 481, 440, 224, 238, 86, 37, 183, 413, 145, 40, 36, 499};*/
/**	int array[] = {2, 1, 69, 48, 3};*/
	int array[] = {3};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
