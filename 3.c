#include<stdio.h>
int main()
{

	printf("we use backslash to display the character\\\n");
	printf("using \\n:\n");
	printf("using \\t:\t...after \\t\n");
	printf("using \\a:\a...audible bell\n");
	printf("using \\r \rto position the cursor to the beginning of the current line\n");
	printf("printing apostrophee:\'\n");
	printf("printing double qotation marks:\"\n");
	printf("null character \0 is used to display the end of the string\n");
	printf("to dislay the question mark:\?\n");
	printf("using\vvertical \v tab \v escape\v sequence\n");
	printf("using\bbackspace\bescape\bsequence\n");
	printf("using\eescape\echaracter\n");
	printf("using\fform\ffeed\fpage\fbreak\n");
	return 0;
}

/*
C:\monica>gcc 3.c

C:\monica>a
we use backslash to display the character\
using \n:
using \t:       ...after \t
using \a:...audible bell
to position the cursor to the beginning of the current line
printing apostrophee:'
printing double qotation marks:"
null character to dislay the question mark:?
usingvertical  tab  escape sequence
usinbackspacescapsequence
usingescapecharacter
usingformfeedpagebreak
*/

/*
If a backslash precedes a character that does not appear in the table, the compiler handles the undefined character as the character itself. For example, \c is treated as an c.

By default, GCC assumes that the C character escape sequences take on their ASCII values for the target. If this is not correct, you must explicitly define all of the macros below. All of them must evaluate to constants; they are used in case statements.
the \e and \E escapes are GNU extensions, not part of the C standard.

*/
