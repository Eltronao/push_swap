void	ft_rev_rot(t_list **stack, char c, int i)
{
	t_list	*now;
	t_list	*prev;

	prev = *stack;
	now = prev->next;
	while (now->next)
	{
		prev = now
		now = now->next;
	}
	prev->next = NULL;
	now->next = *stack;
	*stack = now;
	if (i != 0)
		ft_printf("rr%c\n",c);
}
