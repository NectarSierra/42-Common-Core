/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 06:41:41 by nsaillez          #+#    #+#             */
/*   Updated: 2025/12/09 10:25:36 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool is_signed;
		const int required_to_sign;
		const int required_to_execute;
	public:
		AForm(void);
		AForm(std::string r_name, int r_to_sign, int r_to_execute);
		AForm(const AForm& obj);
		virtual ~AForm();
	private:
		AForm& operator=(AForm& obj);
	public:
		virtual std::string getName(void) const;
		virtual bool getSignature(void) const;
		virtual int getGradeRequiredToSign(void) const;
		virtual int getGradeRequiredToExecute(void) const;
		virtual void beSigned(Bureaucrat& obj);

	class GradeTooHighException : public std::exception
	{
		private:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, AForm& obj);

#endif