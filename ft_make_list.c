t_list  *ft_make_list(char **list)
{
    t_list  **stack;
    int     n;

    n = 0;
    *stack = ft_lstnew(&(ft_atoi(list[n])));
    while(list[++n])
    {
        ft_lstadd_back
    }
}