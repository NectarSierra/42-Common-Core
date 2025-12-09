/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:35:07 by nsaillez          #+#    #+#             */
/*   Updated: 2025/12/09 12:41:58 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string target)
	: AForm("PresidentialPadon", 145, 137)
{
	std::cout << "Creating file: " << target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm () {}