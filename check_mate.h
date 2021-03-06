/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:52:42 by orazafin          #+#    #+#             */
/*   Updated: 2017/03/22 19:26:30 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MATE_H
# define CHECK_MATE_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		check_rook(char **tab, int i, int j);
int		main(int argc, char *argv[]);
int		check_pawn(char **tab, int i, int j);
int		check_bishop(char **tab, int i, int j, int size);

#endif
