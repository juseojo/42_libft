/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjuncho <seongjch@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 06:55:38 by seongjuncho       #+#    #+#             */
/*   Updated: 2022/01/07 17:00:24 by seongjuncho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*b_dst;
	unsigned char	*b_src;
	unsigned int	cnt;

	cnt = 0;
	b_src = src;
	b_dst = dst;

	if (dst < src)
	{
		while (cnt < len)
		{
			*(b_dst + cnt) = *(b_src + cnt);
			cnt++;
		}
	}
	else
	{
		cnt++;
		while (cnt < len)
		{
			*(b_dst + len - cnt) = *(b_src + len -  cnt);
			cnt++;
		}
	}
	return (dst);
}
