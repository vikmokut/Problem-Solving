#include <stdio.h>
#include "main.h"

/**
 * always include quick documentation, also in function files, all new functions should have quick documentations above them.
 * Doc should include: 
 * 	main --> Entry point
 * 	Description --> very short, whatcode is expected to achieve.
 * 	input --> @n: describe
 * 	output --> expected output
 * 	Return --> Always 0 (success) except otherwise expected.
 * code organization for modularity and reuseability
 *
 *
 * to build/compile project "gcc <list all.c source file> -o output_name"
 *
 */

int main() {
	printf("%d", add(5, 2));
	return 0;
}
