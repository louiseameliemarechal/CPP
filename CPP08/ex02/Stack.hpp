/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:11:01 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 16:10:32 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef STACK_HPP
# define STACK_HPP

#include <iostream>
#include <stack>

template < typename T >
class MutantStack : public std::stack< T > {

    public:

        typedef typename std::stack< T >::container_type::iterator iterator;
        typedef typename std::stack< T >::container_type::const_iterator const_iterator;

        MutantStack< T >(void);
        MutantStack< T >( MutantStack< T > const & src );
        MutantStack< T > & operator=( MutantStack< T > const & rhs );
        
        iterator    begin( void );
        iterator    end( void );

        virtual ~MutantStack(void);
};

#include "Stack.tpp"

#endif