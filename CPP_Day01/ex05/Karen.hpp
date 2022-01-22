/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:10:49 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 21:24:29 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>
# include <string>


class Karen
	{
		typedef struct s_status
		{
			std::string name;
			void(Karen::*ptr)(void);
		}t_status;
	public:
		Karen();
		void complain(std::string level);
		~Karen();

	private:
		t_status stat[4];
		void init(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

};

#endif