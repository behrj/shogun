#include <shogun/lib/config.h>

#include <stdio.h>

#ifdef HAVE_CMDLINE
void sg_print_message(FILE* target, const char* str)
{
	fprintf(target, "%s", str);
}

void sg_print_warning(FILE* target, const char* str)
{
	fprintf(target, "%s", str);
}

void sg_print_error(FILE* target, const char* str)
{
	fprintf(target, "%s", str);
}

void sg_cancel_computations(bool &delayed, bool &immediately)
{
}
#endif
