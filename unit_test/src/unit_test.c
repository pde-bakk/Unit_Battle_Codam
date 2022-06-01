/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 16:46:15 by safoh         #+#    #+#                 */
/*   Updated: 2022/06/01 16:29:47 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

void	tester(double x, double y, double expected);
double ft_pow(double x, double y)
{
	return (x * y);
}


void	tester(double x, double y, double expected)
{
	double submitted;
	submitted = ft_pow(x, y);
	cr_assert(ft_pow(x, y) == expected,
		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
		submitted, x, y, expected
		);
}

// returns score
int	get_next_score(int *input[], int *index, int extra);
int collect_next_roundscore(int *input[], int *index);

Test(Example_Tests, should_pass_all_tests_provided)
{
	tester(1.0, 1.0, 1.0);
	const int input[] = {9, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1};
	int index = 0;
	int first_roundscore = collect_next_roundscore((int**)&input, &index);
	cr_assert( first_roundscore == 18, "Submitted: %d, expected %d\n", first_roundscore, 18);
	cr_assert( index == 2, "Index now is %d, expected %d\n", index, 2);
}
