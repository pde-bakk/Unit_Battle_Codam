
int	get_next_score(int *input[], int *index, int extra) {
	return (*(input[*index + extra]));
}

int collect_next_roundscore(int *input[], int *index) {
	int score;

	score = *(input[*index]);
	index++;
	if (score == 10) {
		// strike
		score += get_next_score(input, index, 0);
		score += get_next_score(input, index, 1);
		return (score);
	}
	if (score < 10)
	{
		// option to score twice
		score += get_next_score(input, index, 0);
		index++;
	}
	if (score > 10) {
		// throw error
		return (-1);
	}
	if (score == 10) {
		score += get_next_score(input, index, 0);
	}
	return (score);
}
