#include "ft_door.c"

int		main(void)
{
	t_door		door = {CLOSE};

	if (is_door_open(&door))
		close_door(&door);
	if (is_door_close(&door))
		ft_putstr("Already closed");
	return (0);
}
