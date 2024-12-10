char *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i])
        i++;
    dest = malloc(i + 1);
    if (dest == 0)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char *src = "Hello World";
    char *dest = ft_strdup(src);
    printf("%s\n", dest);
    free(dest);
    return 0;
}