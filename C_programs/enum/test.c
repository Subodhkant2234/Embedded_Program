#include <stdio.h>
enum week{ sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
	enum week a;
	printf("%d day Size:%d size:%d",saturday, sizeof(enum week), sizeof(a));
	return 0;
}
