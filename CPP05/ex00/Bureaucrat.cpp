/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:37:26 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:47:58 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(150) {

	std::cout << "Bureaucrat default constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {

	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());

	this->_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()) {

	*this = src;
	std::cout << "Bureaucrat copy constructor called" << std::endl;

	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Bureaucrat destructor called" << std::endl;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if (this != &rhs)
	this->_grade = rhs.getGrade();

	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const & rhs) {

	os << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade() << std::endl;

	return (os);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

std::string const &	Bureaucrat::getName( void ) const {

	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {

	return (this->_grade);
}

void	Bureaucrat::incrementBureaucrateGrade( void ) {

	if (this->_grade <= 1)
		throw(GradeTooHighException());

	this->_grade--;
}

void	Bureaucrat::decrementBureaucrateGrade( void ) {

	if (this->_grade >= 150)
		throw(GradeTooLowException());

	this->_grade++;
}