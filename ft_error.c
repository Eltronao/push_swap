char    ft_error(int e_type)
{
    if (e_type == 0)
        write(0, "Error. No parameters detected. Aborting\n", 40);
    else if (e_type == 1)
        write (0, "Error. Parameter format is not valid. Aborting\n", 47);
}