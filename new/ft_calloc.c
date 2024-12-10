void *ft_calloc(int count, int size)
{
    void *ptr;
    int i;

    ptr = malloc(count * size);
    if (ptr == 0)
        return (0);
    i = 0;
    while (i < count * size)
    {
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}