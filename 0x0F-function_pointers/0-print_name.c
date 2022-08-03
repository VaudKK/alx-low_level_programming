
/**
 * print_name - prints name
 * @name: the name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
