/*The strcpy() function copies the string pointed to by src,
including the terminating null byte ('\0'), to the buffer pointed
to by dest.  The strings may not overlap, and the destination
string dest must be large enough to receive the copy.  Beware of
buffer overruns!  (See BUGS.)

THE STRNCPY() FUNCTION IS SIMILAR, EXCEPT THAT AT MOST N BYTES OF
SRC ARE COPIED.  WARNING: IF THERE IS NO NULL BYTE AMONG THE
FIRST N BYTES OF SRC, THE STRING PLACED IN DEST WILL NOT BE NULL-
TERMINATED.*/

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while(i != n - 1)
	{
		dest[i] = src[i];
		i++
	}
	result(dest);
}