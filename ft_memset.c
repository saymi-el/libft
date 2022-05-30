/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:29:12 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/14 16:04:40 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset( void *s, int c, size_t n)
{
	char	*s2;
	size_t	i;

	s2 = s;
	i = 0;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}

/*int main() {

    char array[] = "test";
    size_t size = sizeof( char ) * 13;
    int length;

    // Display the initial values
    for( length=0; length<13; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    // Reset the memory bloc
    //memset( array, 48, size );

    // Display the new values 
    for( length=0; length<13; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );
    ft_memset(array, 49, size );
    // Display the new values 
    for( length=0; length<13; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}*/
