/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:57:06 by nsaillez          #+#    #+#             */
/*   Updated: 2025/12/08 17:53:52 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("~Undefined"), grade(150)
{
	// std::cout << "Bureaucrat default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string r_name, int r_grade) : name(r_name), grade(r_grade)
{
	// std::cout << "Bureaucrat parameterized constructor called!" << std::endl;
	if (r_grade < 1)
		throw GradeTooHighException();
	else if (r_grade > 150)
		throw GradeTooLowException();;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) 
{
	// std::cout << "Bureaucrat copy constructor called!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor called!" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (stream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The current grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The current grade is too low\n");
}