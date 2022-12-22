t_list  *ft_make_list(char **list)
{
    t_list  **stack;
    t_list  *aux;
    int     n;

    n = 0;
    *stack = ft_lstnew(&(ft_atoi(list[n])));
    while(list[++n])
    {
        aux = ft_lstnew(&(ft_atoi(list[n])));
        if (!aux)
            return(ft_error)
        ft_lstadd_back(stack, aux);
    }
}