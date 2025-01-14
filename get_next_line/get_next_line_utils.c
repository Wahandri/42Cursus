#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = ft_strdup("");
		if (!s1)
			return (NULL);
	}
	if (!s2)
		return (NULL);
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	free(s1);
	return (joined);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
		return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*free_buffer(char *buffer)
{
	free(buffer);
	return (NULL);
}

char	*create_new_buffer(char *buffer, size_t start)
{
	size_t	j;
	char	*new_buffer;

	new_buffer = (char *)malloc(ft_strlen(buffer + start) + 1);
	if (!new_buffer)
		return (NULL);
	j = 0;
	while (buffer[start])
	{
		new_buffer[j] = buffer[start];
		start++;
		j++;
	}
	new_buffer[j] = '\0';
	return (new_buffer);
}

char	*update_buffer(char *buffer)
{
	char	*new_buffer;
	size_t 	i;
	
	if (!buffer)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free_buffer(buffer));
	new_buffer = create_new_buffer(buffer, i + 1);
	free(buffer);
	return (new_buffer);
}

char	*extract_line(char *buffer)
{
	size_t	i;
	size_t	line_len;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line_len = (buffer[i] == '\n') ? i + 1 : i;
	line = (char *)malloc(line_len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < line_len)
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
