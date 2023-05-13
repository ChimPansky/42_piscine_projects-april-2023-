/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:22:01 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 13:21:27 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dest[i] && i < size)
		i++;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buff[10] = "123";
	//size_t	buff_size = sizeof(buff);
	char	*source = "4567890";
	
	printf("ft_strlcat: %d\n", ft_strlcat(buff, source, 6));
	printf("buff: %s\n", buff);
//	printf("strlcat: %d\n", strlcat(buff, source, buff_size));
	
	char dest[10] = "";
    char *src1 = "hello";
    size_t result1 = ft_strlcat(dest, src1, sizeof(dest));
    printf("Test case 1: dest=%s, src1=%s, result=%zu\n", dest, src1, result1);
    
    // Test case 2: Empty source string
    char dest2[10] = "world";
    char *src2 = "";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Test case 2: dest=%s, src2=%s, result=%zu\n", dest2, src2, result2);
    
    // Test case 3: Destination buffer is too small
    char dest3[5] = "123";
    char *src3 = "456";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    printf("Test case 3: dest=%s, src3=%s, result=%zu\n", dest3, src3, result3);
    
    // Test case 4: Destination buffer is exactly the right size
    char dest4[8] = "hello";
    char *src4 = "world";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Test case 4: dest=%s, src4=%s, result=%zu\n", dest4, src4, result4);
    
    // Test case 5: Destination buffer is larger than necessary
    char dest5[10] = "hello";
    char *src5 = "world";
    size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    printf("Test case 5: dest=%s, src5=%s, result=%zu\n", dest5, src5, result5);
    
    // Test case 6: Destination and source strings overlap
    char dest6[10] = "hello";
    char *src6 = dest6 + 2;
    size_t result6 = ft_strlcat(dest6, src6, sizeof(dest6));
    printf("Test case 6: dest=%s, src6=%s, result=%zu\n", dest6, src6, result6);
    
    // Test case 7: Concatenated string is exactly the size of the buffer
    char dest7[6] = "1234";
    char *src7 = "567";
    size_t result7 = ft_strlcat(dest7, src7, sizeof(dest7));
    printf("Test case 7: dest=%s, src7=%s, result=%zu\n", dest7, src7, result7);
    
    // Test case 8: Concatenated string is larger than the size of the buffer
    char dest8[5] = "123";
    char *src8 = "4567";
    size_t result8 = ft_strlcat(dest8, src8, sizeof(dest8));
    printf("Test case 8: dest=%s, src8=%s, result=%zu\n", dest8, src8, result8);

}
*/
