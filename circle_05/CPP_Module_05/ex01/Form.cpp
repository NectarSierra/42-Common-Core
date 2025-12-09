/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 06:52:15 by nsaillez          #+#    #+#             */
/*   Updated: 2025/12/09 07:30:09 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: name("")
	, required_to_sign(150)
	, required_to_execute(150)
{
	std::cout << "Form default constructor called!" << std::endl;
	this->is_signed = 0;
}

Form::Form(std::string r_name, int r_to_sign, int r_to_execute)
	: name(r_name)
	, required_to_sign(r_to_sign)
	, required_to_execute(r_to_execute)
{
	std::cout << "Form parameterized constructor called!" << std::endl;
}

std::string Form::getName(void)
{
	return (this->name);
}

std::iostream& operator<<(std::iostream& stream, Form& obj)
{
	stream << obj.getName();
}