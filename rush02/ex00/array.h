/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:58:47 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/16 02:25:10 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

char		**ft_malloc_array(int len);
void		ft_reset_array(char **dict_array, int len);
char		**ft_make_array(char **argv);
void		ft_free_array(char **dict_array, int len);

#endif
