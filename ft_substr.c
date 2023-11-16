#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subs;

    if (ft_strlen(s) <= start)
    {
        subs = malloc(1);
        if (!subs)
            return (0);
        *subs = 0;
        return (subs);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    subs = malloc(sizeof(char) * len + 1);
    if (!subs)
        return (0);
    ft_strlcpy(subs, &s[start], len + 1);
    return (subs);
}