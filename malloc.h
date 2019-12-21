/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 21:15:29 by isaadi            #+#    #+#             */
/*   Updated: 2019/12/19 21:15:30 by isaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define malloc xmalloc
#define free xfree
#include <stddef.h>
void	*xmalloc(size_t xbytes);
void	xfree(void *adr);
void	leakcheck();
void	leakcheckfull();