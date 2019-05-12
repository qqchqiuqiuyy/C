#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time add(const struct time lhs, const struct time rhs);
int time_cmp(const struct time lhs, const struct time rhs);
void show_time(const struct time t);

int main()
{
	struct time t1 = {13, 35, 54}, t2 = {8, 43, 44};
	struct time t3 = add(t1, t2);
	show_time(t3);
	
	t1.hours = 8;
	puts("");
	show_time(t1);
	show_time(t2);
	printf("%d\n",time_cmp(t1, t2));
	
	t1.minutes = 43;
	puts("");
	show_time(t1);
	show_time(t2);
	printf("%d\n",time_cmp(t1, t2));
	
	t1.seconds = 44;
	puts("");
	show_time(t1);
	show_time(t2);
	printf("%d\n",time_cmp(t1, t2));
	return 0;
}

struct time add(const struct time lhs, const struct time rhs)
{
	struct time res = {lhs.hours + rhs.hours, lhs.minutes + rhs.minutes, lhs.seconds + rhs.seconds};
	if (res.seconds >= 60)
		res.minutes++, res.seconds -= 60;
	if (res.minutes >= 60)
		res.hours++, res.minutes -= 60;
	if (res.hours >= 24)
		res.hours -= 24;
	return res;
}

int time_cmp(const struct time lhs, const struct time rhs)
{
	if (lhs.hours > rhs.hours)
		return 1;
	else if (lhs.hours == rhs.hours && lhs.minutes > rhs.minutes)
		return 1;
	else if (lhs.hours == rhs.hours && lhs.minutes == rhs.minutes && lhs.seconds > rhs.seconds)
		return 1;
	else if (lhs.hours == rhs.hours && lhs.minutes == rhs.minutes && lhs.seconds == rhs.seconds)
		return 0;
	else
		return -1;
}

void show_time(const struct time t)
{
	printf("time: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}


