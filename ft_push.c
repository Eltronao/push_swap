void	ft_push(t_list **stack1, t_list **stack2, char c)
{
	t_list	*aux;

	aux = *stack1;
	*stack1 = *stack1->next;
	aux->next = *stack2;
	*stack2 = aux;
	ft_printf("p%c\n", c);
}
