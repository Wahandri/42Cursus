char *ft_strnstr(char *haystack, char *needle, int len)
{
    int i;
    int j;

    i = 0;
    if (needle[0] == '\0')
        return (haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return (&haystack[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int main()
{
    char *haystack = "Hello World";
    char *needle = "World";
    int len = 11;
    printf("%s\n", ft_strnstr(haystack, needle, len));
    return 0;
}
