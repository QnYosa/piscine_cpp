#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample 
{
	public:

		char	a1;
		char	a2;
		char	a3;

		Sample (char p1, int p2, float p3);
		~Sample (void);

		void	bar(void);
};

#endif