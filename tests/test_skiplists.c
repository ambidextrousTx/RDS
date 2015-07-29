/* Test the skip lists */

#include "../skiplists/skiplists.c"

int main(int argc, const char *argv[])
{
	int test_array[] = {1, 3, 4, 5, 7, 9, 10, 11};
	build_bottom_layer(test_array, 8);

	return 0;
}
