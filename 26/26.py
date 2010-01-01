#!/usr/bin/env python

def get_rec_len(num, denom):
	reminders = []
	i = num
	while True:
		i *= 10
		i = i - (i // denom) * denom
		reminders.append(i)

		if reminders.count(reminders[-1]) > 1:
			return len(reminders) - 1 - reminders.index(reminders[-1])


def main():
	max_i = 1
	max_len = 1

	for i in range(1, 1000):
		l = get_rec_len(1, i)
		if l > max_len:
			max_i = i
			max_len = l

	print 'the fraction with the longest recurring cycle is 1/%i with %i recurring digits' % (max_i, max_len)


if __name__ == '__main__':
	main()
