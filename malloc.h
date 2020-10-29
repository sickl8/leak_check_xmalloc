/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 21:15:29 by isaadi            #+#    #+#             */
/*   Updated: 2019/12/22 17:11:59 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H

# define MALLOC_H

# define malloc xmalloc
# define free xfree
# define exit xexit
# include <stddef.h>
void	*xmalloc(size_t xbytes);
void	xfree(void *adr);
void	xexit(int x);
void	leakcheck();
void	leakcheckfull();

#endif
