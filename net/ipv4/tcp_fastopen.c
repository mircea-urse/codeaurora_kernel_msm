#include <linux/init.h>
#include <linux/kernel.h>
#include <net/tcp.h>

int sysctl_tcp_fastopen __read_mostly = TFO_CLIENT_ENABLE;

static int __init tcp_fastopen_init(void)
{
	return 0;
}

late_initcall(tcp_fastopen_init);
