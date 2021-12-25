/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjuncho <seongjch@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 06:55:38 by seongjuncho       #+#    #+#             */
/*   Updated: 2021/12/26 05:31:00 by seongjuncho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*b_dst;
	unsigned char	*b_src;
	unsigned char	*buf;
	unsigned int	cnt;

	cnt = 0;
	b_src = src;
	b_dst = dst;
	while (cnt < len)
	{
		*(buf + cnt) = *(b_src + cnt);
		cnt++;
	}
	cnt = 0;
	while (cnt < len)
	{
		*(b_dst + cnt) = *(buf + cnt);
		cnt++;
	}
	return (dst);
}