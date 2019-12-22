/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 21:15:29 by isaadi            #+#    #+#             */
/*   Updated: 2019/12/22 14:59:04 by ael-bahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define malloc xmalloc
#define free xfree
#define exit xexit
#include <stddef.h>
void	*xmalloc(size_t xbytes);
void	xfree(void *adr);
void	leakcheck();
void	leakcheckfull();
void	xexit(int x);
