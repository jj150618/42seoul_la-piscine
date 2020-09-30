/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 00:28:59 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/16 02:25:48 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <fcntl.h>

char		*ft_read_dict(void);
void		ft_check_value(char *str, char *dict, int value);
int			ft_check_1000(char *digit);
void		ft_print_1000(int a);

#endif
