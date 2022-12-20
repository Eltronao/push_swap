void	ft_swap(t_list **stack, char c, int i)
{
	t_list	*aux;
	
	aux = *stack->next;
	*stack->next = stack->next->next;
	aux->next = *stack;
	*stack = aux;
	if (i != 0)
		ft_printf("s%c\n");
}
