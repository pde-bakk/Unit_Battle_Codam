/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 16:46:15 by safoh         #+#    #+#                 */
/*   Updated: 2022/06/01 16:33:16 by dmalacov      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

// void	tester(double x, double y, double expected);
// double ft_pow(double x, double y)
// {
// 	return (x * y);
// }
// Test(Example_Tests, should_pass_all_tests_provided)
// {
// 	tester(1.0, 1.0, 1.0);
// 	tester(1.5, 4.0, 6.0);
// }

// void	tester(double x, double y, double expected)
// {
// 	double submitted;
// 	submitted = ft_pow(x, y);
// 	cr_assert(ft_pow(x, y) == expected,
// 		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
// 		submitted, x, y, expected
// 		);
// }

int	check_num_of_args(int argc);
void	tester(int input, int expected);

void	Test_num_of_args()
{
	tester(10, INVALID);
}

void	tester(int input, int expected)
{
	int result;
	result = check_num_of_args(input);
	cr_assert(check_num_of_args(input) == expected,
		"Result:\t%d for %d arguments \nExpected:\t%d\n",
		result, input, expected
		);
}