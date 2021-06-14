/*The strcpy() function copies the string pointed to by src,
including the terminating null byte ('\0'), to the buffer pointed
to by dest.  The strings may not overlap, and the destination
string dest must be large enough to receive the copy.  Beware of
buffer overruns!  (See BUGS.)*/



char *ft_strcpy(char *dest, char *src)
{
	i = 0;
	while(src[i] != 0)
	{
		dest[i] = src[i];
		i++;
		
	}
	dest[i] = '\0';
	return(dest);
}