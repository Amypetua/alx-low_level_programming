
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	printf("Size of a double: %g byte(s)\n", sizeof(double));
	printf("Size of a long double: %lg byte(s)\n", sizeof(long double));
	printf("Size of an unsigned int: %u byte(s)\n", sizeof(unsigned int));
	printf("Size of an unsigned long int: %lu byte(s)\n", sizeof(unsigned long int));
	return (0);
}
