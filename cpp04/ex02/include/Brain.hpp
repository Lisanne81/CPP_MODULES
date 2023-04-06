#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	protected:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain& copy);
		Brain& operator=(const Brain& other);
		~Brain(void);

		std::string	getIdeas(int index) const;
		int			getNrIdeas(void) const;
		void		setIdeas(int index, std::string newIdeas);

};

#endif
