/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 07:54:10 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/14 07:57:04 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	unsigned char	c;

	c = (unsigned char)(ch);
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}