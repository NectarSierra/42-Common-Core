/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 06:41:41 by nsaillez          #+#    #+#             */
/*   Updated: 2025/12/09 07:04:41 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const int required_to_sign;
		const int required_to_execute;
	public:
		Form(void);
		Form(std::string r_name, int r_to_sign, int r_to_execute);
		Form(Form& obj);
		~Form();
	private:
		Form& operator=(Form& obj);
	public:
		
};

std::iostream& operator<<(std::iostream& stream, Form& obj);

#endif